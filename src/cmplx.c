#include <cmplx.h>
#include <math.h>
#include <fftw3.h>

void cmplx_div(fftw_complex a, fftw_complex b, fftw_complex c){
	c[0]=(a[0]*b[0]+a[1]*b[1])/(b[0]*b[0]+b[1]*b[1]);
	c[1]=(a[1]*b[0]-a[0]*b[1])/(b[0]*b[0]+b[1]*b[1]);
}

void cmplx_mul(fftw_complex a, fftw_complex b, fftw_complex c){
	c[0]=a[0]*b[0]-a[1]*b[1];
	c[1]=(a[0]+a[1])*(b[0]+b[1])-a[0]*b[0]-a[1]*b[1];
}

double cmplx_mag(fftw_complex a){
	return sqrt(a[0]*a[0]+a[1]+a[1]);
}

double cmplx_phs(fftw_complex a){
	return atan(a[1]/a[0]);
}

double cmplx_real(double mag, double phs){
	return mag*cos(phs);
}

double cmplx_imag(double mga, double phs){
	return mag*sin(phs);
}
