#include <iostream>
using namespace std;

int main()
{	
	//C++ String to read a line of text	
	
    char word[100];								//its like string word containing up to 100 letters
    cout << "Enter a word or sentence: ";
    cin.get(word, 100);							//To read the text containing blank space

    cout << "You entered: " << word << endl; 	// it will output the whole input 
    return 0;
}
