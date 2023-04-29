#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of boxes"<<endl;
    cin>>n;
    int k;
    cout<<"enter the age till which the candle is required"<<endl; 
    cin>>k;
    int arr[10];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int w =1;
    while (arr[w]<arr[w-1] && w>=0 )   {
      int temp = arr[w-1];
      arr[w-1] = arr[w];
      arr[w]=temp;
      w++;
    }
    
    int m=1;
    while( m<n)
    {
        cout<<arr[m]<<" ";
    }
    int count  = 0;
   int i = 0;
    int j = 1;
    while(i<n){
        
    while(j<=k)
    {
        if(j==arr[i])
        {
            j++;
            
            break;
        }
        else
        {
            i++;
         
        }
        
    }
    count++;
    i++;
    }
    cout<<"the number of boxes required are "<<count;
    return 0;
}