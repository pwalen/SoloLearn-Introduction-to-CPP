#!/bin/bash
index_cpp=1
index_mach_o=1
for file in *; do
    if [ -f "$file" ]; then
        file_type=$(file "$file")
        if [[ $file_type == *"C++ source text"* ]]; then
            extension="${file##*.}"
            new_name=$(printf "%02d-%s.%s" "$index_cpp" "${file%.*}" "$extension")
            mv "$file" "$new_name"
            ((index_cpp++))
        elif [[ $file_type == *"Mach-O 64-bit executable x86_64"* ]]; then
            extension="${file##*.}"
            new_name=$(printf "%02d-%s.%s" "$index_mach_o" "${file%.*}" "$extension")
            mv "$file" "$new_name"
            ((index_mach_o++))
        fi
    fi
done

