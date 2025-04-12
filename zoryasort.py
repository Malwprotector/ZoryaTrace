import tkinter as tk
from tkinter import filedialog, messagebox, ttk
import PyPDF2
import csv
import re
import os
from threading import Thread

class PDFToCSVConverter:
    def __init__(self, root):
        self.root = root
        self.root.title("PDF to CSV Converter")
        self.root.geometry("600x400")
        self.setup_ui()
        
        # Configure styles
        self.style = ttk.Style()
        self.style.configure('TFrame', background='#f0f0f0')
        self.style.configure('TButton', font=('Arial', 10), padding=5)
        self.style.configure('TLabel', background='#f0f0f0', font=('Arial', 10))
        
    def setup_ui(self):
        # Main frame
        main_frame = ttk.Frame(self.root, padding="10")
        main_frame.pack(fill=tk.BOTH, expand=True)
        
        # Title
        title_label = ttk.Label(main_frame, 
                               text="PDF to CSV Converter", 
                               font=('Arial', 14, 'bold'))
        title_label.pack(pady=10)
        
        # Instructions
        instr_label = ttk.Label(main_frame, 
                               text="Select PDF files to convert sentences to CSV with 'neutral' labels",
                               wraplength=500)
        instr_label.pack(pady=5)
        
        # File selection button
        self.select_button = ttk.Button(main_frame, 
                                      text="Select PDF Files", 
                                      command=self.select_files)
        self.select_button.pack(pady=10)
        
        # Selected files listbox
        self.files_listbox = tk.Listbox(main_frame, 
                                      height=8, 
                                      selectmode=tk.EXTENDED,
                                      font=('Arial', 9))
        self.files_listbox.pack(fill=tk.BOTH, expand=True, pady=10)
        
        # Remove selected button
        remove_button = ttk.Button(main_frame, 
                                  text="Remove Selected", 
                                  command=self.remove_selected)
        remove_button.pack(pady=5)
        
        # Progress bar
        self.progress = ttk.Progressbar(main_frame, 
                                      orient=tk.HORIZONTAL, 
                                      length=300, 
                                      mode='determinate')
        self.progress.pack(pady=10)
        
        # Convert button
        self.convert_button = ttk.Button(main_frame, 
                                       text="Convert to CSV", 
                                       command=self.start_conversion,
                                       state=tk.DISABLED)
        self.convert_button.pack(pady=10)
        
        # Status label
        self.status_label = ttk.Label(main_frame, text="Ready")
        self.status_label.pack()
        
    def select_files(self):
        filetypes = [("PDF files", "*.pdf"), ("All files", "*.*")]
        filenames = filedialog.askopenfilenames(title="Select PDF files", filetypes=filetypes)
        
        if filenames:
            for f in filenames:
                if f not in self.files_listbox.get(0, tk.END):
                    self.files_listbox.insert(tk.END, f)
            
            self.convert_button.config(state=tk.NORMAL)
    
    def remove_selected(self):
        selected = self.files_listbox.curselection()
        for i in reversed(selected):
            self.files_listbox.delete(i)
        
        if not self.files_listbox.size():
            self.convert_button.config(state=tk.DISABLED)
    
    def start_conversion(self):
        output_file = filedialog.asksaveasfilename(
            title="Save CSV file",
            defaultextension=".csv",
            filetypes=[("CSV files", "*.csv"), ("All files", "*.*")]
        )
        
        if output_file:
            files = self.files_listbox.get(0, tk.END)
            Thread(target=self.convert_files, args=(files, output_file), daemon=True).start()
    
    def convert_files(self, pdf_files, output_csv):
        self.update_ui_state(False)
        total_files = len(pdf_files)
        
        try:
            with open(output_csv, 'w', newline='', encoding='utf-8') as csvfile:
                writer = csv.writer(csvfile)
                writer.writerow(['v1', 'v2', '', '', ''])  # Write header
                
                for i, pdf_file in enumerate(pdf_files):
                    self.update_status(f"Processing {os.path.basename(pdf_file)} ({i+1}/{total_files})")
                    self.progress['value'] = (i / total_files) * 100
                    self.root.update()
                    
                    try:
                        with open(pdf_file, 'rb') as file:
                            reader = PyPDF2.PdfReader(file)
                            
                            for page in reader.pages:
                                text = page.extract_text()
                                if text:
                                    # Split into sentences (simple approach)
                                    sentences = re.split(r'(?<!\w\.\w.)(?<![A-Z][a-z]\.)(?<=\.|\?)\s', text)
                                    
                                    for sentence in sentences:
                                        sentence = sentence.strip()
                                        if sentence and len(sentence.split()) > 3:  # Filter very short sentences
                                            writer.writerow(['neutral', sentence, '', '', ''])
                    
                    except Exception as e:
                        self.update_status(f"Error processing {pdf_file}: {str(e)}")
                        continue
                
                self.progress['value'] = 100
                self.update_status(f"Conversion complete! Saved to {output_csv}")
                messagebox.showinfo("Success", f"CSV file created successfully at:\n{output_csv}")
        
        except Exception as e:
            self.update_status(f"Error: {str(e)}")
            messagebox.showerror("Error", f"Failed to create CSV file:\n{str(e)}")
        
        finally:
            self.update_ui_state(True)
    
    def update_ui_state(self, enabled):
        state = tk.NORMAL if enabled else tk.DISABLED
        self.select_button.config(state=state)
        self.convert_button.config(state=state)
        self.files_listbox.config(state=state)
    
    def update_status(self, message):
        self.status_label.config(text=message)
        self.root.update()

if __name__ == "__main__":
    root = tk.Tk()
    app = PDFToCSVConverter(root)
    root.mainloop()