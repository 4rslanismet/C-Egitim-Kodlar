//girilen sayının karesini döndüren fonksiyon

#include <stdio.h>

int kareAl(int a);

int main()
{
    int num;
    printf("%s","karesini almak istediğiniz sayiyi giriniz:");
    scanf("%d",&num);

    //num=kareAl(num);

    printf("girilen sayının karesi %d\n",kareAl(num));

    return 0;
}

int kareAl(int a)
{
    a=a*a;
    
    return a;
}