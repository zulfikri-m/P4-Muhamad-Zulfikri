#include<iostream>
using namespace std;
int main()
	{
		cout<<"Nama : Muhamad Zulfikri \n";
		cout<<"NIM : F1B019094 \n";
		cout<<"Kelompok : 19 \n\n";
		
		int i;
		char nama[30]={'M','u','h','a','m','a','d',' ','Z','u','l','F','i','k','r','i'};
		char nama2[30]="Muhamad ZulFikri";
		cout<<"Array per karakter = ";
		
		for (i=0; i<=30; i++)
			{
				cout<<nama[i];
			}
		cout<<endl;
		cout<<"Array string = "<<nama2<<endl<<endl;
	return 0;
	}
