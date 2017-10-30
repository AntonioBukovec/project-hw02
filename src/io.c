#include <stdio.h>

int read_word(int fd){
	int n, rez;
	n=fread(&rez, sizeof(int), 1, (FILE *)fd);
	if(n<1) return -1;
	return rez;
}

int read_half(short int fd){
	int n;
	short int rez;
	n=fread(&rez, sizeof(short), 1, (FILE *)fd);
	if(n<1) return -1;
	return rez;
}

void write_word(int fd, int word){
	int n;
	n=fwrite(&word, sizeof(int), 1, (FILE *)fd);
	if(n<1) printf("Error!\n");
}

void write_half(int fd, short word){
	int n;
	n=fwrite(&word, sizeof(short), 1, (FILE *)fd);
	if(n<1) printf("Error!\n");
}
