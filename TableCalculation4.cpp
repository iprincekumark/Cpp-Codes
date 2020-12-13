/*
Digital World announces seasonal discount on the laptops in the given order. 

Cost of the laptop                      Discount
Rs.20,000 -  Rs.30,000   		        10%
Rs.30,000 – Rs.40,000   		        15%
Rs.40,000 – Rs.50,000   		        18%
> = Rs.50,000                         	20%

An additional discount of 5% on all types of laptops is given. Sales tax is calculated at 12% on the price 
after the discounts. Define a class to accept the cost of the laptop and print the amount payable by the customer 
on purchase.

*/
#include <iostream>
using namespace std;
int main()
{
    float lap_cost, discount;
    cout << "Enter the Laptop Cost :-\n";
    cin >> lap_cost;
    if (lap_cost >= 20000 && lap_cost < 30000)
    {
        discount = lap_cost * 0.15;
        lap_cost = lap_cost - discount;
    }
    else if (lap_cost >= 30000 && lap_cost < 40000)
    {
        discount = lap_cost * 0.20;
        lap_cost = lap_cost - discount;
    }
    else if (lap_cost >= 40000 && lap_cost < 50000)
    {
        discount = lap_cost * 0.23;
        lap_cost = lap_cost - discount;
    }
    else if (lap_cost >= 50000)
    {
        discount = lap_cost * 0.25;
        lap_cost = lap_cost - discount;
    }
    lap_cost = lap_cost + (lap_cost * 0.12);
    cout << "Amount Payable = " << lap_cost;
    return 0;
}
