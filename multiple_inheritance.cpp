#include <iostream>
using namespace std;
class par1{   			//first parent class
	public:
		
	void parent1(){
		cout<<"This is parent 1";
	}
};
class par2{				//second parent class
	public:
	
	void parent2(){
	 	cout<<"this is parent 2";
	}	
};
class child : public par1,public par2{			//child class inheriting both first and second parent class
	public:
	void show_child(){
		cout<<"this is child";
	}
};
int main(){
	child c1;					//child class using methods of both first and second parent class
	c1.parent1();
	c1.parent2();
	c1.show_child();
	return 0;
}
