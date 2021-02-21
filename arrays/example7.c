// bubble sort


// 1,23,4,534,123,564,89,34,76,0

   /*             dizinin 0. indisi dizinin i. indisinden küçkü mü ?

evet ->  0.indise i. indis içindeki değeri ata, i. indise 0. indis içerisindeki değr. ata 


hayır-> aynı şey i++ için ?

temp=dizi[0] -> 1,1

dizi[0]=dizi[i]; -> 0,0
dizi[i]=temp; -> 1,1

dizi[0] =1
dizi[i]=0
gecici,temp


dizi[0] =0
dizi[i]=1




*/



#include <stdio.h>

int main()
{
   

    int dizi[10]={1,23,4,534,123,564,89,34,76,0};

    int i,j,temp;

   for(j=0;j<10;j++)
   {
        for(i=0;i<10;i++)
        {   
            if(dizi[i]>dizi[i+1])
            {
            temp=dizi[i];
            dizi[i]=dizi[i+1];
            dizi[i+1]=temp;
            }
        }
   }   
    printf("sıralanmış dizi:\n");
    
    for(i=0;i<10;i++)
    printf("%d\n",dizi[i]);




    
    



}