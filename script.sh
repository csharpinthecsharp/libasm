#!/bin/bash
nasm -f elf64 ft_strlen.s -o ft_strlen.o
nasm -f elf64 ft_strcpy.s -o ft_strcpy.o
nasm -f elf64 ft_strcmp.s -o ft_strcmp.o
cc ft_strlen.o ft_strcpy.o ft_strcmp.o main.c -o test
./test TESTTTTT
rm test ft_strlen.o ft_strcpy.o ft_strcmp.o
