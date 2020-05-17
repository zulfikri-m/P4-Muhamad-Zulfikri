#include<stdio.h>
int main()
	{
		printf("Nama : Muhamad Zulfikri \n");
		printf("NIM : F1B019094 \n");
		printf("Kelompok : 19 \n\n");
		
		int x[4], i;
		for(i=0; i<=4;i++)
			{
				printf("Masukkan nilai %i : ",i+1);
				scanf("%i",&x[i]);
			}
		return 0;
	}
