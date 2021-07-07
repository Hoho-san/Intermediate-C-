#include<iostream>

using std::string;

//Abstraction means hiding complex things behind a procedure that make those things look simple.

class AbstractEmployee{             // absraction Class?
	virtual void AskForPromotion()= 0;
	
};
class Employee:AbstractEmployee{ // class was default by private
	
	private:					//Access Specifiers
		string Name;
		string Company;
		string Position;
		int Age;
	public:						//Access Specifiers
		void setName (string name){ 		//setter
			Name = name;
		}
		string getName (){					//getter
			return Name;
		}
		void setPosition (string position){ //setter
			Position = position;
		}
		string getPosition (){				//getter
			return Position;
		}
		void setCompany (string company){ 	//setter
			Company = company;
		}
		string getCompany (){				//getter
			return Company;
		}
		void setAge (int age){ 				//setter
		 if (age>=18)				// if thus not meet the qualification, it will remain the same!!
			Age = age;
		}
		int getAge (){						//getter
			return Age;
		}
		
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
	void AskForPromotion(){ // put here the conditon of your Abstraction class
		if (Age>=25){
			std::cout<< Name <<" Special Grade Sorcerer!"<< std::endl;}
		else if (Age >0 && Age <25 ){
			std::cout<< Name <<", need more Practice!"<< std::endl;
		}
	}
};
int main()
{
	Employee employee1 = Employee("Gojo", "Sensei", "Tokyo Jujutsu High", 24); //printing constractor
	employee1.showfunction();	
	std::cout<<"\n";
	
	Employee employee2 = Employee("Hoho", "Sensei", "Tokyo Jujutsu High", 20);
	employee2.showfunction();
	std::cout<<"\n";
	
	employee1.setCompany("Tokyo Jujutsu College");
	employee1.setAge(26);	// you can change here the value but if if thus not meet the condition, it will remain the same!!
	std::cout<<employee1.getName()<<" is graduated in "<<employee1.getCompany()<<" at the age of "<< employee1.getAge()<<std::endl;
	std::cout<<"\n";
	
	employee1.AskForPromotion();
	employee2.AskForPromotion(); 
	
	return 0;
}

