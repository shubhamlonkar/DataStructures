#include <iostream>
#include <cstdlib>

#include "insetionsort.h"

#define MAXLEN 100

int main(int argc,char *argv[])
{
    int Arr[MAXLEN];
    int i , j;
    int numbers;

    myInsertionSort obj;

    for(i = 0;i < MAXLEN;i++)
        Arr[i] = 0;

    std::cout << "Enter the count of numbers to sort:" << std::endl;
    std::cin>>numbers;

    std::cout <<"Before sort:"<<std::endl;
    for(i = 0;i < numbers;i++)
    {
        Arr[i] = rand() % 100;
        std::cout<<Arr[i]<<"\t";
    }
    std::cout<<std::endl;

    obj.insertionsort(Arr,numbers);

    std::cout<<"After sort"<<std::endl;
    for(i = 0;i < numbers;i++)
    {
        std::cout<<Arr[i]<<"\t";
    }
    std::cout<<std::endl;

    return 0;
}
