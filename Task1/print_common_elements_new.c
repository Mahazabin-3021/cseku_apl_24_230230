#include<stdio.h>

void main() {
    // Arrays to store the input values and common elements
    int array1[50];
    int array2[50]; 
    int common_elements[50];
    int i = 0;

    // Input values for the first array
    printf("Enter 5 elements for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &array1[i]);
    }

    // Input values for the second array
    int j = 0;
    printf("Enter 5 elements for the second array:\n");
    for(j = 0; j < 5; j++) {
        scanf("%d", &array2[j]);
    }

    // Variable to track the number of common elements
    int k = 0;

    // Compare both arrays to find common elements
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(array1[i] == array2[j]) {
                common_elements[k++] = array1[i];  // Store common element
                break;  // Exit inner loop once a common element is found
            }
        }
    }

    // Output the common elements
    printf("Common elements between both arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", common_elements[i]);
    }
    printf("\n");
}
