#include <stdio.h>

int main (void)
{
// Array declaration by initializing elements 

int arr[] = { 10, 20, 30, 40 };

int arr1[4] = {10, 20, 30, 40};

int dizi[5];

int sArr=sizeof(arr);

int sArr1=sizeof(arr1);

printf("%d\n%d",sArr,sArr1);

// Compiler creates an array of size 4. 
// above is same as  "int arr[4] = {10, 20, 30, 40}"

}