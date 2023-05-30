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

   
    int j = 0;
    while(j<m){
       int i = n + j-1;
       while((i>=0) && (arr2[j]<arr1[i]))
       {
          arr1[i+1] = arr1[i];
          i--;
       } 
       arr1[i+1] = arr2[j];
       j++;
    }
    
      for(int a = 0; a<n+m; a++)
      {
        cout<<arr1[a]<<" ";
      }

    return 0;
}