
#include <stdio.h>  /* standart giriş çıkış eklendi */ 

int main ()
{
	char c ='A'; // char -> %c
	
	int i = 70; // integer -> %d
		
	float pi=3.14; //float -> %f
	
	double d = 13.45234423; //double -> %f
	
	printf("c: %d\n",c);
		
	printf("pi:%.2f",pi);
	
	printf("\nc:%c\ni:%d\npi:%f\nd:%f\n",c,i,pi,d);

	  
	return 0;
	
	}
