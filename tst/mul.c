#include <stdio.h>
#include <fftw3.h>
#include "cmplx.h"

int main(void){
	fftw_complex in1, in2, out;
	in1[0]=6;	
	in1[1]=7;	
	in2[0]=8;	
	in2[1]=9;	
	cmplx_mul(in, in, out);
	printf("Rezultat: %f %fi\n", out[0], out[1]);
	return 0;
}
