#include <stdio.h>

int main(void)
{
	printf("## Program Bahasa C Menghitung Gaji Karyawan ## \n");
	printf("=============================================== \n\n");
	
	char nama[50]
	char golongan;
	int jam_kerja, upah_per_jam, total_upah;
	
	// proses input
	printf("Nama Karyawan: ");
	gets(nama);
	
	printf("Golongan: ");
	scanf("%C" ,&golongan);
	
	printf("Jumlah jam kerja: ");
	scanf("%d" ,&jam_kerja);
	
	//tentukan jumlah upah per jam berdasarkan golongan
	switch (golongan) {
	  case 'A' :
	  	upah_per_jam = 5000;
	  	break;
	  case 'B' :
	  	upah_per_jam = 7000;
	  	break;
	  case 'C' :
	  	upah_per_jam = 8000;
	  	break;
	  case 'D' :
	  	upah_per_jam = 10000;
	  	break;
	}
	
	total_upah = jam_kerja * upah_per_jam;
	
	// cek apakah jam kerja lebih dari 48 jam
	if ( (jam_kerja - 48) > 0 ) {
	   total_upah = total_upah + ((jam_kerja - 48)*4000);
	}
	
	// proses output
	printf("\n");
	printf("%s menerima upah Rp. %d per minggu \n", nama, total_upah);
	
	return 0;
}
