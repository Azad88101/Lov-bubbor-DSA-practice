#include <iostream>
using namespace std;


class math{
    public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }
    int add(int a,  int b){
        return a+b;
    }
};
int main(int argc, char const *argv[])
{
    math obj;
    obj.a = 10;
    obj.b = 10;
// cout<<obj;
    cout<<obj.add(1,43);


    return 0;
}
