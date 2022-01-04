#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    const size_t N = 100;
    int numbers[N];

    for (size_t ndx = 0; ndx < N; ++ndx) {
        numbers[ndx] = ndx;
    }
        
    printf("SIZE_MAX = %zu\n", SIZE_MAX);
    size_t size = sizeof numbers;
    printf("size = %zu\n", size);

    _getch();
    return 0;
}