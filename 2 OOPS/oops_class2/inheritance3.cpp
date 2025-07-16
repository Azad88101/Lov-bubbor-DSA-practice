#include <iostream>
#include <vector>
using namespace std;
class Animal
{
private:
    int age;
    string name;

public:
    Animal(int a, const string &n) : age(a), name(n) {}

    void setAge(int a) { age = a; }
    int getAge() const { return age; }

    void setName(const string &n) { name = n; }
    string getName() const { return name; }

    void speak()
    {
        cout << "Animal " << name << " says hello!" << endl;
    }

    Animal()
    {
        cout << "default constructor" << "\n";
    }
};
class human : public Animal
{
};

int main(int argc, char const *argv[])
{
    // Animal dog;
    // dog.setAge(12);
    // dog.setName("berlin");
    // dog.speak();

    human h;
    h.setAge(10);
    cout << h.getAge();
    return 0;
}
