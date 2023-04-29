#include<iostream>
using namespace std;

int getLength(char name[])
{
int i = 0;
    while(name[i]!='\0')
    {
        i++;
    }
    return i;
}

void reverse(char name[])
{
    int s = 0;
    int e = getLength(name)-1;
    while(s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<< name ;
}

int main(){
    char name[20];
    cin>>name;
     reverse(name);

   
    return 0;
    }
