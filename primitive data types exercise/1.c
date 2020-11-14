#include <stdio.h>

int main (void)
{
	int sayi1 , sayi2;
	int kalan,bol;
	float bolum;	

	printf("iki sayı giriniz:\n");

	scanf("%d",&sayi1);
	scanf("%d",&sayi2);	
	
	kalan=sayi1%sayi2;
	bol=sayi1/sayi2;
	bolum=(float)sayi1/(float)sayi2;

	printf("kalan:%d\nint bolum:%d\nfloat bolum:%f",kalan,bol,bolum);


	return 0;





}
