// Pointer of Pointer
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p1=&a;
    int **p2=&p1;
    int ***p3=&p2;

    cout<<a<<endl;
    cout<<*p1<<endl;

    ***p3=50;

    cout<<**p2<<endl;
    cout<<***p3<<endl;

    return 0;
}

/*
// Wild Pointer

int main()
{
    int *p; // Wild pointer

    *p=12;
}
*/

/*
// Null pointer
int main()
{
    int *ptr=nullptr;
    cout<<ptr;
}

*/