#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(int argc, char *argv[])
	{
		int a[2][2],  b[2][2],m,n;
		for (m=0; m<2;m++)
		{
			for (n=0; n<2;n++)
			{
				cout<<"Masukkan nilai matrix A("<<m<<","<<n<<") : ";
				cin>>a[m][n];
			}
		}
		for (m=0; m<2;m++)
		{
			for (n=0; n<2;n++)
			{
				cout<<"Masukkan nilai matrix B("<<m<<","<<n<<") : ";
				cin>>b[m][n];
			}
		}
		cout<<"C : \n";
		for (m=0; m<2;m++)
		{
			for (n=0; n<2;n++)
			{
				cout<<setw(3)<<(a[m][0]*b[0][n]+a[m][1]*b[1][n]);
			}
		cout<<"\n";
		}
	system("pause");
	return 0;
	}
