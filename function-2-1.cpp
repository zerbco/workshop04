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

void hexDigits(int *numbers,int length) {

    char hexdigit;
    for (int i = 0; i < length; i++) {
        switch(numbers[i]) {
            case 0:
            hexdigit = '0';
            break;
            case 1: 
            hexdigit = '1';
            break;
            case 2: 
            hexdigit = '2';
            break;
            case 3:
            hexdigit = '3';
            break;
            case 4: 
            hexdigit = '4';
            break;
            case 5:
            hexdigit = '5';
            break;
            case 6: 
            hexdigit = '6';
            break;
            case 7:
            hexdigit = '7';
            break;
            case 8: 
            hexdigit = '8';
            break;
            case 9: 
            hexdigit = '9';
            break;
            case 10: 
            hexdigit = 'A';
            break;
            case 11: 
            hexdigit = 'B';
            break;
            case 12:
            hexdigit = 'C';
            break;
            case 13:
            hexdigit = 'D';
            break;
            case 14:
            hexdigit = 'E';
            break;
            case 15:
            hexdigit = 'F';
            break;
            default:
            hexdigit = '?';
            break;

        }

        cout << i << " " << numbers[i] << " " << hexdigit;
        cout << " ";
        cout << endl;
    }

}