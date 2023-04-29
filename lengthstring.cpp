#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}
//faltu character hatana hai
char remove(arr[],int n)
{
   int i = 0;
   if()
}

char islowercase(char c)
{
   if(c>='A' && c<='Z')
   {
    char ch = c -'A'+ 'a';
   return ch;
   }
   else
       return c;
}
bool palindrome(char arr[],int n){
    int i = 0;
    while(i<=n/2)
    {
        if(islowercase(arr[i]) == islowercase(arr[n-1-i]))
        {
            i++;
        }
    
    else{
        return false;
    }
}

    return true;

}
int main(){
   /*  char name[10];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;*/
     

    char arr[10];
    cin>>arr;
      int n = getlength(arr);
      char wfc[10];
      wfc = remove(arr,n);
    
    cout<<"your input array is: "<<palindrome(arr,n)<<"palindrome"<<endl;
    return 0 ;
}