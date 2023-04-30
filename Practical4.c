/*Write a program to carry out push and pop operation on the stack

1.Push the elements onto the stack.
2.Pop the elements from the stack.
3.Display elements of stack.*/

#include <stdio.h>
#include <stdlib.h>

#define size 4

int top = -1, array[size];
void push();
void pop();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
 {
        printf("\nPopped element: %d",array[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", array[i]);
    }
}

/*
Output:
Perform operations on the stack:
1.Push the element
2.Pop the element 
3.Show
4.End

Enter the choice: 1

Enter the element to be added onto the stack: 2

Perform operations on the stack:
1.Push the element
2.Pop the element
3.Show
4.End

Enter the choice: 1

Enter the element to be added onto the stack: 3

Perform operations on the stack:
1.Push the element
2.Pop the element
3.Show
4.End

Enter the choice: 1

Enter the element to be added onto the stack: 4

Perform operations on the stack:
1.Push the element
2.Pop the element
3.Show
4.End

Enter the choice: 2

Popped element: 4
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Show
4.End

Enter the choice: 2

Popped element: 3
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Show
4.End

Enter the choice: 3

Elements present in the stack:
2

Perform operations on the stack:
1.Push the element
2.Pop the element
3.Show
4.End

Enter the choice: 5

Invalid choice!!
Perform operations on the stack:
1.Push the element
2.Pop the element
3.Show
4.End

Enter the choice: 4
*/