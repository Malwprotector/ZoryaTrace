#!/bin/bash

#I used this script to compile quickly parts of software

echo "Choose an option:"
echo "1) Compile Python with Cython"
echo "2) Compile C interface"
read -p "Enter choice (1 or 2): " choice

if [ "$choice" == "1" ]; then
    read -p "File name (*.py) : " py_file
    echo 'Running commands.'
    cython3 -3 "$py_file" --embed
    c_file="${py_file%.py}.c"
    gcc -o zorya "$c_file" -I/usr/include/python3.10 -lpython3.10 -lm
    echo 'Done.'

elif [ "$choice" == "2" ]; then
    echo 'Compiling C interface...'
    gcc -o -g zoryaface zoryaface.c $(pkg-config --cflags --libs sdl2 SDL2_ttf) -lm
    echo 'Done.'

else
    echo "Invalid choice."
fi
