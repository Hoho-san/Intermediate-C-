#include<iostream>
using namespace std;
	// classses (by default private) more complex
	// struct   (by default public) very simple
	// Class !!!
	class User
	{
		string status = "Student";
		
		public:
		string first_name;
		string last_name;
		string get_status()
		{
			return status;
		}		
	};
	
int main()
	{
		User me;
		me.first_name = "Jojo";
		me.last_name = "Javier";
	//	me.status = "student";
		
		cout << "First name: " << me.first_name << endl;
		cout << "Last name: " << me.last_name << endl;
		cout << "Status: " << me.get_status() << endl;
		
		return 0;
	}
	
