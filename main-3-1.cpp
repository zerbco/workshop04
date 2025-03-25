#include <iostream>
using namespace std;
extern int *readNumbers(); bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
    int *numbers1 = readNumbers();
    int *numbers2 = readNumbers();

    int length = 10;

    cout << equalsArray(numbers1,numbers2,length) << endl;

    delete[] numbers1;
    delete[] numbers2;
    return 0;
}