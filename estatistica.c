#include <stdio.h>
#include "estatistica.h"

double set_media(int n, double *v){
	
	double soma=0, resultado;
	
	for (int i=0; i<n; i++){
		soma = soma + v[i];
	}
	resultado = soma/n;
	return resultado;
};
