#include <iostream>

using namespace std;

int main()
{
   int arr[5]={1,2,3,4,5};
   int i;
   int *p;
   p=arr;
   cout<<"The values in the array are: \n";

   for(i=0;i<5;i++)
   {
       cout<<*p<<endl;
       p++;
   }
   return 0;

}
