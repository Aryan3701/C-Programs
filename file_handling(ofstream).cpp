#include <iostream>
#include <fstream>  // fstream to use file handling 
using namespace std;

int main(){
	ofstream Myfile("abc.txt"); // ofstream or output stream used to create a file in the harddisk
	Myfile << "Welcome you have written in file"; // used to write content on the created file
	Myfile.close();			// closing the file
	
	
}


