#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << " element :";
        cin >> arr[i];
    }

    // pre computation

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int query;
    cout << "enter the number of queries : ";
    cin >> query;
    while (query--)
    {
        int number;
        cin >> number;

        // fetch
        cout << number << "  is " << hash[number] << " times " << endl;
    }
}