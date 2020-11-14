#include <stdio.h>


int main(void)
{
	int sayi,ters=0;

	printf("lütfen üç basamaklı bir sayı giriniz\n");
	scanf("%d",&sayi);


	ters +=(sayi%10)*100; 	
	sayi /=10; // sayi=sayi/10;
	
	ters +=(sayi%10)*10;
	sayi /=10; // sayi=sayi%10;

	ters +=sayi;

	printf("%d\n",ters);

	return 0;

}
