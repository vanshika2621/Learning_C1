#include <stdio.h>

int main() {
    int var = 10;      // Declare a normal integer variable
    int *ptr;          // Declare a pointer to an integer
    
    ptr = &var;        // Store the address of 'var' into the pointer 'ptr'
                       // The '&' is the Address-of operator.
    
    // Print the value and address of the variable 'var'
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var); 
    
    // Print the address stored in the pointer 'ptr' (which is the address of 'var')
    printf("Value of pointer ptr (Address of var): %p\n", ptr);
    
    // Print the value at the address stored in 'ptr'
    printf("Value at the address pointed by ptr (*ptr): %d\n", *ptr);
                       // The '*' is the Dereference operator (or Value-at-address operator).
                       
    // Change the value of 'var' using the pointer
    *ptr = 25;
    
    printf("\nValue of var after using *ptr = 25: %d\n", var);
    
    return 0;
}