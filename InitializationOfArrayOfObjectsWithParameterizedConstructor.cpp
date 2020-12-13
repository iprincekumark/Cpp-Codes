#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    char name[50];
    int age;

public:
    //parameterized constructor with default argument
    person(char *name, int age = 18)
    {
        strcpy(this->name, name);
        this->age = age;
    }

    //function to display values
    void display()
    {
        cout << name << "\t" << age << endl;
    }
};

int main()
{
    //array of class objects declaration
    person per[3] = {"ABC", person("PQR"), person("XYZ", 30)};

    per[0].display();
    per[1].display();
    per[2].display();

    return 0;
}