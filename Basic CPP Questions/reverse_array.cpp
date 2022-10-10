#include <iostream>
#include <math.h>
using namespace std;

void reverse(int num[], int n)
{
    
        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            swap(num[start], num[end]);
            start++;
            end--;
        }
        
    }


void print_array(int num[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

}

int main()
{
    int size;
    cout << "Enter the Size of Array ";
    cin >> size;
    int i;

    int arr[100];
    cout << "Enter elements in an array " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr,size);
    print_array(arr,size);
}