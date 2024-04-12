//STATIC MEMORY ALLOCATION

// #include<iostream>
// using namespace std;

// void fun(int arr[], int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     fun(arr,n);
// }


//DYNAMIC MEMORY ALLOCATION

#include<iostream>
using namespace std;

void fun(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data; 
        arr[i]=data;
    }

    fun(arr,n);
}