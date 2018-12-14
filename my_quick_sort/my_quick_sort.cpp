/*
 Definitions for the functions used to implement the quick sort algorithm.
 */

#include "my_quick_sort.hpp"
#include <iostream>
#include <ctime>


void myQuickSort(int *arrayToSort, int size) {
   srand(static_cast<unsigned>(time(0)));
   myQuickSort(arrayToSort, 0, size);
}


void myQuickSort(int *arrayToSort, int first, int end) {
   if(end - first > 1) {
      int partition = first;

      // Randomizing the pivot helps to avoid taking worst-case time to sort the
      // input array which occurs in the input array is initially sorted in
      // decreasing order.
      int pivot = first + rand() % (end - first);

      std::swap(arrayToSort[partition], arrayToSort[end - 1]);
      pivot = end - 1;

      for(int count = first; count < end; count++) {
         if(arrayToSort[count] < arrayToSort[pivot]) {
            std::swap(arrayToSort[count], arrayToSort[partition]);
            partition ++;
         }
      }
      std::swap(arrayToSort[partition], arrayToSort[pivot]);
      myQuickSort(arrayToSort, partition + 1, end);
      myQuickSort(arrayToSort, first, partition);
   }
}

