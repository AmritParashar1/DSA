#include<iostream>
using namespace std;

int main()
{
    //ARRAY CREATION

    // int arr[10];
    // char ch[10];
    // bool flags[10];
    // long num[90];
    // short snum[10];
    // cout<<"array created"<<endl;


    //USING ADDRESS OF AND SIZE OF OPERATOR

    // int a=5;
    // cout<<"address of a is : "<<&a<<endl;
    // cout<<"size of a is : "<<sizeof(a)<<endl;

    // int arr[10];
    // cout<<"base address of array is :  "<<&arr<<endl;
    // cout<<"base of address of array is : "<<arr<<endl;
    // cout<<"size of array is: "<<sizeof(arr)<<endl;

    //ARRAY INITIALISATION

    // int arr[]={1,2,3,4,5};
    // int brr[5]={1,2,3,4,5};
    // int crr[5]={1,2}; //array has 5 locations but values are two only so remaining locations will get the value 0.
    // int grr[2]={1,2,3,4,5}; // This gives an error.

    //INDEXING IN ARRAY

    //Let there is an array of n-size then , the indexing of array starts with 0 and ends with n-1. This method of indexing is known as 0 based 
    //indexing.

   

    // int arr[]={1,2,3,4,5};

    //PRINTING OF AN ARRAY

    // cout<<arr[0]<<endl; // this gives 1 as an output which is first element of an array
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl; // this gives last element as output.

    //if you want to print all the values at once you will have to use for loop.

    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    //TAKING INPUT IN AN ARRAY

    // for(int i=0 ; i<5; i++)
    // {
    //     cout<<"Enter the value for index "<<i<<endl;
    //     cin>>arr[i];
       
    // }

    // //Printing an array

    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
  


  //PROBLEM STATEMENT 

//   int arr[10];  // Array of size 10

// // Taking input 
//   for(int i=0; i<10;i++)
//   {
//     cin>>arr[i];
//   }

// // double of each value of that array
//   for(int i=0;i<10;i++)
//   {
//     arr[i]= 2*arr[i];
//     cout<<arr[i]<<" "<<endl;
//   }

// cout<<arr[0];


// int arr[5];

// for(int i=0; i<5;i++)
// {
//     cin>>arr[i];
// }

// int sum = 0;
// for(int i=0;i<5;i++)
// {
    
//     sum = sum + arr[i];
    
// }

// cout<<sum<<endl;

  int arr[]={1,2,3,4,5};
  int sum = 0;
  for(int i=0;i<5;i++)
  {
    sum = sum+arr[i];
  }
  cout<<sum<<endl;
   

}