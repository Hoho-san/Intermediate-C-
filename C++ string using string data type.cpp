#include <iostream>
using namespace std;

int main()
{		
	//C++ string using string data type
	
    // Declaring a string object
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);		//use getline() instead of using cin>> or cin.get() function

    cout << "You entered: " << sentence << endl;		// it will also output the whole input 
    return 0;
}
