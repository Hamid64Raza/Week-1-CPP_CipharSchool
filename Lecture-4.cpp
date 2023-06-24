//Factorial program using Recursion.
#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    else{
     return   num*fact(num-1);
    }
}

int main()
{
    cout<<"Enter Number to find its factorial"<<endl;
    int num;
    cin>>num;
    cout<<fact(num);
}