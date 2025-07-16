
#include <iostream>
using namespace std;

// 1111111111111111111   1111111111111 1111111 11111111111111111
class engine
{
public: //  after this whatever we have write all consider as public
    string name;
    int age;
    int age2;
    short size;
    bool ismarried;
    double salary;

    // / / / / // /////// //// / // /  data member called to function
    int getAge()
    {
        return age;
    }
};

// 2  2 2 22 2 2 22 22222222222 22222222222222222 222222222222222222 2222222222222 2 2 22 2 2 2 222222
class hero
{

public:
    int level;
    int popular;

    hero(int level, int popular) // parameterised constructor
    {
        // level = level;
        // popular = popular;// now its give wrong result;

        // we can use
        this->level = level;
        this->popular = popular;
        cout
            << " ye h pra cons  and  this key use kr rha hu " << level << "    " << popular;
    }

    hero() // normal construector
    {
        level = 10;
        cout << " defalt level h ye " << level << endl;
    }

    hero(int sublevel, int subpopular, int a) // parameterised constructor
    {
        level = sublevel;
        popular = subpopular;

        cout << "ye h parameter constructor   \njo values ko show kr rha h  " << level << "    " << popular;
    }

    // //// copy consturctor

    hero(hero &temp)
    {

        this->level = temp.level;

        cout << " ye h copy constructor   " << level << "\n";
    }

    //  destructor
    // delete key word use kya to ye bhi call ho jayge dyanmic me line 145
    // ~hero()
    // {
    //     cout << "desturcot  called  << statuc ke liye   \n";
    // }

    // most of the cases me devvelopment esi hi hoti ha
    // public:
    int
    getlevel()
    {
        return level;
    }
    int setlevel(int val)
    {
        level = val;
    }
};

int main(int argc, const char **argv)
{

    // cout << sizeof(engine);

    // for crceting  a projejct
    // 1 clasname 2 object name  eg = engine car

    // engine car;

    //  if i want to get name of first object

    // car.name = "volvo";

    //  dot operator usud to  access members (attributes and methods) of an object

    // cout << car.name; // error nhi aya kuch bho

    // 2222222222222222222222222222222222222222222222222222222

    // hero first;

    // //  the get val and set val is actually called as getter and setter
    // first.setlevel(4);

    // cout << first.getlevel();

    //  dynamic  alloacation

    //  hero *first = new hero(); // create a heap memry
    // new key word return address thats why we are using pointer

    // first->setlevel(6);
    // cout << first->getlevel() << endl; // jese hi ham dynamic alloction krte h to ham . dot operator use nhi kr skt isliye
    //  ham -> ye use krte h member funtio aur member var ko acces krne ke liye

    // // delete first;  for deleting from heap
    // cout << first->getlevel(); // jese hi ham dynamic alloction krte h to ham . dot operator use nhi kr skt isliye

    // cout << (*first).getlevel(); /// we can use value at or derefrence so we can achive to access the getlevel func

    // hero *first1 = new hero(); //////// /  /// if  you dont add value means its default constructor

    // hero *first2 = new hero(2, 8); /// it call the parameter constructor

    hero a; // thses are creted as staticalyy

    a.setlevel(787767);

    hero b(a);

    // so  we can use desturctor using ~ tilde
    // if  the memory allcated as dynamically we can frree the memory using delete keyword

    hero *c = new hero();

    delete c;




 
    return 0;
}