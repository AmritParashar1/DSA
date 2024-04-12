
//******************************NEGETIVE NUMBERS TO LEFT AND POSITIVE NUMBERS TOWARDS RIGHT SIDE***************************//


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={-7,23,12,-10,-11,40,60};
//     int index;
//     int j=0;

//     for(index=0;index<7;index++)
//     {
//         if(arr[index]<0)
//         {
//             swap(arr[index],arr[j]);
//             j++;
//         }
//     }

//     for(int i=0;i<7;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// } 



//Two pointer approach for the above question

// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[] = {1,2,-3,4,-5,6};
//    int n=6;
//    int l = 0;
//    int h = n-1;
//    while(l<h)
//    {
//     if(arr[l]<0)
//     {
//         l++;
//     }
//     else if(arr[h]>0)
//     {
//         h--;
//     }

//     else
//     {
//         int temp = arr[l];
//         arr[l] = arr[h];
//         arr[h] = temp;

//     }
//    }

//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
// }


//Sort 0's and 1's

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1,0,0,1,0,1,0};
//     int n=7;
//     int l=0;
//     int h=n-1;

//     while(l<h)
//     {
//         if(arr[l]==0)
//         {
//             l++;
//         }
//         else if(arr[h]==1)
//         {
//             h--;
//         }
//         else
//         {
//             swap(arr[l],arr[h]);
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }



//Sort colours 

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,0,2,1,1,0};
    int n=6;
    int index=0;
    int left=0;
    int right=n-1;

    while(index<=right)
    {
        if(arr[index]==0)
        {
            swap(arr[index],arr[left]);
            left++;
            index++; 
        }
        else if(arr[index]==2)
        {
            swap(arr[index],arr[right]);
            right--;
        }
        else
        {
            index++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}