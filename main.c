#include "stdio.h"

int main(int argc, char const *argv[])
{
     float width, length, area;
     printf("Please enter the width of your shape - \n");
     scanf("%f", &width);
     printf("Please enter length of rectangle- ");
     scanf("%f", &length);
     area = width + length;
     printf("Area of rectangle is - %f square units\n", area);
     return 0;
}
