default:
	clang read.c -o read

read: read.o
	clang read.o -o read -g 

read.o : read.c
	clang read.c -c -o read.o -g

clean :
	rm -f read.o read
