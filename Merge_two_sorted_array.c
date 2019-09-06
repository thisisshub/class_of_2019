/* consider two array of size m and n
   wap to merge these two sorted array */

#include <stdio.h>
#define size 50
int main()
{
        int arr1[size], arr2[size], size1, size2, i, k, merge[size * 2]; 
        printf("Enter Array 1 Size: ");
        scanf("%d", &size1);
        printf("Enter Array 1 Elements: ");
        for(i=0; i<size1; i++)
        {
                scanf("%d", &arr1[i]);
                merge[i] = arr1[i];
        }   
        k = i;
        printf("\nEnter Array 2 Size: ");
        scanf("%d", &size2);
        printf("Enter Array 2 Elements: ");
        for(i=0; i<size2; i++)
        {
                scanf("%d", &arr2[i]);
                merge[k] = arr2[i];
                k++;
        }   
        printf("\nThe new array after merging is:\n");
        for(i=0; i<k; i++)
        {
                printf("%d ", merge[i]);
        }   
        return 0;
}
