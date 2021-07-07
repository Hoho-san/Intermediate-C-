#include<iostream>
using std::string;

//Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

class AbstractEmployee{             // absraction Class?
	virtual void AskForPromotion()= 0;
	
};
class Employee:AbstractEmployee{ // class was default by private
	
	private:					// Access Specifiers
		
		string School;
		string Position;
		int Age;
	protected:					// Access Specifiers
		string Name;
	public:						//Access Specifiers
		void setName (string name){ 		//setter
			Name = name;
		}
		string getName (){					//getter
			return Name;
		}
		void setSchool (string school){ 	//setter
			School = school;
		}
		string getSchool (){				//getter
			return School;
		}
		void setPosition (string position){ //setter
			Position = position;
		}
		string getPosition (){				//getter
			return Position;
		}
		void setAge (int age){ 				//setter
		 if (age>=18)		// if thus not meet the qualification, it will remain the same!!
			Age = age;
		}
		int getAge (){						//getter
			return Age;
		}
		
		void showfunction(){ // this is a function
			std::cout<<"Name: "<< Name<< std::endl;
			std::cout<<"Position: "<< Position <<std::endl;
			std::cout<<"School: "<< School<< std::endl;
			std::cout<<"Age: "<< Age<< std::endl;
		}
		Employee(string name, string position, string school, int age){	// this is the constractor
			Name = name;
			Position = position;
			School = school;
			Age = age;
			}
	void AskForPromotion(){ // put here the conditon of your Abstraction class
		if (Age>=25){
			std::cout<< Name <<" Special Grade Sorcerer!"<< std::endl;}
		else if (Age >0 && Age <25 ){
			std::cout<< Name <<", need more Practice!\n"<< std::endl;
		}
	}
	virtual void Work(){ // if theres no virtual function, it will cout it first
		std::cout<< Name << " killing cursed spirits.\n"<< std::endl;
	}
};

class CursedUser:public Employee{ // to access all methods:) (make inheritance public)
	public: 
		string Cursedtype;
		CursedUser(string name, string position, string school, int age, string cursedType )
		: Employee(name, position, school, age){
			Cursedtype = cursedType;
		}
		void use(){  //methods of the class curseduser
			std::cout<<Name<<" killed Eso using "<<Cursedtype<<std::endl; 	// name was be directly get through class curseduser:employee if it is in protected area!
			std::cout<<"She was also a Dokyusei of Yuji itadori in "<<getSchool(); // school was get from abstraction (setter & getter).
			std::cout<<".\n";
		}
		void Work(){
		std::cout<< Name << " killing cursed spirits using powers.\n"<< std::endl;
	}			
		
};
class PhysicalStrength: public Employee{
	public:
		string Punchtype;
		PhysicalStrength(string name, string position, string school, int age,string punchType )
		: Employee(name, position, school, age) {
			Punchtype = punchType;
		}
		void power(){
			std::cout<<Name<<" fight along side Nobara on last episode and uses three consecutive "<<Punchtype<<std::endl;
		}
		void Work(){
		std::cout<< Name << " killing cursed spirits using natural strength.\n"<< std::endl;
	}
};
int main()
{
	Employee employee1 = Employee("Gojo Satoru", "Sensei", "Tokyo Jujutsu High", 26); //printing constractor
	employee1.showfunction();	
	std::cout<<"\n";
	
	Employee employee2 = Employee("Hoho San", "Gakusei", "Tokyo Jujutsu High", 20);
	employee2.showfunction();
	std::cout<<"\n";
	
	employee1.setSchool("Tokyo Jujutsu College");
	
	employee1.setAge(21);	// you can change here the value but if if thus not meet the condition, it will remain the same!!
	std::cout<<employee1.getName()<<" is graduated in "<<employee1.getSchool()<<" at the age of "<< employee1.getAge()<<std::endl;
	std::cout<<"\n";
	
	employee1.setAge(27);
	employee1.AskForPromotion();
	employee2.AskForPromotion(); 
	std::cout<<"\n";
	
	CursedUser a = CursedUser("Nobara Kugisaki", "Gakusei", "Tokyo Jujutsu High", 15, "Black Flash");	// values set curseduser class(inherrit from employee class)
	a.use(); 				// printing the methods in the class curseduser
	a.AskForPromotion();
	PhysicalStrength b = PhysicalStrength("Yuji Itadori", "Gakusei", "Tokyo Jujutsu High", 16, "Divergent Fist");
	b.power();
	b.AskForPromotion();
	
	a.Work();
	b.Work();
	
	Employee *e1 = &a;
	Employee *e2 = &b;
	
	e1->Work(); // -> use to access members using a pointer
	e2->Work(); //
	
	return 0;
}
 
