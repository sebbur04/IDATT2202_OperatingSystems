#include <stdio.h>

// ------------------------------------- //q
// Fork Bomb 
int main() {
    while(1) { // Infinite loop
        fork(); // Create a new process
    }
    return 0; // This line is never reached, because its forking until the system runs out of resources
}

// ------------------------------------- //
// Write a snippet of C code that allocates an integer variable to the stack. Use not more than 2-3 lines of code.
// Void is used because there are no return values, only performing code
void func() {int a;}

