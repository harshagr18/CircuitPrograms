#include<stdio.h>
#include<math.h>
int main()
{
	float f[10],av1[10],av2[10],bw,vo[10],vi=0.02;
	int i;
	for(i=0;i<10;i++) //input and calculations
	{
		printf("\nEnter the  %dth value of frequeency in Hz",i+1);
   		scanf("%f",&f[i]);
		printf("\nEnter the  %dth value of voltage in volts",i+1);
    	scanf("%f",&vo[i]);
    	av1[i]=vo[i]/vi;
    	av2[i] =20* (log10(av1[i])) ;
    }
    printf("Frequency    OutputVoltage    Av          Av(in decibels)\n");
    for(i=0;i<10;i++)  //to print the final table
    {
    printf("%f     %f         %f   %f\n",f[i],vo[i],av1[i],av2[i]);
    }
}
