#include <stdio.h>
#include "main.h"

int main()
{
     int arr[] = {1, 2, 3, 4, 5};
     int arr_length = sizeof(arr) / sizeof(arr[0]);
     rotate(arr, arr_length);
     printf("Reverterd order is:\n\"");
     for (int i = 0; i < arr_length; i++)
     {
          printf("%d\"", arr[i]);
     }

     return 0;
}

void rotate(int arr[], int arr_length)
{

     int i = 0;
     int j = arr_length - 1;
     while (i != j)
     {
          /* we can do it either swap(&arr[i],&arr[j])*/
          swap(arr + i, arr + j);
          ++i;
     }
}
void swap(int *l, int *h)
{
     int temp = *l;
     *l = *h;
     *h = temp;
}