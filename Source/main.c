#include <stdio.h>
//#include "search.h"

int main()
{
    printf("Hello World!\n");

    int arr[] = { 2, 3, 4, 10, 40 };

    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    /*
    int result = binary_search(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d", result);
    */
    return 0;
}
