#include<stdio.h>

int main ()
{
   int arr[10]={1,23,4,534,123,564,89,34,76,0};

   int aranan,i,result=0;

   printf("%s","aranacak değeri giriniz:");
   scanf("%d",&aranan);

   for(i=0;i<10;i++)
   {
       if(aranan==arr[i])
            result=1;

   }

   if(result==1)
    printf("%d değeri dizi içerisinde mevcuttur.",aranan) ;

  else  
    printf("%d değeri dizi içerisinde mevcut değil",aranan);

return 0;

}