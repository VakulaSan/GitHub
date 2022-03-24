#include <stdio.h>
#include "main.h"

int main()
{

     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
     int arr_length = sizeof(arr) / sizeof(arr[0]);
     int k = 3;
     reverse_in_groups(arr, arr_length, k);
     printf("The reversed order is :\" ");
     for (int i = 0; i < arr_length; i++)
     {
          printf("%d\"", arr[i]);
     }

     return 0;
}
void reverse_in_groups(int arr[], int arr_length, int k)
{
     int start,
         stop;

     if (k == 1)
     {
          return;
     }
     else if (k >= arr_length)
     {
          start = 0;
          stop = arr_length - 1;
          reverse(arr, start, stop);
     }
     else if (k < arr_length)
     {
          start = 0;
          stop = k - 1;
          reverse(arr, start, stop);
          start = k;
          stop = arr_length - 1;
          reverse(arr, start, stop);
     }
}

void reverse(int arr[], int start, int stop)
{
     int tmp;
     for (; start < stop; start++, stop--)
     {
          tmp = arr[start];
          arr[start] = arr[stop];
          arr[stop] = tmp;
     }
}