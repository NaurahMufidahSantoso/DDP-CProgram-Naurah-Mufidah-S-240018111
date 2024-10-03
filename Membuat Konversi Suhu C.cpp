#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Konversi Suhu ## \n");
	printf("==================================== \n\n");
	
	float celc, fahr, kelv, ream ;
	
	printf("Input suhu celcius: ");
	scanf("%f",&celc);
	printf("\n");
	
	fahr = (9.0/5.0 * celc) + 32;
	kelv = celc + 273.15;
	ream = celc * (4.0/5.0) ;
	
	printf("%.2f derajat Celcius = %.2f derajat Fahrenheit \n",celc,fahr);
	printf("%.2f derajat Celcius = %.2f derajat Kelvin \n",celc,kelv);
	printf("%.2f derajat Celcius = %.2f derajat Reamur \n",celc,ream);
	
   return 0;
}
