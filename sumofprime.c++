#include <iostream>
using namespace std;
int prime(int x)
{
    int i;
    int flag=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        flag++;
    }
    if(flag==2)
    return 1;
    else
    return 0;

}
int main()
{
    int n,i,sum;
    cout<<"Enter the number: \n";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(prime(i)&&prime(n-i))

            {
                cout<<n<<"="<<i<<"+"<<n-i<<endl;
            }
    }
}
