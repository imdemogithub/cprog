#include <stdio.h>
#include "type.h"
// #include <type.h>

int main() {
    int a = 5;
    char c = 'a';
    char s[] = "hello";
    float f = 1.5;

    printf("%s", typename(a));
}