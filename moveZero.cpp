#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of first array"<<endl;
    cin>>n;
    int arr[10];
    for(int i  =  0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i = 0;
    for(int j = 0; j<n; j++)
    {
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//this code is shifting all non zero values to the left