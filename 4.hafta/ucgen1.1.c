#include <stdio.h>


int main ()
{
	int i,j;
	int yildiz;
  	
	printf("lütfen boyut giriniz");
	scanf("%d",&yildiz);
       
	for(i=0;i<yildiz;i++)
	{
	  for(j=0;j<=i;j++)
	   printf("*");

	  printf("\n");
				

	}


	return 0;
}
