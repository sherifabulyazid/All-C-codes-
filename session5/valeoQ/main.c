#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int arr[],int n);
void printArray(int arr[], int n);

int main()
{
    //int arr1[]= {0,1,4,0,3,3,5,3,7,1};
    int arr2[]= {0,1,1,3,3,3,5,5,7,7};
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    int sz2=sizeof(arr1)/sizeof(arr2[0]);
    int newsize=removeDuplicates(arr1,sz);
    int newsize2=removeDuplicates(arr2,sz2);
    printArray(arr1,newsize);
    printf("\n");
    printArray(arr2,newsize2);

    return 0;
}

int removeDuplicates(int arr[],int n)
{
    int z=0;
    int sz=n;
    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            arr[z++]=arr[i];
        }
        else{
            sz--;
        }
    }
    return sz;
}
void printArray(int arr[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
/*
#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int unique[n]; // Create a new array to store unique elements
    int k = 0; // Index for the unique array
    int i=0;
    for ( i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if arr[i] is a duplicate in the unique array
        int j=0;
        for ( j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If arr[i] is not a duplicate, add it to the unique array
        if (!isDuplicate) {
            unique[k++] = arr[i];
        }
    }

    // Copy unique elements back to the original array
    for ( i = 0; i < k; i++) {
        arr[i] = unique[i];
    }

    return k; // Return the new length of the array without duplicates
}

int main() {
    int arr[] = {0, 1, 4, 1, 0, 3, 3, 5, 3, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    int i=0;
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

*/
