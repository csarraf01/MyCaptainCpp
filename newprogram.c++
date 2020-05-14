#include <iostream>

using namespace std;

int main()
{
    char ch;
    int a;
    float b;
    double c;
    cout << "Size of char :" << sizeof(ch)<<"bytes"<< endl;
    cout << "Size of int :" << sizeof(a)<<"bytes"<<endl;
    cout << "Size of float :" << sizeof(b)<<"bytes"<<endl;
    cout << "Size of double :" << sizeof(c)<<"bytes"<<endl;
    return 0;
    float d,prod;
    cout<<"Enter the values of a and b"<<endl;
    cin >> b;
    cin>>d;
    prod=b*d;
    cout<<"The product of "<<b<<" & "<<d<<" is "<<prod;

}
