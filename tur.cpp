#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    for(int j = 0; j<3; j++)
    {
        arr[j]++;
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}