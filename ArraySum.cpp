//Program to print sum of an array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int sum=0;
    int n = sizeof arr/sizeof arr[0];
    for (int i=0;i<=n;i++){
        sum=sum +i;
    }
    cout<<"The sum of the array is:"<< sum;
    cout<<endl;
}