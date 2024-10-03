#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Deret Angka ## \n");
	printf("================================== \n\n");
	
	int jumlah_deret,i;
	
	printf("Jumlah deret yang diinginkan: ");
	scanf("%d",&jumlah_deret);
	
	for (i=1; i<=jumlah_deret; i++) {
	  printf("%d ",i);
	}
	
	printf("\n");
	
	return 0;
}
