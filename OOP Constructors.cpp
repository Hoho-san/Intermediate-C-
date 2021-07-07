#include<iostream>
using std::string;

class Employee{ // class was default by private
	public:
		string Name;
		string Company;
		string Position;
		int Age;
		
		void showfunction(){ // this is a function
			std::cout<<"Name: "<< Name<< std::endl;
			std::cout<<"Position: "<< Position <<std::endl;
			std::cout<<"Company: "<< Company<< std::endl;
			std::cout<<"Age: "<< Age<< std::endl;
		}
		Employee(string name, string position, string company, int age){	// this is the constractor
			Name = name;
			Position = position;
			Company = company;
			Age = age;
			}
};
int main()
{
	Employee employee1 = Employee("Gojo", "Sensei", "Tokyo Jujutsu High", 24); //printing constractor
	employee1.showfunction();
	
	std::cout<<"\n";
	
	Employee employee2 = Employee("Hoho", "Sensei", "Tokyo Jujutsu High", 20);
	employee2.showfunction();
	
	return 0;
}

