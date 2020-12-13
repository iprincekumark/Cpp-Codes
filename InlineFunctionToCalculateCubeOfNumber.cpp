#include<iostream>
#include<math.h>
using namespace std;
class calc
{
    int no;
public:inline void number()
{
    int cube;
    cout<<"Enter the number\n";
    cin>>no;
    cube=no*no*no;
    cout<<"\n Cube of a given number is:-\n"<<cube;
}
};
int main()
{
    calc c;
    c.number();
    return 0;
}