#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int target = 7;

    bool flag = 0;
    //0 means not found
    //1 means found
int n=5;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"target found"<<endl;
    }
    else{cout<<"target not found"<<endl;}
}