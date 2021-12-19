#include <iostream>
#include <string>
using namespace std;

struct mystruct
{
    int xyz;
    string name;
    char abc;
};



int main() {
    string food = "Pizza";  // A string variable
    string* ptr = &food;  // A pointer variable that stores the address of food

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Output the memory address of food with the pointer
    cout << ptr << "\n";

    // output the value of the food
    cout << *ptr << "\n";

    mystruct myobject;
    mystruct* myobjectPtr; 

    myobjectPtr = &myobject;

    myobject.abc = 'a';
    myobjectPtr->name = "haha";
    
    cout << myobject.abc;
    cout << myobjectPtr->name;
    return 0;
}
