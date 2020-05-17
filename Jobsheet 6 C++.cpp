#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
	{
		int A[10][10], b, c, baris, kolom;
		char pil;
		
		do{
		cout<<"==========PROGRAM TRANSPOSE MATRIX=========="<<endl;
		cout<<"Jumlah Baris : ";
		cin>>baris;
		cout<<"Jumlah Kolom : ";
		cin>>kolom;
		cout<<endl;
		for (b=0; b<baris; b++)
		{
			for (c=0; c<kolom; c++)
			{
				cout<<"Matrix ["<<b+1<<","<<c+1<<"] : ";
				cin>>A[b][c];
			}
		}
		cout<<endl<<endl;
		cout<<"Matrix Pertama : "<<endl<<endl;
		for (b=0; b<baris; b++)
		{
			for (c=0; c<kolom; c++)
			{
				cout<<"  "<<A[b][c]<<"  ";
			}
		cout<<endl<<endl;
		}
	getch();
	cout<<" Ingin mengulang program ? (Y/N) : ";
	cin>>pil;
		}
		while (pil=='Y'||pil=='y');
	}
