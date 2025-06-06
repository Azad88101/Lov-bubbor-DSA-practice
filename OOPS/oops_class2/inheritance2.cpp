#include <iostream>
using namespace std;

class human
{
protected:
    int age;
    string name;
    int height;
    int weight;

public:
    int getAge()
    {
        return age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getHeight()
    {
        return height;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
};

// class male : public human
// {

// };
// class male : protected human
// {
// public:
//     void printAge(){
//         cout<< this->getAge()<<'\n';
//    ; }
// };

// in protected  we can acces base class within the child class only not in object

class male : protected human
{
public:
    void printAge()
    {
        // cout << this->getAge() << '\n';
        cout << this->age << '\n';
    }
};

int main(int argc, char const *argv[])
{
    male a;
    a.printAge();
    // cout << a.age;

    return 0;
}
