#!/bin/bash

# Directory containing your source files
src_dir="/root/alx-low_level_programming/0x09-static_libraries"

# Compile all .c files in the directory
for file in $src_dir/*.c; do
    if [ -f "$file" ]; then
        gcc -c "$file" -o "${file%.c}.o"
    fi
done

