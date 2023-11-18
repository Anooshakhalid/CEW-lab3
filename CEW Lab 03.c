// QUESTION 1
// Write a program in C to swap elements using call by reference.

#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter no 1 and 2: ");
    scanf("%d %d", &num1, &num2);

    printf("Before Swapping number 1 and 2 is: %d %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After Swapping number 1 and 2 is: %d %d\n", num1, num2);

    return 0;
}


// QUESTION 2
// Write a program in C to print a string in reverse using pointers.

#include <stdio.h>
#include <stdlib.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char a[100];

    printf("Enter a string: ");
    scanf("%s", a);

    printf("The string is: %s\n", a);

    reverseString(a);

    printf("After reversing: %s\n", a);

    return 0;
}


// QUESTION 3
// Write a C program to input and print array elements using pointers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = arr;

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}




// QUESTION 4
// Write a C program to search for an element in an array using pointers.
#include <stdio.h>

int searchElement(int *arr, int size, int target) {
    while (size--) {
        if (*arr++ == target) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    if (searchElement(arr, size, target)) {
        printf("Element %d is found in the array.\n", target);
    } else {
        printf("Element %d is not found in the array.\n", target);
    }

    return 0;
}



// QUESTION 5
// Write a C program to add two matrices using pointers.
#include <stdio.h>

void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}
int main() {
    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], rows, cols);

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

