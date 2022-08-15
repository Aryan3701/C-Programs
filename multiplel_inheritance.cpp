#include <iostream>
using namespace std;
class par1{
	public:
		
	void parent1(){
		cout<<"This is parent 1";
	}
};
class par2{
	public:
	
	void parent2(){
	 	cout<<"this is parent 2";
	}	
};
class child : public par1,public par2{
	public:
	void show_child(){
		cout<<"this is child";
	}
};
int main(){
	child c1;
	c1.parent1();
	c1.parent2();
	c1.show_child();
	return 0;
}
