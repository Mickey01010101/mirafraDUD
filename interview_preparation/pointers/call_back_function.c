#include <stdio.h>

void display(void (*functionPointer)(int, int), int a, int b);
void sum(int a, int b);
void sub(int a, int b);

int main() {
    int a = 10, b = 20;
    display(&sum, a, b);
    display(&sub, a, b);
}

void display(void (*functionPointer)(int, int), int a, int b) {
    functionPointer(a, b);
}

void sum(int a, int b) {
    printf("sum=%d\n", a + b);
}

void sub(int a, int b) {
    printf("sub=%d\n", a - b);
}

