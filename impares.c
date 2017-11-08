#include <stdio.h>
#include <math.h>
#include <string.h>
#define true 1
#define false 0
int main(){
	
	int lista[11];
	int i;
	
	for(i=0;i<11;i++){
	lista[i] = i;
	}

	printf("Los impares de 1 a 10 son:\n");
	for(i=0;i<11;i++){
	if(i%2 != 0)
	printf("%d\n",lista[i]);
	}
	
	printf("Los pares de 1 a 10 son:\n");
	for(i=0;i<11;i++){
	if(i%2==0)
	printf("%d\n",lista[i]);
	}

	}
	
