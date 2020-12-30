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
 * @brief This file is the Header file for my C-programming code
 *
 * This file is the header file for stats.c that contains all the function declarations
 * and its documentation from stats.c
 *
 * @author Shariq Akhtar P.P.
 * @date 12/29/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints array
 *
 * This function takes an unsigned char pointer to a n-element data array 
 * and and unsigned integer n as the array size and prints the array using
 * for loop and printf statement
 *
 * @param array The pointer to the data array
 * @param n The size of the array
 */
void print_array(unsigned char *array , unsigned int n);

/**
 * @brief Sorts array in descending order 
 *
 * This function takes an unsigned char pointer to a n-element data array 
 * and and unsigned integer n as the array size and sorts the array in
 * descending order (The zeroth Element will be the largest value, 
 * and the last element (n-1) will be the smallest value.)
 *
 * @param array The pointer to the data array
 * @param n The size of the array
 */
void sort_array(unsigned char *array , unsigned int n);

/**
 * @brief Prints statistics of an array
 *
 * This function takes an unsigned char pointer to a n-element data array 
 * and and unsigned integer n as the array size and prints the following 
 * statistics of the array: mean, median, maximum, minimum 
 *
 * @param array The pointer to the data array
 * @param n The size of the array
 */
void print_statistics(unsigned char *array, unsigned int n);

/**
 * @brief Find median of an array
 *
 * This function takes an unsigned char pointer to a n-element data array 
 * and and unsigned integer n as the array size and returns the median 
 * of the elements of the array
 *
 * @param array The pointer to the data array
 * @param n The size of the array
 *
 * @return The median value
 */
unsigned char find_median(unsigned char *array , unsigned int n);

/**
 * @brief Find mean of an array
 *
 * This function takes an unsigned char pointer to a n-element data array 
 * and and unsigned integer n as the array size and returns the mean 
 * of the elements of the array
 *
 * @param array The pointer to the data array
 * @param n The size of the array
 *
 * @return The mean value
 */
unsigned char find_mean(unsigned char *array , unsigned int n);

/**
 * @brief Find maximum of an array
 *
 * This function takes an unsigned char pointer to a n-element data array 
 * and and unsigned integer n as the array size and returns the maximum 
 * of the elements of the array
 *
 * @param array The pointer to the data array
 * @param n The size of the array
 *
 * @return The maximum value
 */
unsigned char find_maximum(unsigned char *array , unsigned int n);

/**
 * @brief Find minimum of an array
 *
 * This function takes an unsigned char pointer to a n-element data array 
 * and and unsigned integer n as the array size and returns the minimum 
 * of the elements of the array
 *
 * @param array The pointer to the data array
 * @param n The size of the array
 *
 * @return The minimum value
 */
unsigned char find_minimum(unsigned char *array , unsigned int n);

#endif /* __STATS_H__ */
