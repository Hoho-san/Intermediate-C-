#include<iostream>
using namespace std;
	// classses (by default private) more complex
	// struct   (by default public) very simple
	// Struct !!!
	struct User
	{
		string first_name;
		string last_name;
		string get_status()
		{
			return status;
		}
		private:
			string status = "Student";
	};
	
int main()
	{
		User me;
		me.first_name = "Hoho";
		me.last_name = "San";
	//	me.status = "student";
		
		cout << "First name: " << me.first_name << endl;
		cout << "Last name: " << me.last_name << endl;
		cout << "Status: " << me.get_status() << endl;
		
		return 0;
	}
	
