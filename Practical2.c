/*Write a program to sort a list of N elements in ascending order by Bubble Sort & Selection Sort method*/


//BUBBLE SORT
/*
#include<stdio.h>
 
void printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    printf("Bubble Sort\n");
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}

int main(){
    // int A[] = {12, 54, 65, 7, 23, 9};
    int A[] = {1, 32, 6, 12, 54, 62, 77, 23, 9, 98};
    int n = 10;
    printArray(A, n); // Printing the array before sorting
    bubbleSort(A, n); // Function to sort the array
    printArray(A, n); // Printing the array before sorting
    return 0;
}


Output:
1 32 6 12 54 62 77 23 9 98 
Bubble Sort
1 6 9 12 23 32 54 62 77 98
*/


//SELECTION SORT
#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int indexOfMin, temp;
    printf("Selection sort \n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
int main(){
int A[] = {3, 58, 22, 45, 13, 72, 90, 36, 64, 87};
    int n = 10;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}

/*
Output:
3 58 22 45 13 72 90 36 64 87   
Selection sort 
3 13 22 36 45 58 64 72 87 90
*/