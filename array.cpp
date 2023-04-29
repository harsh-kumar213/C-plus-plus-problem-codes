#include<iostream>
using namespace std;
int main(){
    int n;
    int ans;
    cout<<"enter the  size of your array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the values in the array in mountain order"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int s = 0;
    int e = n-1;
    while(s<=e){
      int   mid=(s+e)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
            break;
        }
        else if(arr[mid]>arr[mid + 1]){
            e = mid - 1;
        }
        else {
            s = mid +1;
        }
         mid=(s+e)/2;
    }
    
    cout<<"the highest element is at the index"<<ans<<endl;
    return 0;
}