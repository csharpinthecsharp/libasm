#!/bin/bash
nasm -f elf64 ft_strlen.s -o ft_strlen.o
nasm -f elf64 ft_strcpy.s -o ft_strcpy.o
cc ft_strlen.o ft_strcpy.o main.c -o test
./test TESTTTTT
rm test ft_strlen.o ft_strcpy.o
