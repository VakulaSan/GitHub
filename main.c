#include <stdio.h>

int binary_search(int arr[], int element, int lower, int higher)
{

     while (lower <= higher)
     {
          int middle = lower + (higher - lower) / 2;
          if (arr[middle] == element)
          {
               return middle;
          }
          if (arr[middle] > element)
          {
               higher = middle + 1;
          }
          else
          {
               lower = middle - 1;
          }
     }
     return -1;
}

int main(void)
{
     int arr[] = {1, 3, 5, 12, 34, 41, 60, 88};
     int arr_length = sizeof(arr) / sizeof(arr[0]);
     int element = 12;
     int pos = binary_search(arr, element, 0, arr_length - 1);
     printf("The number of element with value %d is - %d\n", element, pos);
     return 0;
}
