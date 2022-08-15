#include <iostream>
using namespace std;
class Student{  							//Creating a class of name studen
	public:									//all are public attributes anyone can access
	int id;
	string name;
	
	void put_details(int a, string b){      //function to get input for class
		id = a;
		name = b;
	}
	void get_details(){						// functio to put output for class
		cout<<"ID: "<<id;
		cout<<"\nname: "<<name;
	}
};
	
	
	int main(){
		
		Student s1;							//created an instance of class name s1 or we can call it as an object of class
		
									
		int s_id;
		string s_name;
		cout<<"Enter Studet id ";			//taking input for id
		cin>>s_id;
		cout<<"\nEnter Student name ";		//taking input for name
		cin>>s_name;
		s1.put_details(s_id,s_name);
		s1.get_details();
		getchar();
	 return 0;	
	}
