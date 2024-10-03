#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Menghitung Faktorial ## \n");
	printf("=========================================== \n\n");
	
	int angka,hasil,i;
	
	printf("Input angka: ");
	scanf("%d",&angka);
	
	hasil = 1;
	for(i=1; i<=angka; i++) {
	  hasil = hasil * i;
	}
	printf("%d! = %d \n",angka, hasil);
	
	return 0;
}
