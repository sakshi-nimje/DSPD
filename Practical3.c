/*Write a program to sort a list of N elements in ascending order by Insertion Sort method*/

//INSERTION SORT
#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
    printf("Insertion sort \n");
    // Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        // Loop for each pass
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = {22, 45, 82, 76, 3, 90, 18, 37, 55, 61};
    int n = 10;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}

/*
Output:
22 45 82 76 3 90 18 37 55 61 
Insertion sort 
3 18 22 37 45 55 61 76 82 90
*/