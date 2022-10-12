#include<iostream>
using namespace std;
void sortArray(int [], int);
int binSearchFun(int [], int, int);
int main()
{
    int len, i, arr[50], num, pos;
    cout<<"Enter the Size (max. 50): ";
    cin>>len;
    cout<<"Enter "<<len<<" Elements: ";
    for(i=0; i<len; i++)
        cin>>arr[i];
    // sort the array first
    sortArray(arr, len);
    // print the sorted array
    cout<<"\nThe New Sorted Array is:\n";
    for(i=0; i<len; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nEnter Element to be Search: ";
    cin>>num;
    // search element using binary search
    pos = binSearchFun(arr, num, len);
    if(pos==0)
        cout<<endl<<num<<" isn't available in the list";
    else
        cout<<endl<<num<<" is available at Position "<<pos;
    cout<<endl;
    return 0;
}
void sortArray(int arr[], int len)
{
    int i, j, temp;
    for(i=0; i<(len-1); i++)
    {
        for(j=0; j<(len-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int binSearchFun(int arr[], int num, int len)
{
    int first, last, middle;
    first = 0;
    last = (len-1);
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
            return (middle+1);
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    return 0;
}
