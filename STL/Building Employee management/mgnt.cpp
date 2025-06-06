#include <iostream>  // for input/output
#include <vector>    // for using std::vector
#include <algorithm> // for functions like sort, max_element
#include <numeric>   // for accumulate, iota
#include <iterator>  // for iterators like ostream_iterator
#include <string>    // for using std::string

using namespace std;

struct employee
{
    int id;
    string first_name;
    string last_name;
    int age;
    double salary;
    int work_expirience;
};

void displayEmployee(const employee &emp)
{
    cout << "ID     " << emp.id << "    ";
    cout << "name   " << emp.first_name << "  " << emp.last_name << "    ";
    cout << "age    " << emp.age << "   ";
    cout << "Salary " << emp.salary << "\n";
}

int main(int argc, char const *argv[])
{

    vector<employee> employees = {

        {12, "azad", ".", 18, 120000, 3},
        {14, "lala", "jff", 12, 190000, 1},
        {15, "ayush", "peru", 35, 100000, 9},
        {16, "hari", "naryan", 70, 400000, 40},

    };

    sort(employees.begin(), employees.end(), [](const employee &e1, const employee &e2)
         { return e1.salary > e2.salary; });

    cout << "sorted employe based oh highest sallary \n";
    // for(auto val:employees){
    //     cout<<val.first_name<<"\n";
    // }

    // for_each(employees.begin(), employees.end(), [](const employee &e)
    //          {
    //              cout << e.salary << '\n';
    //          });

    // for_each(employees.begin(), employees.end(), displayEmployee);

    vector<employee> highEarner;
    copy_if(
        employees.begin(),
        employees.end(),
        back_inserter(highEarner),
        [](const employee &e)
        { return e.salary > 120000; }
    );



    cout<<"high  Erners \n";

    for_each(highEarner.begin(),highEarner.end(),displayEmployee);






    return 0;
}
