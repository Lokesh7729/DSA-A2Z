#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
        return;
    cout << "lokesh";
    cout << endl;
    printName(i + 1, n);
}
void printNumberOneToN(int i, int n)
{
    if (i > n)
        return;
    cout << i;
    cout << endl;
    printNumberOneToN(i + 1, n);
}
void printReverseNumber(int i, int n)
{
    if (i < 1)
        return;
    cout << i<<endl;
    printReverseNumber(i - 1, n);
}

int main()
{
    int n = 4;
    // printName(1,n);
    // printNumberOneToN(1, n);
    printReverseNumber(n,n);
    return 0;
}