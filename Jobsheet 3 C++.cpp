#include<iostream>
#include<conio.h>
using namespace std;
int main()
	{
		cout<<"Nama : Muhamad Zulfikri \n";
		cout<<"NIM : F1B019094 \n";
		cout<<"Kelompok : 19 \n\n";
		
		int matrixA [2][2], matrixB [2][2], matrixC [2][2], i, x;
		char ulang;
		cout<<"Penjumlahan 2 MATRIX ordo 2x2\n\n";
		cout<<"MATRIX 1\n";
		for (i = 0; i< 2; i++)
			{
				for (x = 0; x < 2; x++)
				{
					cout<<"["<<i<<"]["<<x<<"] : ";
					cin>>matrixA[i][x];
				}
			}
		cout<<endl;
		cout<<"MATRIX 2\n";
		for (i = 0; i< 2; i++)
			{
				for (x = 0; x < 2; x++)
				{
					cout<<"["<<i<<"]["<<x<<"] : ";
					cin>>matrixB[i][x];
				}
			}
		cout<<endl;
		cout<<"MATRIX 1 + MATRIX 2 : \n";
		for (i = 0; i< 2; i++)
			{
				for (x = 0; x < 2; x++)
				{
					matrixC[i][x] = matrixA[i][x] + matrixB[i][x];
					cout<<matrixC[i][x];
				}
			}
		cout<<endl;
	}
