// #include<iostream>
// using namespace std;

// void printarray(int arr[4][3],int row,int col)
// {
//   for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<col;j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }

// int main()
// {
//     int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     cout<<arr[1][2]<<endl;
//     //we visualise 2D array in grid form but it get stored in linear form only so, if we want to know that a particular value is stored 
//     //at what index in linear form then we can use formula "c*i+j" where c is the no. of columns and i and j are index with respect to grid.

//     //for example if i want to know the location of 5 in above example then "c*i+j" means 3*1+1 = 4 that means 5 is stored on 4th index in 1D form.

//     //when we initialise the array we need to give atleast the value of number of columns.

//     //print array

//     int row = 4;
//     int col = 3;
//     printarray(arr, row, col);


// }


//**************************TAKING INPUT IN A 2D ARRAY*********************************************//

// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[3][3];
//   int row=3;
//   int col=3;

//   for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<col;j++)
//     {
//       cout<<"Enter the input for row index :"<<i<<"Enter the input for col index :"<<j<<endl;
//       cin>>arr[i][j];
//     }
//   }

//    for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<col;j++)
//     {
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
  
// }

//****************************************SEARCHING IN A 2D ARRAY************************************//
// #include<iostream>
// using namespace std;

// bool findtarget(int arr[3][3],int row,int col,int target)
// {
//   for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<col;j++)
//     {
//       if(arr[i][j]==target)
//       {
//         return true;
//       }
//     }
//   }
//   return false;
// }


// int main()
// {
//   int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
//   int row=3; int col=3;
//   int target; cout<<"Enter your target"<<endl; cin>>target;
//   // bool ans = 
//   cout<<findtarget(arr,row,col,target);

//   // if(ans==1)
//   // {
//   //   cout<<"target found"<<endl;
//   // }
//   // else{cout<<"target not found";}
// }


//*************************************Finding the max number in a 2D array****************************************************//

// #include<iostream>
// #include<limits.h>
// using namespace std;


// int findmax(int arr[3][3],int row,int col)
// {
//   int maxans = INT_MIN;
//   for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<col;j++)
//     {
//       if(arr[i][j]>maxans)
//       {
//         maxans=arr[i][j];  
        
//       }
//     }
//   }
//   return maxans;
// }

// int main()
// {
//   int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
//   int row=3; int col=3;

//   cout<<"Max number is :"<<findmax(arr,row,col);
// }


//**********************************************ROW-WISE SUM*************************************************************//

// #include<iostream>
// using namespace std;



// int main()
// {
//   int arr[3][4]={{10,20,5,7},{2,4,6,8},{10,15,15,10}};
//   int row=3;
//   int col=4;

//   for(int i=0;i<row;i++)
//   {
//     int sum=0;
//     for(int j=0;j<col;j++)
//     {
//       sum=sum+arr[i][j];
//     }
//     cout<<sum<<endl;
//   }
 
// }


//*****************************************Columnwise sum*****************************************//
// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//   int row=3;
//   int col=4;

//   for(int i=0;i<col;i++)
//   {
//     int sum=0;
//     for(int j=0;j<row;j++)
//     {
//       sum=sum+arr[j][i];
//     }
//     cout<<sum<<endl;
//   }
  
// }


//*****************************************Diagonal sum printing*****************************************//
 
// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//   int row=3;
//   int col=4;
//   int sum=0;

//   for(int i=0;i<row;i++)
//   {
//     // int sum=0;
//     sum=sum+arr[i][i];
//   }
//   cout<<sum<<endl;
  
// }



//******************************TRANSPOSE OF A MATRIX*****************//
#include<iostream>
using namespace std;

void transpose(int arr[][4],int row,int col)
{
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<=i;j++)
    {
      swap (arr[i][j] , arr[j][i]);
    }
  }
}

void print(int arr[][4],int row,int col)
{
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main()
{
   int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   int row=4;
   int col=4;
   cout<<"Printing before transpose"<<endl;
   print(arr,row,col);

   transpose(arr,row,col);

   cout<<"Printing after transpose"<<endl;
   print(arr,row,col);


}
 