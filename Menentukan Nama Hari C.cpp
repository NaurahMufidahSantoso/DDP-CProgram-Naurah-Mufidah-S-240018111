#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Menentukan Nama Hari ## \n");
	printf("=========================================== \n\n");
	
	int n;
	
	printf("input angka hari (1-7): ");
	scanf("%d" ,&n);
	
	if ( n== 1) {
	  printf("Senin");
	}
	else if ( n== 2) {
	  printf("Selasa");
    }
    else if ( n==3) {
      printf("Rabu");
	}
	else if ( n==4) {
	  printf("Kamis");
	}
	else if ( n==5) {
	  printf("Jumat");
	}
	else if ( n==6) {
	  printf("Sabtu");
	}
	else if ( n==7) {
	  printf("Minggu");
	}
	else {
	  printf("Pilihan tidak tersedia");	  	  
	}
	
	printf("\n");
	
	return 0;
}
	
