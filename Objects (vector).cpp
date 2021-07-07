#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

	class User
	{
		std::string status = "Alive";
		
		public:
		std::string first_name;
		std::string last_name;
		std::string get_status()
		{
			return status;
		}		
	};
	
int main()
	{
		User me;
		me.first_name = "Donald";
		//	me.last_name = "Duck";
		//	me.status = "Alive";
			
		/*	std::cout << "First name: " << me.first_name << std::endl;
		std::cout << "Last name: " << me.last_name << std::endl;
		std::cout << "Status: " << me.get_status() << std::endl;
		*/	
		vector<User>users;
		users.push_back(User());
		
		cout<< users[0].first_name << endl;
		
		return 0;
	}
	
