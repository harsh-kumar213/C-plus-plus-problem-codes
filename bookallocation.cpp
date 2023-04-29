#include<iostream>
using namespace std;

bool possiblesol(int arr[],int n,int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

     for(int i =0 ; i<n; i++)
     {
        if(pagesum + arr[i] <=mid)
        {
            pagesum+=arr[i];
            
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
     }
     return true;
}

int main()
{
    int n,m;
    cout<<"enter the number of books"<<endl;
    cin>>n;
    cout<<"enter number of students"<<endl;
    cin>>m;
    int arr[10];
    cout<<"enter the number of pages in each book"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    for(int i =0; i<n; i++)
    {
        sum = sum + arr[i];
    }
      
      int s = 0;
      int e = sum;
      int mid = (s+e)/2;
      int ans = -1;
      while(s<e){
        if(possiblesol(arr,n,m,mid))
        {
            e = mid - 1;
            ans = mid;
        }
        else{
            s = mid + 1;
        }
        mid = (e+s)/2;
      }
      cout<<"minumum number of maximum books is"<<ans<<endl;
      return 0;

}