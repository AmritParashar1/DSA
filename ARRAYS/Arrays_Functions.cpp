// #include<iostream>
// using namespace std;

// void Printarray(int arr[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" "<<endl;
//     }
// }

// bool linearsearch(int arr[],int size,int target)
// {
//     for(int i=0;i<size; i++)
//     {
//         if(arr[i]==target)
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
//     int target = 6;

//     Printarray(arr,size);
//    bool ans = linearsearch(arr,size,target);
   
//    if(ans == 1)
//    {
//     cout<<"Target found "<<endl;
//    }
//    else{cout<<"Target not found "<<endl;}

// }


//*****************************PROBLEM STATEMENT*********************************************//

// Q. Find number of zeros and ones in an array

// #include<iostream>
// using namespace std;

// void onezerocount(int arr[],int size)
// {
//     int zerocount=0;
//     int onecount=0;

// for(int i=0;i<size;i++)
// {
//     if(arr[i]==0)
//     {
//         zerocount++;
//     }

//     else if (arr[i]==1)
//     {
//         onecount++;
//     }
    
// }

// cout<<"zerocount: "<<zerocount<<endl;
// cout<<"onecount: "<<onecount<<endl;
// }

// int main()
// {
// int arr[]={0,1,1,1,0,0,1,1};
// int size=8;

// onezerocount(arr,size);


// }


//*****************************PROBLEM STATEMENT*********************************************//
//Q.Find minimum number in an array

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int findminnumberinarray(int arr[],int size)
// {
//     int minans=INT_MAX;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]<minans)
//         {
//             minans = arr[i];
//         }
//     }

//     return minans;
    
// }
// int main()
// {
//     int arr[]={20,4,15,2,6,8,11};
//     int size = 7;
//   int minimum =  findminnumberinarray(arr,size);
//   cout<<"Minumum number in an array is: "<<minimum;
// }


//**********************************************PROBLEM STATEMENT***************************************//
//Q. Reversing an array


// #include<iostream>
// using namespace std;

// void reversearray(int arr[],int size)
// {
//     int left=0;
//     int right=size-1;

//     while(left<=right)
//     {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }

//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//   int arr[]={1,2,3,4,5,6};
//   int size=6;
//   reversearray(arr,size);
// }


//**********************************************PROBLEM STATEMENT******************************//
//Q. Printing an extreme point in an array

// #include<iostream>
// using namespace std;

// void printingextreme(int arr[],int size)
// {
//     int left=0;
//     int right = size-1;
//     while(left<=right)
//     {
//         if(left==right)
//         {
//             cout<<arr[left]<<endl;
//         }
//         else
//         {
//             cout<<arr[left];
//             cout<<arr[right];
//         }
        
//         left++;
//         right--;
//     }
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     printingextreme(arr,size);
// }


//****************************************************PROBLEM STATEMENT**************************************//
//Q. Find the unique element

// same number ka xor(^) cancel out ho jaata hai aur 0 se kisi bhi number ka xor(^) wahi number de deta hai for eg:- 11^11 gives 0 and 
//0^11 gives 11.

// #include<iostream>
// using namespace std;

// int uniquenumber(int arr[], int size)
// {
//     int ans = 0;
//     for(int i=0; i<size; i++)
//     {
//         ans = ans^arr[i];

//     }
//     return ans;
// }
// int main()
// {
//     int arr[]={2,10,11,10,2,13,15,13,15};
//     int size = 9;
//     int finalans = uniquenumber(arr,size);
//     cout<<"finalans is: "<<finalans<<endl;

// }

//**************************************************PROBLEM STATEMENT*************************************************//
//Q. Print all the pairs 

// #include<iostream>
// using namespace std;
// int main()
// {
// int arr[]={10,20,30};
// int size = 3;
//  for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             cout<<arr[i]<<", "<<arr[j]<<endl;
//         }
//     }


// }

//********************************************PAIR SUM**************************************//

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={10,20,30};
//     int size=3;
//     for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             cout<<arr[i]+arr[j]<<endl;
//         }
//     }
// }

//**************************PROBLEM STATEMENT*********************************//
//Q. Print all triplets

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4};
//     int size=4;
//     for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size;j++)
//         {
//             for(int k=0;k<size;k++)
//             {
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//             }
//         }
//     }
// }


//******************************************PROBLEM STATEMENT****************************//
//Q. Sort zero and one in an array

// #include<iostream>
// using namespace std;

// void sortzeroones(int arr[],int size)
// {
//     int zerocount=0;
//     int  onecount= 0;

//     //COUNT ZEROS AND ONES
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==0)
//         {
//             zerocount++;
//         }  
//         else if(arr[i]==1)      
//         {
//             onecount++;
//         }                               
//     }

//     //PLACE ALL ZEROS FIRST
// // int i;
// // for(i=0;i<zerocount;i++)
// // {
// //     arr[i]=0;
// // }

// // //PLACE ALL ONES FIRST
// // for(int j=i;j<size;j++)
// // {
// //     arr[j]=1;
// // }

// //ANOTHER WAY THROUGH WHILE LOOP

// int index=0;
// while(zerocount--)
// {
//     arr[index]=0;
//     index++;
// }

// while(onecount--)
// {
//     arr[index]=1;
//     index++;
// }
    

// }

// int main()
// {
//     int arr[]={0,1,0,1,1,0,0,0,0};
//     int size = 9;
//    sortzeroones(arr,size); 

//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//**************************************************PROBLEM STATMENT******************************//
//Q. Shift the elements of an array by 1.

// #include<iostream>
// using namespace std;

// void shiftelements(int arr[],int size)
// {
//     int i , j;
//     for(int i=0;i<size-1;i++)
//     {
//         arr[j]=arr[i-1];
//     }
// }
// int main()
// {
//     int arr[]={10,20,30,40,50,60};
//     int size = 6;

//     shiftelements(arr,size);

//     for(int j=0;j<size;j++)
//     {
//         cout<<arr[j]<<" ";
//     }
// }

//*********************************PROBLEM STATEMENT**********************************//
//Q.Shift the elements of an array towards right side by 1

// #include<iostream>
// using namespace std;

// void shiftarray(int arr[],int n)
// {
//     int temp = arr[n-1];

//     for(int i = n-1; i>=1;i--)
//     {
//         arr[i] = arr[i-1];
//     }

//     arr[0] = temp;
// }

// int main()
// {
//     int arr[]={10,20,30,40,50};
//     int n = 5;

//     shiftarray(arr,n);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//****************************PROBLEM STATEMENT****************************************//

//Q. Shifting the elements of an array to its left side by 1

// #include<iostream>
// using namespace std;

// void shiftarray(int arr[],int n)
// {
//     int temp = arr[0];

//     for(int i=0;i<n-1;i++)
//     {
//         arr[i] = arr[i+1];
//     }

//     arr[n-1] = temp;
// }

// int main()
// {
//     int arr[] = {10,20,30,40,50};
//     int n= 5;
//     shiftarray(arr,n);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//*****************************PROBLEM STATEMENT************************************//

//Q. Shift multiple elements in an array

// #include<iostream>
// using namespace std;

// void shiftarray(int arr[],int n)
// {
//     int temp[] = {arr[n-2],arr[n-1]};

//     for(int i=n-1;i>=2;i--)
//     {
//         arr[i] = arr[i-2];
//     }

//     for(int i=0;i<2;i++)
//     {
//         arr[i] = temp[i];
//     } 
// }

// int main()
// {
//     int arr[]={10,20,30,40,50,60};
//     int n = 6;
//     shiftarray(arr,n);
    
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    cout<<2%6<<endl;
}