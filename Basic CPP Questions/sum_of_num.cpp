#include <iostream>
using namespace std;
int main (){

    int a;
    cout<< "Entr the Number till which you want sum" << endl;
    cin >>a;
    int i=1;
    int sum=0;
    while (i<=a){

    sum = sum +i;
    i+=1;   
    }
   cout<< sum<< endl;
}