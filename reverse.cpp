#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[10];
    cout<<"enter the elemnts of your array"<<endl;
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    int i = 0; 
    int j = n-1;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
 for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}