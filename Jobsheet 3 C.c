#include<stdio.h>
#include<conio.h>
main()
	{
		printf("Nama : Muhamad Zulfikri \n");
		printf("NIM : F1B019094 \n");
		printf("Kelompok : 19 \n\n");
		
		int matrix1 [2][2], matrix2 [2][2], hasil [2][2], i, j;
		printf("Penjumlahan MATRIX \n\n");
		printf("MATRIX 1\n");
		for (i = 0; i< 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					printf("Masukkan nilai index %d, %d = ", i, j);
					scanf("%d", &matrix1[i][j]);
				}
			}
			
		printf("\nMATRIX 2\n");
		for (i = 0; i< 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					printf("Masukkan nilai index %d, %d = ", i, j);
					scanf("%d", &matrix2[i][j]);
				}
			}
			
		for (i = 0; i< 2; i++)
			{
			for (j = 0; j < 2; j++)
				{
					hasil [i][j]=matrix1[i][j]+matrix2[i][j];
					printf("%d ", hasil[i][j]);
				}
			printf("\n");
			}
		getch();
	}
