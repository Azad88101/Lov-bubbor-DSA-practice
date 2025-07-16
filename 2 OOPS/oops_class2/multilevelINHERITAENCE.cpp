#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    void fun()
    {
        cout << "Function of A\n";
    }
};

// Derived class B
class B : public A
{
public:
    void fun()
    {
        cout << "Function of B\n";
    }
    void hen()
    {
        cout << "hen of B\n";
    }
};

// Further derived class C
class C : public B
{
public:
    void fun()
    {
        cout << "Function of C\n";
    }
    void pen()
    {
        cout << "Function of C\n";
    }
};

int main()
{
    A *obj1 = new A(); // Base class pointer → base object
    obj1->fun();       // Output: Function of A

    A *obj2 = new B(); // Base class pointer → derived (B) object
    obj2->fun(); 
        // Output: Function of B (polymorphism)

    A *obj3 = new C(); // Base class pointer → derived (C) object
    obj3->fun();   
    // obj3->hen();    // Output: Function of C

    B *obj4 = new C(); // B pointer → C object (valid)
    obj4->fun(); 
    obj4->hen() ;
      // Output: Function of C

    // B* obj5 = new A();  // ❌ Invalid - can't assign base to derived pointer
    // C* obj6 = new A();  // ❌ Invalid - same

    delete obj1;
    delete obj2;
    delete obj3;
    delete obj4;

    return 0;
}
