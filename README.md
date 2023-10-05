# Simple Kernel Make in C
Help
Youtube: https://www.youtube.com/watch?v=rr-9w2gITDM&list=PLBK_0GOKgqn3hjBdrf5zQ0g7UkQP_KLC3 (He help me with kernel.asm)
ChatGPT: It helped me understand the basics of programming an operating system

# How to compile?
kernel.asm in kasm.o
nasm -f elf32 kernel.asm -o kasm.o

kernel.c in kc.o
gcc -m32 -c kernel.c -o kc.o

make bin file
ld -m elf_i386 -T link.ld -o kernel.bin kasm.o kc.o
