#I used this to generate quickly an executable from python code with cython
read -p "File name (*.py) : " py_file
echo 'Running commands.'
cython3 -3 "$py_file" --embed
c_file="${py_file%.py}.c"
gcc -o zorya "$c_file" -I/usr/include/python3.10 -lpython3.10 -lm
echo 'Done.'
