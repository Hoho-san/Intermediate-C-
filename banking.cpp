#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int main()
{	
	string name;
	int pass,sel,with,dep,bal;
	int x = 0;
	int y = bal;
	char ans;

		cout<<"****Welcome to T.I Banking APP*****\n";
	cout<<"Please enter your Account Name: ";
	cin>>name;
	cout<<"Please enter your PIN: ";
	cin>>pass;
	if (pass==1234)
	{
		do
	{
	system("cls");
	cout<<"***Account Details***\n";
	cout<<"Account Name: "<<name;
	cout<<endl;
	cout<<"Balance: ";
	cout<<bal;
	cout<<endl;
	cout<<"What would you like to do?\n1. Withdraw \n2. Deposit \n3. Exit\n";
	cout<<"Input Selection: ";
	cin>>sel;
	
	if ( sel==  1)
	{
		system("cls");
		cout<<"***Withdraw***\n";
		cout<<"Balance: "<<bal;
		cout<<endl;
		cout<<"Please input withdraw amount: ";
		cin>>with;
		y = bal;
		bal = y - with;
		if(bal<0)
		{
			cout<<"Invalid Transaction!!!\nRetry the Process!\n";
		}	
	}
	else if( sel== 2)
	{
		system("cls");
		cout<<"***Deposit***\n";



        
		cout<<"Please input Deposit amount: ";
		cin>>dep;
		x = bal;
		bal = x+dep;
	}
	else if ( sel== 3)
	{	
  	system("cls");
  	cout<<"Are you sure you want end the Transaction?"<<endl;
    }
	cout<<"Go back to first page? (Y/N) ";
    cin>>ans;	
	}
	
	while(ans=='Y' or ans == 'y');
	}
	
 	return 0;
}