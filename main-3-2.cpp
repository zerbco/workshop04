#include <iostream>
using namespace std;
extern int *readNumbers(); bool equalsArray(int *numbers1,int *numbers2,int length); int *reverseArray(int *numbers1,int length);

int main() {
    int *numbers1 = readNumbers();
    int *numbers2 = readNumbers();

    int length = 10;

    int *reversednumbers1 = reverseArray(numbers1, length);
    int *reversednumbers2 = reverseArray(numbers2, length);

    cout << equalsArray(reversednumbers1,reversednumbers2,length) << endl;

    delete[] numbers1;
    delete[] numbers2;
    delete[] reversednumbers1;
    delete[] reversednumbers2;

    return 0;
}