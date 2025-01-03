#include <iostream>

using namespace std;
// Function to print array
void printArray(int arr[], int n)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// Function to reverse array
void reverseArray(int arr[], int start, int end)

{

    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

void rev(int arr[],int i , int n){
    if (i>=n/2) return;  

    swap(arr[i],arr[n-i-1]);
    rev(arr,i+1,n);
    
}

int main()
{
    int n = 6;
    int arr[] = {5, 4, 3, 2, 1, 0};
    // reverseArray(arr, 0, n - 1);
    rev(arr,0,n);
    printArray(arr, n);
    return 0;
}