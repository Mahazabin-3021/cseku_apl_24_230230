#include<stdio.h>

int main(void) {
    // Array to store elements and variable for swapping
    int array[100];
    int i = 0, temp = 0, j = 0; 
    int num_elements;

    // Read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    // Input the elements into the array
    printf("Enter %d elements:\n", num_elements);
    for(i = 0; i < num_elements; i++) {
        scanf("%d", &array[i]);
    }

    // Sorting the array in ascending order using bubble sort
    for(i = 0; i < num_elements; i++) {
        for(j = i + 1; j < num_elements; j++) {
            if(array[i] > array[j]) {
                // Swap the elements if they are in the wrong order
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
