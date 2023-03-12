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
 * File: stats.c
 *
 * Author Aoqun Ding
 * Date: March 2023
 *
 * Description: A program that can analyze an array of unsigned char data
 * 		          items and report analytics on the maximum, minimum, mean
 *							and meadian of the data set.
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
  int median, mean, maximum, minimum;
  /* Statistics and Printing Functions Go Here */
	
	printf("The initial array is: ");
	print_array(test, SIZE);
	
	sort_array(test, SIZE);
	
	printf("Array after bubble sort is: ");
	print_array(test, SIZE);
	
	median = find_median(test, SIZE);
	mean = find_mean(test, SIZE);
	maximum = find_maximum(test, SIZE);
	minimum = find_minimum(test, SIZE);
	
	print_statistics(minimum, maximum, mean, median);
	
}

/* Add other Implementation File Code Here */

void print_statistics(int minimum, int maximum, int mean, int median){
	
	printf("The minimum value of the array is %d \n", minimum);
	printf("The maximum value of the array is %d \n", maximum);
	printf("The mean value of the array is %d \n", mean);
	printf("The median value of the array is %d \n", median);
	
}

void print_array(unsigned char arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d, ", arr[i]);
	}
	
	printf("\n");
}

int find_median(unsigned char arr[], int length){
	
	int mid = length / 2;
	
	if (length % 2 == 0){
		
		return (arr[mid - 1] + arr[mid]) / 2;
	
	} else{
		
		return arr[mid];
	
	}
}

int find_mean(unsigned char arr[], int length){
	
	int mean = 0;
	
	for (int i = 0; i < length; i++){
		mean += arr[i];
	}
	
	mean /= length;
	
	return mean;
}

int find_maximum(unsigned char arr[], int length){
	
	int max = arr[0];
	
	for (int i = 1; i < length; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	return max;
}

int find_minimum(unsigned char arr[], int length){
	
	int min = arr[0];
	
	for (int i = 1; i < length; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	return min;
}

void sort_array(unsigned char arr[], int length){
	
	int temp;
	
	for (int i = 0; i < length; i++){
		for (int j = i + 1; j < length; j++){
			if (arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}		
		}	
	}
}




