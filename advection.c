#include <stdio.h>
#include <stdlib.h>
#define dt 0.001 
#define dx 0.002
#define c 0.5
#define Nt 600.0

int main(){
	float tiempo_total = 0.6; //Tiempo total en segundos.

	float* arreglo_1 = malloc(1000*sizeof(float));
	float* t_anteriores = malloc(Nt*sizeof(float));
	float* respuestas = malloc(1000*sizeof(float));
	
	int k;
	for(k=0;k<=999;k++){
		if(fabs(arreglo_1[i]<=0.125){
		}
		else{
		}

	int i;
	for(i=0;i<1000;i++){
		arreglo_1[i]=0;
		t_anteriores[i]=0;
		respuestas[i]=0;
	}
	int rta;
	int j;	
	for(j=1;j<=tiempo_total;j+=dt){
		for(i=1;i<1000;i++){
			rta = arreglo_1[i] - ((c*dt)/dx)*(arreglo_1[i]-arreglo_1[i-1]);
			respuestas[i] = rta;
		}
	}
	
	for (i=1;i<1000;i++){
		t_anteriores[i] = arreglo_1[i];
		arreglo_1[i] = respuestas[i];
	}
	
	printf("%f \n", arreglo_1[80]);
return 0;
}
