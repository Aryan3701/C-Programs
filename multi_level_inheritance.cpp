#include <iostream>
using namespace std;
class Grandparent{		//parent class
	public:
	string name;
	void get_name(string n){
		name = n;
	}
	void put_name(){
		cout<<"Name:- "<<name;
	}

};
class Parent : public Grandparent{		//child class inheriting parent class methods as they are oublic and can be accesed by child class
	public:
		string gender;
		
		void get_gender(string m){
			gender = m;
		}
		void put_gender(){
		cout<<"gender:- "<<gender;
	}
		
};
class child : public Parent{		//child class inheriting parent class methods as they are oublic and can be accesed by child class
	public:
		int age;
		
		void get_age(int o){
			age = o;
		}
		void put_age(){
		cout<<"age:- "<<age;
	}
		
};
int main(){
	child c1;
	c1.get_name("aryan");
	c1.get_gender("male");
	c1.get_age(19);
	c1.put_name();
	c1.put_gender();
	c1.put_age();
	return 0;
}
