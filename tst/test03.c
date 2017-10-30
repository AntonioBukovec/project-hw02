#include <stdio.h>
#include "io.h"

int main(void){
	int a=10;
	FILE *dat;
	dat=fopen("binarna.bin", "wb");
	if(dat==NULL) {
		printf("Error!\n");
		return 0;
		}
	write_word(dat, a);
	fclose(dat);
	return 0;
}
