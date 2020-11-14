#include <stdio.h>

int main (void)
{
	int sayi;

	printf("onlar basamağını öğrenmek istediğiniz sayıyı giriniz:\n");
	scanf("%d",&sayi);
	
	sayi /=10; // sayıyı küçültüyoruz  
	sayi %=10; //sayının 10 lar bas. buluyoruz

	printf("girilen sayının onlar basamağı:%d\n",sayi);
	return 0;
	
	
}

