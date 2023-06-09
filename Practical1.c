/*Write a program to search a list of N elements for the occurrence of the element using Linear Search Method & Binary Search Method*/

//LINEAR SEARCH
/*
#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    //Unsorted array for linear search
    int arr[] = {1,35,5,4,33,54,56,34,89,10};
    int size = sizeof(arr)/sizeof(int);
    int element = 54;
    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}


Output:
The element 54 was found at index 5 
*/

//BINARY SEARCH 
#include<stdio.h>
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
int main(){
    // Sorted array for binary search
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 00;
}

/*
Output:
The element 444 was found at index 8 
*/