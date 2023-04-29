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
    int i = 0,j = 0;
     int c = 0;
    while(c<n+m)
    {
        if(arr1[i]<arr2[j])
        {
           arr3[c] = arr1[i];
           i++;
        }
        else{
            arr3[c] = arr2[j];
            j++;
        }
        c++;
    }
    for(int i = 0; i<n+m; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}