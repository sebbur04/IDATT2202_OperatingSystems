#include <stdio.h>
#include <stdlib.h>

void func() {
    char b = 'b';
    /*long localvar = 2;
    printf("func() with localvar @ %p\n", (void*)&localvar);
    printf("func() frame address @ %p\n", __builtin_frame_address(0));
    localvar++;*/
    b = 'a';
}

int main() {
    printf("main() frame address @ %p\n", __builtin_frame_address(0));
    func();
    exit(0);
}