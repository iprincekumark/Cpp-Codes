/*
Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above 
classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and 
"I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for 
each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale
*/
#include <iostream>
using namespace std;
class Mammals
{
public:
    void fn1()
    {
        cout << "I am mammal" << endl;
    }
};
class MarineAnimals
{
public:
    void fn2()
    {
        cout << "I am a marine animal" << endl;
    }
};
class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void fn3()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};
int main()
{
    Mammals mm;
    MarineAnimals ma;
    BlueWhale bw;
    cout << "Function of Mammals by obj of Mammals" << endl;
    mm.fn1();
    cout << endl;
    cout << "Function of MarineAnimals by obj of MarineAnimals" << endl;
    ma.fn2();
    cout << endl;
    cout << "Function of BlueWhale by obj of BlueWhale" << endl;
    bw.fn3();
    cout << endl;
    cout << "Function of Mammals by obj of BlueWhale" << endl;
    bw.fn1();
    cout << endl;
    cout << "Function of MarineAnimals by obj of BlueWhale" << endl;
    bw.fn2();
    return 0;
}
