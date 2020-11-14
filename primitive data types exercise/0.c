#include <stdio.h>

int main (void)
{
	int num1,num2,num3,top,car;
	
	printf("üç tane sayı giriniz:\n");
	scanf("%d %d %d",&num1,&num2,&num3);

	top=num1+num2+num3;
	car=num1*num2*num3;
	
	printf("toplam:%d\ncarpim:%d\n",top,car);

	return 0;

}
