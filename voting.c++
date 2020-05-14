#include <iostream>

using namespace std;

int main()
{
   int age;
   string name;
   string nationality;
   cout<<"ENTER THE NAME OF THE VOTER: ";
   cin>>name;
   cout<<"ENTER THE AGE OF THE VOTER: ";
   cin>>age;
   cout<<"ENTER THE NATIONALITY OF THE VOTER: ";
   cin>>nationality;

   if(age>=18&&nationality=="INDIAN")
    cout<<"ELIGIBLE";
    else
    cout<<"NOT ELIGIBLE";

    return 0;

}
