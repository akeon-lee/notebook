#include <iostream>
#include <string>

using namespace std;

void swap(int *x, int *y);

int main()
{
    int num1 = 1;
    int num2 = 2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    swap(num1, num2);

    cout << "======\n";

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    const char *letters;
    letters = "Hello World";
    cout << letters << endl;

    return 0;
}

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

    delete x;
    delete y;
}
