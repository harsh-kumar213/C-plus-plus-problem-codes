#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
bool possiblesol(int arr[],int n, int k, int mid){
     int cowcount = 1;
    int  lastposition = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]-lastposition>=mid){
            cowcount++;
        }
        if(cowcount == k){
            return true;
        }
        lastposition=arr[i];
    }
    return false;
}
int main{
    int n;
    int ans = 0;
    cout<<"enter the number of positions"<<endl;
    cin>>n;
    int arr[10];
    cout<<"enter the positions of the stables"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the number of aggresive cows"<<endl;
    cin>>k;
    int s =0;

   
    int e = n;
    int mid = s + (e-s)/2;
       while(s<e){
        bool po = possiblesol(arr,n,k,mid);
        if(po == true){
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<ans<<endl;
    return 0;

}