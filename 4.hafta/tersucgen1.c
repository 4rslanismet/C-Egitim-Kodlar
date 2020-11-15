#include <stdio.h>

int main ()
{
 
  int i, k,l,yildiz=5;

  for(i=1;i<=yildiz;i++)	
 {
 	for(k=1;k<=i-1;k++) // boşluk 
	 printf(" ");

	for(l=1;l<=yildiz-i+1;l++) //yıldız
	 printf("*");
	
	
	printf("\n");
 }


  return 0;







}
