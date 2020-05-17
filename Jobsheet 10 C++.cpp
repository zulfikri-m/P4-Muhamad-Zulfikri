#include <iostream>

using namespace std;
int main()
{
	cout<<"Nama : Muhamad Zulfikri \n";
	cout<<"NIM : F1B019094 \n";
	cout<<"Kelompok : 19 \n\n";
	
    char data [2][4][6] = {" 92 ", " 93 ", " 94 ",};
    int i,j;
    cout<<"\n";
    cout<<"==========================\n";
    cout<<"MEMBUAT ARRAY 3D\n";
    cout<<"==========================\n";
   
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {cout<<data[i][j];}
    cout<<"\n";
    }
return 0;
}
