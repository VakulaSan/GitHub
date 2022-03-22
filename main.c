#include <stdio.h>
#include "main.h"

int main()
{
     int arr[] = {1, 3, 2, 3, 166};
     int arr_length = sizeof(arr) / sizeof(arr[0]);
     int max = biggest_value(arr, arr_length);
     printf("The largest element in array is - \"%d\".", max);
     return 0;
}
int biggest_value(int arr[], int arr_length)
{
     int max = arr[0];
     for (int i = 0; i < arr_length; i++)
     {
          if (arr[i] > max)
               max = arr[i];
     }

     return max;
}