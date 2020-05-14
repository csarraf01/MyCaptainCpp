#include <iostream>

using namespace std;

int main()
{
   int age;
   string name,reg_state;
   string nationality;
   cout<<"ENTER THE NAME OF THE VOTER: ";
   cin>>name;
   cout<<"ENTER THE AGE OF THE VOTER: ";
   cin>>age;
   cout<<"ENTER THE NATIONALITY OF THE VOTER: ";
   cin>>nationality;
   cout<<"ENTER THE STATE WHERE THE VOTER'S NAME IS REISTERED: ";
   cin>>reg_state;
   if(age>=18&&nationality=="INDIAN")
   {
    cout<<"ELIGIBLE\n";
    cout<<"YOU ARE ELIGIBLE TO VOTE IN: "<<reg_state;
   }
    else
    cout<<"NOT ELIGIBLE";

    return 0;

}
