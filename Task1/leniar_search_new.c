#include<stdio.h>

int main() {
   // Array of integers
   int numbers[] = {10, 30, 40, 15, 25};
   int search_value;
   
   printf("Enter the value that you want to search: ");
   scanf("%d", &search_value);

   int i, found_position = 0;

   // Linear search through the array
   for(i = 0; i < 5; i++) { // The array has 5 elements
       if(search_value == numbers[index]) {
           found_position = i + 1; // Position is index + 1 (since array indexing starts from 0)
           break; // Exit the loop once the value is found
       }
   }

   // If the value is not found, found_position will remain 0
   if(found_position == 0) {
       printf("Value not found\n");
   } else {
       printf("The position of %d is: %d\n", search_value, found_position);
   }

   return 0;
}
