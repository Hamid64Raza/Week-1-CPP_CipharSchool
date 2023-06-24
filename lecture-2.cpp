#include<iostream>
using namespace std;

/* int sum(int x,int y)
{
    return x+y;

}
int main()
{
    cout<<sum(2,30);
}
*/

/*
int maxi2(int a,int b)
{
    if(a>b)return a;
    return b;
    }

int  maxi3(int x,int y,int z)
{
    if(x>y){
        if(x>z)return x;
        return y;
    }
    else{
        if(y>z)return y;
        return z;
    }
}
int main()
{
    cout<<maxi2(5,3);cout<<endl;
    cout<<maxi3(5,39,9);
}

*/



/*
#include<iostream>
using namespace std;

int main()
{
    int x = 3;
    float y = 1.3;
    void* ptr = &y;
    void* ptr1 = &x;

      float* floatPtr = static_cast<float*>(ptr);
    cout << *floatPtr << endl;

      int* intPtr = static_cast<int*>(ptr1);
    cout << *intPtr << endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;
void increment(int&);
void decrement(int&);
int main()
{
    int x=12;
    int y=13;
    increment(x);
    decrement(y);
    cout<<x<<endl;
    cout<<y;
}
void  increment(int& a)
{
    a++;
    //cout<<a;
}
void decrement(int& b)
{
    b--;
    //cout<<b;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{    int n;
    cout<<"Enter nuber to know its memory  address"<<endl;
    cin>>n;
    int* x;
    x=&n;
    cout<<x;
}
*/

/*

*/