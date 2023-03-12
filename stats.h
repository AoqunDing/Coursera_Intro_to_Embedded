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
 * File: stats.h
 *
 * Author Aoqun Ding
 * Date: March 2023
 *
 * Description: Header file of a program that can analyze an array of unsigned 
 * 		          char data items and report analytics on the maximum, minimum,
 *							mean and meadian of the data set.
 */
#ifndef __STATS_H__
#define __STATS_H__

/******************************************************************************
 * Function: print_statistics
 * Description:
 * 	This function prints the statistics of an array including minimum, maximum, mean, and median.
 * Parameters:
 *	int minimum: Minimum value of the array.
 *	int maximum: Maximum value of the array.
 *	int mean: Mean value of the array.
 *	int median: Median of the array.
 * Return:
 *	NULL
 *****************************************************************************/
void print_statistics(int minimum, int maximum, int mean, int median);


/******************************************************************************
 * Function: print_array
 * Description:
 *	This function prints the array to the screen.
 * Parameters:
 *	unsigned char arr[]: Pointer to the array.
 *	int length: Length of the array.
 * Return:
 *	NULL
 *****************************************************************************/
void print_array(unsigned char arr[], int length);


/******************************************************************************
 * Function: find_median
 * Description:
 *	This function finds the median value given an array of data and a length.
 * Parameters:
 *	unsigned char arr[]: Pointer to the array.
 *	int length: Length of the array.
 * Return:
 *	Median of the provided array.
 *****************************************************************************/
int find_median(unsigned char arr[], int length);

/******************************************************************************
 * Function: find_mean
 * Description:
 *	This function finds the mean value given an array of data and a length.
 * Parameters:
 *	unsigned char arr[]: Pointer to the array.
 *	int length: Length of the array.
 * Return:
 *	Mean of the provided array.
 *****************************************************************************/
int find_mean(unsigned char arr[], int length);

/******************************************************************************
 * Function: find_maximum
 * Description:
 *	This function finds the maximum value given an array of data and a length.
 * Parameters:
 *	unsigned char arr[]: Pointer to the array.
 *	int length: Length of the array.
 * Return:
 *	Maximum value of the provided array.
 *****************************************************************************/
int find_maximum(unsigned char arr[], int length);

/******************************************************************************
 * Function: find_minimum
 * Description:
 *	This function finds the minimum value given an array of data and a length.
 * Parameters:
 *	unsigned char arr[]: Pointer to the array.
 *	int length: Length of the array.
 * Return:
 *	Minimum value of the provided array.
 *****************************************************************************/
int find_minimum(unsigned char arr[], int length);

/******************************************************************************
 * Function: sort_array
 * Description:
 *	This function sorts the given array from largest to smallest.
 * Parameters:
 *	unsigned char arr[]: Pointer to the array.
 *	int length: Length of the array.
 * Return:
 *	NULL
 *****************************************************************************/
void sort_array(unsigned char arr[], int length);



#endif /* __STATS_H__ */
