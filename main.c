#include "stdio.h"

int findTriplets(int arr[], int arr_length, int triplets[]);

int main()
{
     int array[9] = {
         1,
         3,
         -4,
         2,
         0,
         10,
         5,
         -5,
         -1};
     int arr_length = 9;
     int triplets[25] = {};

     findTriplets(array, arr_length, triplets);
     printf("Triplets that in sum give \"0\" are: \n ");
     for (int i = 0; i < 20; i++)
     {
          printf("%d", triplets[i]);
     }

     return 0;
}

int findTriplets(int arr[], int arr_length, int triplets[])
{
     for (int f = 0; f < arr_length - 2; f++) /* First level*/
     {
          for (int s = f + 1; s < arr_length - 1; s++) /* Second level*/
          {
               for (int t = s + 1; t < arr_length; t++) /* Third level*/
               {
                    int sum;
                    if (!(sum = arr[f] + arr[s] + arr[t]))
                    {
                         static int i;

                         triplets[i++] = arr[f];
                         triplets[i++] = arr[s];
                         triplets[i++] = arr[t];
                    }
               }
          }
     }
     return 0;
}
