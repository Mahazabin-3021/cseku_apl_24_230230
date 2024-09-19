#include<stdio.h>

// Function to calculate the square of a number
int calculate_square(int number) {
    return number * number;
}

int main() {

    int number;
    
    printf("Enter a number that you want to square : ");
    scanf("%d", &number);

    // Call the function to calculate the square
    int square_result = calculate_square(input_number);
    
    // Output the result
    printf("The square of %d is: %d\n", input_number, square_result);

    return 0;
}
