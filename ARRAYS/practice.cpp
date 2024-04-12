// #include<iostream>
// using namespace std;

// void printarray(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// bool linearsearch(int arr[],int size,int target)
// {
//     for(int i=0;i<size;i++)
//     {
//         if (arr[i]==target)
//         {
//             return true;
//         }
        
//     }

//     return false;
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int size = 5;
//     int target; cin>>target;

//     printarray(arr,size);
//     bool ans = linearsearch(arr,size,target);

//     if(ans==1)
//     {
//         cout<<"Target found "<<endl;
//     }

//     else {cout<<"Target not found "<<endl;}

// }


#include<iostream>
using namespace std;

int main()
{
    int row=4;
    int col=4;
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}