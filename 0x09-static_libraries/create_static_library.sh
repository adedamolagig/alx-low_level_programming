#!/bin/bash

# Directory containing your object files
obj_dir="/root/alx-low_level_programming/0x09-static_libraries"

# Name of the output static library
output_library="libmy.a"

# Create a list of all object files in the directory
object_files=("$obj_dir"/*.o)

# Check if any object files exist
if [ ${#object_files[@]} -eq 0 ]; then
    echo "No object files found in $obj_dir. Nothing to archive."
    exit 1
fi

# Create the static library by archiving all object files
ar rcs "$output_library" "${object_files[@]}"

echo "Static library $output_library created successfully."

