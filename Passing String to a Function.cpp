#include <iostream>
using namespace std;

void display(char *);			//function overloading
void display(string);

int main()
{	
	//Passing String to a Function
	
    string str1;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);
    
	display(str1);
	
    cout << "\nEnter another string: ";
    cin.get(str, 100, '\n');

    display(str);
    return 0;
}

void display(char s[])		//variables can be different in main function but it must be in same type
{
    cout << "Entered char array is: " << s << endl;
}

void display(string s)		//variables can be differentin main function but it must be in same type
{
    cout << "Entered string is: " << s << endl;
}
