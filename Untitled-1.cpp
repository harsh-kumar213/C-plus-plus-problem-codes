#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
    int s = 0; 
    int e = n-1;
    int mid = (s+e)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = (s +e)/2;
    }
    return s;
}
void binarysearch(int arr[],int n , int start , int end , int key){
      
      
}
int main(){
    int n,st=0,en=n-1;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int arr[10];
    cout<<"enter the rotated array"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int pivot = getpivot(arr,n);
    cout<<"the pivot element is at the index "<<pivot<<" with value "<<arr[pivot]<<endl;
    int key;
    cout<<"enter the key value"<<endl;
    cin>>key;
    if(key>arr[pivot]&&key<arr[n-1]){
        st = pivot + 1 ;
    }
    else{
        en = pivot - 1;
    }
 int mid = (st + en)/2;
      while(st<en){
        if(arr[mid] == key){
            cout<<"the key value is at the index "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            st = mid +1;
        }
        else{
            en = mid - 1;
        }
        mid = (st+en)/2;

      }
    
    return 0;
}