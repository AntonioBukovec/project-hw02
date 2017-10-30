#include <stdio.h>
#include <fttw3.h>
#include "cmplx.h"

int main(void){
	fftw_complex in;
	double rez,phs,mag;
	in[0]=5;	
	in[1]=6;
	mag=cmplx_mag(in);		
	phs=cmplx_phs(in);
	rez=cmplx_real(mag, phs);
	printf("Rezultat: %f\n", rez);
	return 0;
}
