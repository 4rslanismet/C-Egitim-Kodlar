#include<stdio.h>

int main()
{
    int arr[3];                      arr[0] -> *arr0 -> 0x7fffffffdc44 
    printf("%p\n",&arr[2]);   // RAM arr[2] -> *arr[2] -> 0x7fffffffdc4c 
                                     arr[4] -> *arr[4] -> 0x7fffffffdc50                                               

     arr[10]=5;
    printf("%d",arr[4]);    

    #define 
    const 


}