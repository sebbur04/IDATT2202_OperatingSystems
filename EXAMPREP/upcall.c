#include <signal.h> // Include the signal handling library
#include <stdio.h>  // Include the standard input/output library
#include <unistd.h> // Include the POSIX operating system API

void handler(int num)
{
    printf("We caught a signal %d\n", num); // Print the signal number that was caught
}

// Main function with signal handlers for SIGTERM, SIGUSR1, and SIGSEGV
int main()
{
    signal(SIGTERM, handler); 
    signal(SIGUSR1, handler); 
    signal(SIGSEGV, handler); 

 /* Uncommenting the following lines will cause a segmentation fault
       char *pointer = NULL; // Declare a null pointer
       *pointer = 10; // Dereference the null pointer and assign a value, causing SIGSEGV
    */

// Without this loop, the program would terminate immediately after setting up the signal handlers,
// and it wouldn't be able to catch any signals.

    while (1)
    {
        printf("Sleeping for 5 seconds...\n");
        sleep(5);
    }
}
