#include <iostream>
using namespace std;
class Vehicle{		//parent class
	public:
	int cost=500;
	int mileage=30;
	
	void print(){
		cout<<"cost:- "<<cost;
		cout<<"\nmileage:- "<<mileage;
	}
};
class Car : public Vehicle{		//child class inheriting parent class methods as they are oublic and can be accesed by child class
	public:
		int no_of_tyres=4;
		string color="red";
		
		void card_details(){
			cout<<"no_of_tyres:- "<<no_of_tyres;
			cout<<"\ncolor:- "<<color;
		}
};
int main(){
	Car c1;
	
	c1.print();			//object of child class using method of parent class using single level inheritance
	cout<<"\n";
	c1.card_details();
	return 0;
}
