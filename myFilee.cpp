#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{	
	string filename;	// choose from the user input what to open file!
	cin>> filename;

	fstream myFile;	
//	myFile.open("text.txt", ios::out);	//out - write
//	if (myFile.is_open()){
//		myFile << "Hello\n";
//		myFile << "World\n";
//		myFile.close();
//	}
//	
//	myFile.open("text.txt", ios::app);	//app - append
//	if (myFile.is_open()){
//		myFile << "Hello\n";
//		myFile << "Earth\n";
//		myFile.close();
//	}
	
//	myFile.open("text.txt", ios::in);	//in - read		
//	if (myFile.is_open()){
//		string line;
//		
//		while(getline(myFile, line)){
//			cout << line << endl;	
//		}
//		myFile.close();
//	}
	
	myFile.open(filename, ios::app);	// choose from the user input what to open file!
	if (myFile.is_open()){
		myFile << "welcome\n";
		myFile << "Home\n";
		myFile.close();
	}	

}
