#include <stdio.h>
#include "main.h"

int main()
{
     int arr[] = {1, 2, 4, 23, 57, 94, 123, 444, 553};
     int arr_length = sizeof(arr) / sizeof(arr[0]);
     int x = 57;
     int pos = binary_search(arr, 0, arr_length - 1, x);
     printf("The number of elements with value %d is - %d\n", x, pos);
     return 0;
}
int binary_search(int arr[], int lower, int higher, int x)
{
     while (lower <= higher)
     {
          int middle = lower + (lower + higher) / 2;

          if (arr[middle] == x)
          {
               return middle;
          }
          else if (arr[middle] > x)
          {
               lower = middle + 1;
               return binary_search(arr, lower, higher - 1, x);
          }
          else
          {
               higher = middle - 1;
               return binary_search(arr, lower, higher - 1, x);
          }
     }
     return -1;
}