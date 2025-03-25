#include <iostream> 
using namespace std;

int *readNumbers() {
    
    int *numbers = new int[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter number:" << endl;
        cin >> numbers[i];
    }
    return numbers;
}

void printNumbers(int *numbers,int length) {
    if (length <= 0) {
        return;
    }

    for (int i = 0; i < length; i++) {
        cout << i << " " << numbers[i] << " ";
        cout << " ";
        cout << endl;
    } 
    
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    
    if (length < 1) {
        return false;
    } 
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
}

int *reverseArray(int *numbers1,int length) {
    
    if (length <= 0) {
        return nullptr;
    }

    int *reversed = new int[length];

    for (int i = 0; i < length; i++) {
        reversed[i] = numbers1[length-1-i];
    }
    return reversed;
}