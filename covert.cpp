#include <iostream>

using namespace std;

class Time
{
    private :

        int seconds;
        int hrs,mint,sec;

    public :

        void input();
        void convert();
        void displaytime();

};

void Time::input()
{
    cout<<"Enter time : \n";
    cout << "Hour? ";
    cin >> hrs;
    cout << "Minute? ";
    cin >> mint;
    cout << "Seconds? ";
    cin >> sec;
}
void Time::convert()
{
    seconds=hrs*3600+mint*60+sec;
}
void Time::displaytime()
{
    cout<<" Time is : "<< hrs << " : "<<mint<<" : "<<sec;
    cout<<"Time in seconds : " <<seconds;
}
int main()
{
    Time t;
    t.input();
    t.convert();
    t.displaytime();
}
