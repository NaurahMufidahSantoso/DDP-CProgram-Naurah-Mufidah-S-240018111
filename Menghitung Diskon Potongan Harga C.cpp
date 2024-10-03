#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Diskon Potongan Harga ## \n");
	printf("============================================ \n\n");
	
	int total_belanja, harga_akhir;
	
	printf("Total Belanja: Rp.");
	scanf("%d",&total_belanja);
	
	if ((total_belanja >= 100000) && (total_belanja < 500000))  {
	  harga_akhir = total_belanja - (0.1*total_belanja);
	  printf("Selamat, anda mendapatkan diskon 10%% \n");
	}
	else if ((total_belanja >= 500000) && (total_belanja < 1000000))  {
	  harga_akhir = total_belanja - (0.2*total_belanja);
	  printf("Selamat, anda mendapatkan diskon 20%% \n");
	}
	else if (total_belanja >= 1000000) {
	  harga_akhir = total_belanja - (0.3*total_belanja);
	  printf("Selamat, anda mendapatkan diskon 30%% \n");
	}
	else {
	  harga_akhir = total_belanja;
	}
	
	printf("Total bayar: Rp.%d \n",harga_akhir);
	
	return 0;
}
