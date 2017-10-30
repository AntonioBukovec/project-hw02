#include <stdio.h>
#include <fftw3.h>
#include "cmplx.h"

int main(void){
	fftw_complex in;
	double rez,phs,mag;
	in[0]=4;
	in[1]=5;
	mag=cmplx_mag(in);		
	phs=cmplx_phs(in);
	rez=cmplx_imag(mag, phs);
	printf("Rezultat: %f\n", rez);
	return 0;
}
