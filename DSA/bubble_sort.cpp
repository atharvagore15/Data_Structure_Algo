#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[]= {5,4,3,2,1};

    int counter = 0;
    while(counter < n - 1){
        for(int i=0;i<n-counter-1;i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}