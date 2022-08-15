#include<iostream>
using namespace std;
class Student{				//creating a class
	public:
	int id;
	string name;
	Student(int a,string b){//creting a constructor with same name as class it do not have any return type used for initialization of class variables
		id = a;
		name = b;
	}
	void put_details(){
		cout<<"ID:- "<<id;
		cout<<"\nname:- "<<name;
	}
};
   int main(){
   	Student s1(1,"aryan");//here we can initialize variables during instantiation using constructor
   	s1.put_details();
   	return 0;
   }
