#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c;

    c=a+b;
    a=500;
    cout<<"The value of c is "<<c<<endl;

    return c;
}

// void swap(int a,int b)
void swap(int &a,int &b)
{
    int c;

    c=a;
    a=b;
    b=c;

    cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;

    return;
}

void fun(int a,int b)
{
    a=99999;
    b=99999;
    cout<<"The values of a and b inside fun function are: "<<a<<" "<<b<<endl;
}


int main()
{

    int a,b;
    int c;

    a=4;
    b=6;

    cout<<"The values of a and b before passing into the fun function are: "<<a<<" "<<b<<endl;

    // c=75;

    // int d;
    // d=sum(a,b);

    // cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a;
    // cout<<"The value of c is "<<c<<endl;

    fun(a,b);

    cout<<"The values of a and b after passing into the fun function are: "<<a<<" "<<b<<endl;
    return 0;
}