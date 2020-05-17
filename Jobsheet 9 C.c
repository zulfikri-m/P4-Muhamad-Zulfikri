#include<stdio.h>
int main()
	{
		printf("Nama : Muhamad Zulfikri \n");
		printf("NIM : F1B019094 \n");
		printf("Kelompok : 19 \n\n");
		
		int i;
		char nama[30]={'M','u','h','a','m','a','d',' ','Z','u','l','F','i','k','r','i'};
		char nama2[30]="Muhamad ZulFikri";
		printf("Array per karakter = ");
		
		for (i=0; i<=29; i++)
			{
				printf("%c",nama[i]);
			}
		printf("\n");
		printf("Array string = %s \n\n", nama2);
	return 0;
	}
