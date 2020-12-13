/*
WAP to illustrate Dimond Problem in multiple inheritance, its solution using Virtual base classes. 
Write separate programs if required.
*/
#include <iostream>
using namespace std;
class Netflix
{
public:
    Netflix()
    {
        cout << "Constructor Of Netflix" << endl;
    }
    void checkSubscription()
    {
        cout << "Subscription is Active" << endl;
    }
};
class TheOriginals : virtual public Netflix
{
public:
    TheOriginals()
    {
        cout << "Constructor Of The Originals" << endl;
    }
};
class Legacies : virtual public Netflix
{
public:
    Legacies()
    {
        cout << "Constructor Of The Legacies" << endl;
    }
};
class TheVampireDiaries : public TheOriginals, public Legacies
{
public:
    TheVampireDiaries()
    {
        cout << "Constructor Of The The Vampire Diaries" << endl;
    }
};
int main()
{
    TheVampireDiaries Damon;
    Damon.checkSubscription();
    return 0;
}