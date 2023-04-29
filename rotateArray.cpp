#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int k;
    cin>>k;
    int arr[10];
    int brr[10];
    for(int i = 0; i<n ;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(i+k+1<n)
        {
          brr[i+k] = arr[i];
            
        }
        else
        {
            int d = (i+k)%n;
            brr[d] = arr[i];
        }
    }
    for(int i = 0; i<n; i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}