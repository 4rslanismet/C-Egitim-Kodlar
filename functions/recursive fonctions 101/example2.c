// x'den başlayarak +1 eklenerek y'ye kadar artan fonksiyon


#include <stdio.h>

int i=1; //Global variable

void sum (int num,int n);

int main()
{
    int num,n;

    printf("arttırmak istediğiniz değeri giriniz:\n");
    scanf("%d",&n);

    printf("hangi değerden itibaren arttırmak istediğinizi giriniz:\n");
    scanf("%d",&num);
    
    sum(num,n);
        
}

void sum (int num,int n)
{   
    
    num++;
    i++;

    if(i <= n)
    {
       sum(num,n);    
    }

    else
    {
         printf("\nSum is %d\n",num);
    }   


        
}
