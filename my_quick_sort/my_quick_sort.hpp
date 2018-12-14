/*
 This file contains the declarations for the functions used to implement the
 quick sort algorithm.

 void myQuickSort(int *arrayToSort, int size);
 takes a plain old array of type int as a parameter and sorts its elements in
 ascending order. Also takes a parameter to indicate the size of the input
 array. This is a helper function for the recursive myQuicksort() function that
 is discussed below. This is the function that the client calls.

 void myQuickSort(int*arrayToSort, int first, int end);
 A recursive funcion that takes a plain old array of type int and sorts it in
 ascending order. The parameters "first" and "last" define a range within the
 input array that the function will operate on.
 */


#ifndef my_quick_sort_hpp
#define my_quick_sort_hpp

void myQuickSort(int *arrayToSort, int size);
void myQuickSort(int*arrayToSort, int first, int end);

#endif
