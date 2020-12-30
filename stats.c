/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This file is the implementation file of my C-programming code
 *
 * In stats.c functions are used to find the following statistics of given array;
 * mean,median,maximum and minimum and the statistics and the sorted array are
 * printed using printf statements
 *
 * @author Shariq Akhtar P.P.
 * @date 12/29/2020
 *
 */



#include <stdio.h>                 
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

printf("\nGiven array:\n");
print_array(test,SIZE);

printf("\n\nArray after sorting:\n");
sort_array(test,SIZE);
print_array(test,SIZE);

printf("\n\nSTATISTICS:\n");
print_statistics(test,SIZE);

}

void sort_array(unsigned char *array , unsigned int n)
{
    int i, j, temp;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]<array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }
}

void print_array(unsigned char *array , unsigned int n)
{
    printf("\nArray:");
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",array[i]);
    }
}

unsigned char find_median(unsigned char *array, unsigned int n)
{
    unsigned char median;
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2;
    else
        median = array[n/2];

    return median;
}

unsigned char find_mean(unsigned char *array, unsigned int n)
{
    unsigned char mean;
    int i,sum=0;
    for(i=0 ; i<n ; i++)
    {
        sum+=array[i];
    }
    mean=sum/n;                                         
    return mean;
}

unsigned char find_minimum(unsigned char *array , unsigned int n)
{
    unsigned char Min=array[n-1];
    return Min;
}

unsigned char find_maximum(unsigned char *array , unsigned int n)
{
    unsigned char Max=array[0];
    return Max;
}

void print_statistics(unsigned char *array, unsigned int n)
{
    unsigned int median=find_median(array,n);
    unsigned int mean=find_mean(array,n);
    unsigned int minimum=find_minimum(array,n);
    unsigned int maximum=find_maximum(array,n);
    printf("\nThe median of given array is %d",median);
    printf("\nThe mean of given array is %d",mean);
    printf("\nThe minimum of given array is %d at index %d",minimum,n-1);
    printf("\nThe maximum of given array is %d at index %d\n",maximum,0);
}
//end of file
