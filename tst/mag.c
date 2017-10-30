#include <stdio.h>
#include <fftw3.h>
#include "cmplx.h"

int main(void){
	fftw_complex in;
	double rez;
	in[0]=2;	
	in[1]=3;		
	rez=cmplx_mag(in);
	printf("Rezultat: %f\n", rez);
	return 0;
}
