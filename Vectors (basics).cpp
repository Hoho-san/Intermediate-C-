#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int>data ={1,2,3}; 	//elements
	data.push_back(10);			//adding data to elements 
	cout<<data[3]<<endl;		//printing specific elements like array from a vector	10
	cout<<data.size()<<endl;	//getting the total size of elements					4				
	data.pop_back();			//removing last element from the data 
	cout<<data[data.size() - 1]<<endl;		//printing the last elements from a vector	3	
}
