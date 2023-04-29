#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of first array"<<endl;
    cin>>n;
    int m;
    cout<<"enter size of second array"<<endl;
    cin>>m;
    int arr1[10];
    int arr2[10];
    int arr3[20];
    cout<<"enter elements of first array"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr1[i];
    }
     cout<<"enter elements of second array"<<endl;
    for(int i = 0; i<m; i++)
    {
        cin>>arr2[i];
    }

     