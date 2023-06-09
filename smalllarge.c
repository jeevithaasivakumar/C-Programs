//Write a program to find smallest and largest element in an
//unsorted array


#include <stdio.h>
//Calculate array size
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int main()
{
    int arr[] = {3, 18, 10, 4, 2, 22, 150};
    int i, small, large;
    const int N = ARRAY_SIZE(arr);
    small = arr[0];//Assume first element is smallest
    large = arr[0];//Assume first element is largest
    //iterate through the array
    for (i = 1; i < N; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    return 0;
}