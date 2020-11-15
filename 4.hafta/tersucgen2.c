#include <stdio.h>

int main ()

{
	int i,k,l,yildiz=5;
	
	for(i=1;i<=yildiz;i++)
	{
		 for(k=1;k<=yildiz-i;k++)
			 printf(" ");
	 
		  for(l=1;l<=i;l++)
			  printf("*");

	  printf("\n");
	 }


	return 0;

}
