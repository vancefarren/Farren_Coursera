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
 * @brief This program will analyze an array of char data items and report
 *         various analytics on them.
 *
 * @author Vance Farren
 * @date 10/27/2017
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

  /* Other Variable Declarations Go Here */
  unsigned char minimum = 0;
  unsigned char maximum = 0;
  unsigned char mean = 0;
  unsigned char median = 0;
  unsigned char *p_array;
  p_array = test;
  /* Statistics and Printing Functions Go Here */
printf("The contents of the unsorted array are:\n");
print_array(test,SIZE);
sort_array(test,SIZE);
printf("The contents of the sorted array are:\n");
print_array(test,SIZE);
minimum=find_minimum(test,SIZE);
maximum=find_maximum(test,SIZE);
mean=find_mean(test,SIZE);
median=find_median(test,SIZE);
print_statistics(minimum,maximum,mean,median);

}

void print_statistics(unsigned char min, unsigned char max, unsigned char mean,
unsigned char med){
printf("The minimum value of the array is: %u\n",min);
printf("The maximum value of the array is: %u\n",max);
printf("The mean value of the array is: %u\n",mean);
printf("The median value of the array is: %u\n",med);
}

void print_array(unsigned char *arr, unsigned int length){

  for(int i = 0; i< length; i++){
    printf("%u, ",arr[i]); 
  }
  printf("\n");
}
unsigned char find_median(unsigned char *arr, unsigned int length){
  unsigned char median = 0;
  median = (arr[length/2] + arr[length/2-1])/2;
  return median;
}
unsigned char find_mean(unsigned char *arr, unsigned int length){
  int mean = 0;
  unsigned char mean_return = 0;
  for(unsigned char i = 0; i<length; i++){
    mean = mean + arr[i];
  }
  mean = mean/length;
  mean_return = mean;
  return mean_return;
}

unsigned char find_maximum(unsigned char *arr, unsigned int length){
  unsigned char max = arr[0];
  for(unsigned char i = 0; i<length; i++)if (max < arr[i])max=arr[i];
  return max;
}

unsigned char find_minimum(unsigned char *arr, unsigned int length){
  unsigned char min = arr[0];
  for(unsigned char i = 0; i<length; i++)if (min > arr[i])min=arr[i];
  return min;
}

void sort_array(unsigned char *arr, unsigned int length){
  char swapped = 1;
  unsigned char swap = 0;
  while(swapped == 1){
    swapped = 0;
    for(unsigned char j =0; j<length; j++){
      if(arr[j] < arr[j+1]){
        swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap;
        swapped = 1;
      }
    }
  }
}
