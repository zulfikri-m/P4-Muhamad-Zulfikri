#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
   	int i, n, bayar, kembalian, kekurangan, diskon;
	int harga[100], jumlah[100], panjang[50], lebar[50], thk=0, th[100], m2=25000;
   	char user[20],pass[20], nama[100][30], pilih[5], pilih1[5], menu[5];
   	
   	printf("============MENU LOGIN============\n\n");
   	printf("Masukkan Username Anda : ");
    scanf("%s",&user);
    printf("Masukkan Password Anda : ");
    scanf("%s",&pass);
    if(strcmp(user,"muhamad_zulfikri")==0 && strcmp(pass,"f1b019094")==0)
		{
        printf("\n\nBerhasil Login. Selamat Bertransaksi.\n\n");
        system("pause");
        system("cls");
        goto menu;
  		}
  	else
		{
         printf("\n\nUsername dan Password Anda Tidak Valid\n\n");
         system("pause");
         exit(1);
    	}
      
	menu:
	printf("==========SELAMAT DATANG==========\n");
	printf("===MENU LAYANAN TOKO LANGKO MAS===\n\n");
	printf(" ***** 1. Layanan Berbelanja *****\n");
	printf(" *****  2. Jasa Buat Spanduk *****\n");
	printf(" *****       3. Keluar       *****\n\n");
	printf("\n        Pilih Layanan : ");
    scanf("%s", &menu);
    system("cls");
	if(strcmp(menu,"1")==0)
    	{
        	goto awal;
    	}
    else if(strcmp(menu,"2")==0)
    	{
        	goto jasa;
    	}
    else if(strcmp(menu,"3")==0)
    	{
        	exit(1);
    	}
    else
    	{
        	printf("Masukkan pilihan yang benar...\n");
        	goto menu;
    	}
			
   	awal:
   	printf("     ====$====TOKO LANGKO MAS====$====\n");
	printf("           ====STRUK BELANJA====\n\n");
	
   	
   	printf("Banyak Barang Yang Akan Dibeli  : ");
   	scanf("%i",&n);
   	printf("==============================================\n");
   	printf("\n");
    for(i=1; i<=n; i++)
    	{
       		printf(" Masukkan Nama Barang ke-%i\t: ",i);
       		scanf("%s", &nama[i]);
        	printf(" Masukkan Harga per Barang\t: Rp. ");
        	scanf("%i",&harga[i]);
        	printf(" Masukkan Jumlah Barang\t\t: ");
        	scanf("%i", &jumlah[i]);
        	printf("\n");
    	}

    for(i=1; i<=n; i++)
    	{
        	th[i]=jumlah[i]*harga[i];
       		thk=thk+th[i];
    	}
    		printf(" Total Harga\t\t\t: Rp. %i\n", thk);
    		printf(" Diskon Barang\t\t\t: 94 persen\n");
    		if (thk>=200000)
    			{
    				diskon=0.94*thk;
				}
    		thk=thk-diskon;
    		printf("----------------------------------------------\n");
    		printf(" Total Harga Keseluruhan\t: Rp. %i\n", thk);
    		printf(" Masukkan jumlah pembayaran\t: Rp. ");
    		scanf("%i", &bayar);
   			kembalian=bayar-thk;
    
    printf("\n\n");
    printf("==============================================\n");
    printf("------------- Daftar Belanja Anda ------------\n");
    for(i=1; i<=n; i++)
    	{
    		printf("\n");
       		printf(" %i. %i buah %s (1 = Rp. %i)\t: Rp. %i\n", i, jumlah[i], nama[i], harga[i], th[i]);
    	}
    if(bayar>=thk)
    	{
        	printf("\n Total harga\t: Rp. %i\n", thk);
        	printf(" Pembayaran\t: Rp. %i\n", bayar);
       		printf(" Kembalian\t: Rp. %i\n", kembalian);
    	}
   	else
    	{
        	kekurangan=-1*kembalian;
        	printf("\n Maaf Uang Anda Tidak Mencukupi\n");
        	printf(" Total harga\t: Rp. %i\n", thk);
        	printf(" Pembayaran\t: Rp. %i\n", bayar);
        	printf(" Kekurangan\t: Rp. %i\n", kekurangan);
    	}
    		printf("==============================================\n");
    			
    pilih:
    printf("\n            Belanja Lagi? (y/t): ");
    scanf("%s", &pilih);
    system("cls");
    
    if(strcmp(pilih,"y")==0||strcmp(pilih,"Y")==0)
    	{
        	goto awal;
    	}
    else if(strcmp(pilih,"t")==0||strcmp(pilih,"T")==0)
    	{
        	printf("\nTerima Kasih Telah Berbelanja Di Toko Kami\n");
        	printf("\n----------Silahkan Datang Kembali----------\n");
        	exit(1);
    	}
    else
    	{
        	printf("Masukkan pilihan yang benar...\n");
        	goto pilih;
    	}
    	
    jasa:
    printf("==========JASA PEMBUATAN SPANDUK==========\n");
	printf("==============TOKO LANGKO MAS=============\n\n");	
    
	printf("Jumlah Spanduk Yang Dipesan  : ");
   	scanf("%i",&n);
   	printf("==========================================\n");
   	printf("\n");
    for(i=1; i<=n; i++)
    	{
    		printf(" Masukkan Ukuran Spanduk ke-%i\n",i);
       		printf(" Masukkan Panjang Spanduk\t: ");
       		scanf("%i", &panjang[i]);
        	printf(" Masukkan Lebar Spanduk\t\t: ");
        	scanf("%i", &lebar[i]);
        	printf(" Harga Spanduk per Meter persegi: Rp. 25.000 ",m2);
        	printf("\n\n");
    	}
	
	for(i=1; i<=n; i++)
    	{
        	th[i]=panjang[i]*lebar[i]*m2;
       		thk=thk+th[i];
    	}
    		printf("----------------------------------------------\n");
    		printf(" Total Harga Keseluruhan\t: Rp. %i\n", thk);
    		printf(" Masukkan jumlah pembayaran\t: Rp. ");
    		scanf("%i", &bayar);
    		printf("\n");
   			kembalian=bayar-thk;
   			
   	for(i=1; i<=n; i++)
    	{
       		printf(" %i. Ukuran Spanduk %ix%i m2 \n   (Harga per M2 = Rp. 25.000)\t: Rp. %i\n\n", i, panjang[i], lebar[i], th[i]);
   		}
   	printf("\n");
	   	
	if(bayar>=thk)
    	{
        	printf(" Total harga\t\t\t: Rp. %i\n", thk);
        	printf(" Pembayaran\t\t\t: Rp. %i\n", bayar);
       		printf(" Kembalian\t\t\t: Rp. %i\n", kembalian);
    	}
   	else
    	{
        	kekurangan=-1*kembalian;
        	printf(" Maaf Uang Anda Tidak Mencukupi\n");
        	printf(" Total harga\t\t\t: Rp. %i\n", thk);
        	printf(" Pembayaran\t\t\t: Rp. %i\n", bayar);
        	printf(" Kekurangan\t\t\t: Rp. %i\n", kekurangan);
    	}
    		printf("==============================================\n\n");
    		
   			printf("***************  Terima Kasih  ***************\n");
   			printf("*  Telah Menggunakan Jasa Pembuatan Spanduk  *\n");
   			printf("*************  Toko Langko Mas  **************\n");
   			printf("**  Pesanan Anda Akan Selesai Dalam 1 Hari  **\n");
	
	pilih1:
    printf("\n            Pesan Lagi? (y/t): ");
    scanf("%s", &pilih1);
    system("cls");
    
    if(strcmp(pilih1,"y")==0||strcmp(pilih1,"Y")==0)
    	{
        	goto jasa;
    	}
    else if(strcmp(pilih1,"t")==0||strcmp(pilih1,"T")==0)
    	{
        	printf("\nTerima Kasih Telah Bertransaksi Di Toko Kami\n");
        	printf("\n----------Silahkan Datang Kembali----------\n");
        	exit(1);
    	}
    else
    	{
        	printf("Masukkan pilihan yang benar...\n");
        	goto pilih1;
    	}
			
	return 0;
}
