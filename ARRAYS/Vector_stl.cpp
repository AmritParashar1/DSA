
// //Basic functions with vector like inserting and poping

// #include<iostream>
// #include<vector>
// using namespace std;

// void fun(vector<int>v)
// {
//     int size = v.size();
//     for(int i=0;i<size;i++)
//     {
//         cout<<v[i]<<" ";
//     }

//     cout<<endl;
// }

// int main()
// {
//     //in vector you don't need to tell the size
//     //just keep inserting it will manage the allocations.
//     vector<int> v ; //array hi hai

//     //insert

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);

//     fun(v);

//     v.pop_back();
//     fun(v);

//     v.pop_back();
//     fun(v);

//     v.pop_back();
//     fun(v);


// }


//VECTOR IN BACKEND WORKS ON TWO PRINCIPLES CAPACITY AND SIZE

// #include<iostream>
// #include<vector>
// using namespace std;

// void fun(vector<int>v)
// {
//     int size = v.size();
//     for(int i=0;i<size;i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }

// int main()
// {
//     vector<int>v;

//     while(1)
//     {
//         int d;
//         cin>>d;
//         v.push_back(d);
//         cout<<"Capacity:"<<v.capacity()<<" "<<"Size:"<<v.size()<<endl;
//     }
// }




//TAKING INPUT IN A VECTOR

// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>v)
// {
//     int size = v.size();
//     for(int i=0;i<size;i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }

//Another type of printing method

// void print2(vector<int>v)
// {
//     cout<<"Printing method 2"<<endl;
//     for(auto it:v)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     vector<char>v;
//     v.push_back('a');
//     v.push_back('b');
//     v.push_back('c');

//     cout<<"Front element "<<v[0]<<endl;
//     cout<<"Front element "<<v.front()<<endl;
//     cout<<"End element "<<v[v.size()-1]<<endl;
//     cout<<"End element "<<v.back()<<endl;

    



    




    //vector initialization different methods 
    // vector<int>v; //default with no data , 0 size
    // vector<int>arr2(5,-1); //this will print an dynamic array of size 5 and all values -1
    // vector<int>arr3 = {1,2,3,4,5};
    // vector<int>arr4{1,2,3,4,5};

    // //how to copy vector

    // vector<int>arr5 = {1,2,3,4,5};
    // vector<int>arr6(arr5);  //array 6 will have all the data of array 5
    // print(arr6); 
    
    //insert

    // int n; cin>>n;

    // for(int i=0;i<n;i++)
    // {
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }

    // //print
    // print(v);

    // v.clear();

    // v.push_back(40);

    // print(v);

    
//}


//**********************************************2D VECTOR**********************************************//
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// vector<vector<int> > arr(5, vector<int>(10,-1));
// //row size = arr.size()
// for(int i=0;i<arr.size();i++)
// {
//     for(int j=0;j<arr[i].size();j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }

//**********************************JAGGED 2D ARRAY**********************************//

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> > brr;

    vector<int> vec1(10,0);
    vector<int> vec2(5,1);
    vector<int> vec3(12,5);
    vector<int> vec4(3,0);
    vector<int> vec5(6,0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i=0;i<brr.size();i++)
{
    for(int j=0;j<brr[i].size();j++)
    {
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}

}
