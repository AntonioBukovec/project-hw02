#include <stdio.h>
#include "io.h"

int main(void){
	int a;
	FILE *dat;
	dat=fopen("binarna.bin", "rb");
	if(dat==NULL) {
		printf("Error!\n");
		return 0;
		}
	a=read_word(dat);
	printf("Read: %d\n", a);
	fclose(dat);
	return 0;
}
