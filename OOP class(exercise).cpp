#include<iostream>
using std::string;

class Employee{ // class was default by private
	public:
		string Name;
		string Company;
		int Age;
		
		void showfunction(){ // this is a function
			std::cout<<"name: "<< Name<< std::endl;
			std::cout<<"company: "<< Company<< std::endl;
			std::cout<<"age: "<< Age<< std::endl;
		}
};
int main()
{	
	Employee employee1; 			// Employee was also a data type!!1
	employee1.Name = "Hoho";
	employee1.Company = "none";
	employee1.Age = 20;
	employee1.showfunction();
	
	std::cout<<"\n";
	
	Employee employee2;
	employee2.Name = "Javier";
	employee2.Company = "none";
	employee2.Age = 35;
	employee2.showfunction();
	
	return 0;
}
