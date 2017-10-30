#include <stdio.h>
#include "io.h"

int main(void){
	short int a=1;
	FILE *dat;
	dat=fopen("binarna.bin", "wb");
	if(dat==NULL) {
		printf("Error!\n");
		return 0;
		}
	write_half(dat, a);
	fclose(dat);
	return 0;
}
