// MANDATORY ASSIGNMENT 1 - IDATT2202 - OPERATING SYSTEMS

// Write a C program printx.c that reads an integer X from the command line and reads a string from standard  input. 
// The program should print the given string X times on standard output and then exit.

#include <stdio.h>   // Include standard I/O library for input/output functions
#include <stdlib.h>  // Include standard library for functions like atoi()

int main(int argc, char *argv[]) {
    // Check if exactly one command-line argument is provided
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;  // Exit with error code 1 if arguments are incorrect
    }

    // Convert the command-line argument from string to integer using atoi()
    int A = atoi(argv[1]);

    // Allocate a character array to store the input string
    char str[100];

    // Read a string from standard input using fgets
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print the input string A times using a loop
    for (int i = 0; i < A; i++) {
        printf("%s", str);
    }

    return 0;  // Return 0 to indicate successful execution
}
