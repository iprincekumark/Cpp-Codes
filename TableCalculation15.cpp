/*
Imagine a tollbooth with a class called TollBooth. 
The two data items are of type unsigned int and double to hold the total number of cars and total amount of money collected. 
A setValue() member function initializes both of these data members to 0. 
A member function called payingCar( ) increments the car total and adds 0.5 to the cash total. 
Another function called nonPayCar( ) increments the car total but adds nothing to the cash total. 
Finally a member function called display( ) shows the two totals. 
Include a main function to test this class. This program should allow the user to 
push one key to count a paying car , and another to count a non paying car. Pushing the ‘E’ key should
cause the program to print out the total number of cars and total cash and then exit.
*/
#include <iostream>
#include <string>
using namespace std;
class TollBooth
{
public:
    int cartotal;
    double cash;

    void setValue(int q, double p)
    {
        cartotal = q;
        cash = p;
    }
    void payingCar()
    {
        cartotal = 1 + cartotal;
        cash = .50 + cash;
    }
    void nopayCar()
    {
        cartotal = ++cartotal;
    }
    void display()
    {
        cout << "Car Total = " << cartotal << endl;
        cout << "Cash Total = " << cash << endl;
        return;
    }
};
int main()
{
    TollBooth T;
    T.setValue(0, 0.0);
    char ch;
    cout << "Press 0 for non-paying cars \nPress 1 for paying cars \nPress E to exit program\n";
    do
    {
        cin >> ch;
        fflush(stdin);
        if (ch == '0')
            T.nopayCar();
        if (ch == '1')
            T.payingCar();
    } while (ch != 'E');
    T.display();
    return 0;
}