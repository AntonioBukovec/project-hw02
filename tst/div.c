#include <stdio.h>
#include <fftw3.h>
#include "cmplx.h"

int main(void){
	fftw_complex in1, in2, out;
	in1[0]=1;	
	in1[1]=2;	
	in2[0]=3;	
	in2[1]=4;	
	cmplx_div(in1, in2, out);
	printf("Rezultat: %f %fi\n", out[0], out[1]);
	return 0;
}
