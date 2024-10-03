#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Menghitung Keliling Persegi ## \n");
	printf("================================================== \n\n");
	
	float sisi, kel;
	
	printf("Input sisi persegi: ");
	scanf("%f",&sisi);
	
	kel = 4 * sisi;
	
	printf("Keliling persegi = %.2f \n", kel);
	
	return 0;
}
