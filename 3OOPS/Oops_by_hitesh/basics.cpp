#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ing;

    // its is deafault constructor
    Chai()
    {
        cout << " this is  default constructor  \n ";
    }

    void printChaiDetails()
    {
        cout << "tea name" << teaName << "serving " << servings << "\n ingredients";

        for (int i = 0; i < ing.size(); i++)
        {
            cout << ing[i] << "   ";
        }
    }
};

int main(int argc, char const *argv[])
{
    Chai chai;

    // cout << "helo";
    return 0;
}
