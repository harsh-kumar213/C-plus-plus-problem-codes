#include<iostream>
using namespace std;
bool possiblesol(int arr[], int n , int mid,int m){
    int boardsum = 0;
    int painter = 1;
    for(int  i = 0; i<n; i++){
        if(boardsum + arr[i]<=mid){
            boardsum = boardsum + arr[i];
        }
        else{
            painter++;
            if(painter>m || arr[i]>mid){
                return false;
            }
            boardsum = arr[i];
        }

    }
    return true;
}
int main(){
    int n,m,sum=0;
    int ans = 0;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int arr[10];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter the number of painters"<<endl;
    cin>>m;
    for(int  i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    int s = 0; 
    int e = sum;
    int mid = s + (e-s)/2;
    while(s<e){
        bool po = possiblesol(arr,n,mid,m);
        if(po == true){
            e = mid - 1;
            ans = mid;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<ans;
    return 0;
}