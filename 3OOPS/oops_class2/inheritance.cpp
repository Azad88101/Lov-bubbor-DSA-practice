#include <iostream>
using namespace std;

class human
{

public:
    int age;
    string name;
    int height;
    int weight;

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

class male : public human
{
};
int main(int argc, char const *argv[])
{

    male alpha;
    alpha.setAge(5);
    cout << alpha.height;;

    return 0;
}
