#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100

void insertionsort(int [],int );

int main(int argc,char *argv[])
{
    int i;                  //index variable
    int Arr[MAXLEN];        //Array upto index 100 to store numbers 
    int numbers = 0;        //count of numbers to be sort


    for(i = 0;i < MAXLEN;i++)
        Arr[MAXLEN] = 0;

    printf("Enter numbers you want to sort:\n");
    scanf("%d",&numbers);

    printf("Before sort\n");
    for(i = 0;i < numbers;i++)    
    {    
        Arr[i] = rand() % 100;
        printf("%d\t",Arr[i]);
    }
    printf("\n");

    insertionsort(Arr,numbers);

    printf("After sort\n");
    for(i = 0;i < numbers;i++)
        printf("%d\t",Arr[i]);
    printf("\n");    

    return 0;
}