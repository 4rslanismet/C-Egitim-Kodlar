#include <stdio.h>


int main ()
{
	int i,j,yildiz;
	
	printf("boyut giriniz:");
	scanf("%d",&yildiz);
        
	if(yildiz<0)
	{	
		printf("hatalı giriş yaptınız");
		return (1);
	}

	for(i=0;i<yildiz;i++)
	{
		for(j=5;j>i;j--)
		printf("*");
		
	  printf("\n");
	  
	}
			
	return 0;
}
