#include <iostream>
#include <fstream>  // fstream to use file handling 
using namespace std;

int main(){
	
	
	ifstream Myreadfile("abc.txt"); //ifstream access the file
	string n;
	while(getline(Myreadfile,n))  // reading the file content using get line as string only store one line so we use loop here
	   cout << n;
}


