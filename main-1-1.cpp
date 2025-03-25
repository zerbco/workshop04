#include <iostream>

extern int *readNumbers(); void printNumbers(int *numbers,int length);

int main() {
    int *numbers = readNumbers();
    int  length = 10;

    printNumbers(numbers,length);

    delete[] numbers;
    return 0;
}