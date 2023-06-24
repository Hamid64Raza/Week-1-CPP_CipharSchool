// Pointer to pointer
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int*p;
    p=&a;

    cout<<*p<<endl;
    int **q=&p;

    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;

}
/*
//Pointer in array

int arr[]={12,34,56};
cout<<*arr<<endl;

int *ptr=arr;
for(int i=0;i<3;i++)
{
    cout<<*(arr+1)<<endl;
}

*/

//Passsing pointer to function
/*
 void increment(int a)
 {
    a++;
 }

int main()
{
    int a=2;
    increment(a);
    cout<<a<<endl;

    return 0;
}
*/