#include <stdio.h>
#include "main.h"

int main()
{
     int arr[] = {1, 3, 2, 1024, 3, 23, 54, 342, 22, 42, 51};
     int arr_length = sizeof(arr) / sizeof(arr[0]);
     int pos = biggest_value(arr, arr_length);
     printf("The largest element in array is - \"%d\".", pos);
     return 0;
}
int biggest_value(int arr[], int arr_length)
{
     int left = 0,
         right = arr_length - 1;
     /* when there is left one element, it means right - left = 0*/
     while (right - left)
     {
          if (arr[left] > arr[right])
          {
               --right;
          }
          else
          {
               ++left;
          }
     }
     /* It does not matter what we will return left or right because they are equal*/
     return left;
}