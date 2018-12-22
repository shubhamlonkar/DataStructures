package com.sort;

public class Insertionsort{

    public void sort(int Arr[],int numbers)
    {
        int i,j;
        int key;

        for(j = 0;j < numbers;j++)
        {
            key = Arr[j];
            i = j - 1;
            while(i > -1 && Arr[i] > key)
            {
                Arr[i + 1] = Arr[i];
                i = i - 1;
            }
            Arr[i + 1] = key;
        }
    }
}