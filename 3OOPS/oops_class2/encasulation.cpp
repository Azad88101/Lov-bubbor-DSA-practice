#include <iostream>
using namespace std;

class human
{

private:
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
};
// its called encapsulation

int main(int argc, char const *argv[])
{

    return 0;
}
