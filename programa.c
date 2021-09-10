#include <stdio.h>
#include "estatistica.h"

int main(){
    int num, i;
	double notas[256], resultado;

    scanf("%d", &num);
	for (i=0; i<num; i++){
		scanf(" %lf", &notas[i]);
	}

    resultado = set_media(num, notas);

    printf("%.2f", resultado);

    return 0;
}
