// #include<iostream>
// using namespace std;


// int main()
// {
//     //*******************************************THEORY**********************************//
//     /* a is the original variable whereas b and c are the reference variables referring to a. */
//     // int a=5;
//     // int &b = a;
//     // int &c = a;
//     // cout<<a<<" "<<b<<" "<<c<<" ";
//     // b++;
//     // cout<<a<<" "<<b<<" "<<c<<" ";

// }


//********************************************VERY IMPORTANT CONCEPTS************************//

//*******************EXAMPLE OF CALL BY VALUE******************//

/*In the example below you give the value of n and that n goes for the increment  but these n are not same it is the copy of main n thats why in the 
function they have to return the value and you have to update the value of n they you are printing the value. */

// #include<iostream>
// using namespace std;
// int increment(int n)
// {
//     n=n+1;
//     return n;
// }
// int main()       
// {
//     int n;
//     cin>>n;
//     n=increment(n);
//     cout<<n;
// }


//****************************************CALL BY REFERENCE****************************//

#include<iostream>
using namespace std;
void increment(int &k)
{
    k = k*107;
}
int main()
{
    int n;
    cin>>n;
    increment(n);
    cout<<n;
}

//Now what happened in the above code the reference variable of n is created and both the reference variable(k) and main variable(n) is pointing
//to same memory address so there is no need to return values and update the value its the original value which is getting increment.