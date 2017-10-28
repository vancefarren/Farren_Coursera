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
 * @file stats.h 
 * @brief This file contains the function declarations and descriptions
 *
 * 
 *
 * @author Vance Farren
 * @date 10/27/2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**1
 * @brief A function that prints the statistics of an array including minimum,
 * maximum, mean, and median.
 *
 * 
 * @param min The minimum value in the array
 * @param max The maximum value in the array
 * @param mean The average value in the array
 * @param med The middle value in the array
 *
 * @return no return value
 */
void print_statistics(unsigned char min, unsigned char max, unsigned char mean,
                               unsigned char med);


/**2
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param *arr Pointer to the beginning of the test array
 * @param length Length of the array
 *
 * @return no return value
 */
void print_array(unsigned char *arr, unsigned int length);

/**3
 * @brief This function finds the median value of the array
 *
 * @param *arr Pointer to the beginning of the test array
 * @param length Length of the array
 *
 *
 * @return  Returns the median value of the array
 */
unsigned char find_median(unsigned char *arr, unsigned int length);

/**4
 * @brief This function finds the mean value of the array
 *
 * @param *arr Pointer to the beginning of the test array
 * @param length Length of the array
 *
 *
 * @return Returns the mean value of the array
 */
unsigned char find_mean(unsigned char *arr, unsigned int length);

/**5
 * @brief This function finds the maximum value of the array
 *
 * @param *arr Pointer to the beginning of the test array
 * @param length Length of the array
 *
 *
 * @return Returns the maximum value of the array
 */
unsigned char find_maximum(unsigned char *arr, unsigned int length);

/**6
 * @brief This function finds the minimum value of the array
 *
 * @param *arr Pointer to the beginning of the test array
 * @param length Length of the array
 *
 *
 * @return Returns the minimum value of the array
 */
unsigned char find_minimum(unsigned char *arr, unsigned int length);

/**7
 * @brief This function sorts the array largest first to smallest
 *
 * @param *arr Pointer to the beginning of the test array
 * @param length Length of the array
 *
 *
 * @return Returns nothing
 */
void sort_array(unsigned char *arr, unsigned int length);



#endif /* __STATS_H__ */
