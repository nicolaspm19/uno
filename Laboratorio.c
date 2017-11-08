#include <stdio.h>


int main(){



float* Amplitudes = malloc(10*sizeof(float));
float* Tanteriores = malloc(10*sizeof(float));
float* Ampnueva = malloc(10*sizeof(float));

Amplitudes[0]= 0.20;

//printf("%f \n",Amplitudes[0]);

int i;
for(i=0;i<10;i++)
{

Amplitudes[i]=0;
Tanteriores[i]=0;
Ampnueva[i]=0;
//printf("%f \n",Amplitudes[i]);

}
//pow(c,potencia)
int DeltaT=1;
int Tiempo=5;
float Amp=0;
int Y=10;
int j;
for(j=1;j<=Tiempo;j+=DeltaT)
{
	for(i=1;i<10;i++)
	{

	Amp=Y*(Amplitudes[i-1]-2*Amplitudes[i]+Amplitudes[i+1])+(2*Amplitudes[i]-Tanteriores[i]);
	Ampnueva[i]=Amp;
	

	}


	for(i=1;i<10;i++)
	{
	Tanteriores[i]=Amplitudes[i];
	Amplitudes[i]=Ampnueva[i];
	
	}

}


printf("%f \n",Amplitudes[2]);



return 0;


}
