#include <stdio.h>
int main()
{
	printf("Nama : Muhamad Zulfikri \n");
	printf("NIM : F1B019094 \n");
	printf("Kelompok : 19 \n\n");
	
    char data [2][4][6] = {" 92 ", " 93 ", " 94 ",};
    int i,j;
    printf("\n");
    printf("==========================\n");
    printf("MEMBUAT ARRAY 3D\n");
    printf("==========================\n");
   
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
			printf("%s",data[i][j]);
		}
    printf("\n");
    }
return 0;
}
