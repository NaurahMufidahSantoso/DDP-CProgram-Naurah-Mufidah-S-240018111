#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Luas Permukaan dan Volume Bola ## \n");
	printf("===================================================== \n\n");
	
	float jari2, luas_permukaan, volume;
	
	printf("Input jari-jari bola: ");
	scanf("%f",&jari2);
	printf("\n");
	
	luas_permukaan = (4.0/3.0) * (22.0/7.0) * jari2 * jari2 * jari2;
	volume = 4 * (22.0/7.0) * jari2 * jari2;
	
	printf("Luas permukaan bola = %.2f \n",luas_permukaan);
	printf("Volume bola = %.2f \n",volume);
	
	return 0;
}
