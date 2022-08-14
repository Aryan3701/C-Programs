// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int choice,a,b;
    cout << "pls select operation to perform\n";
    cout << "1.addition\n2.subtraction\n3.divison\n4.multiplication\n";
    cout<< "enter your choice";
    cin>> choice;
    switch(choice){
        case 1:
        cout<< "enter first no";
        cin>>a;
        cout<< "enter second no";
        cin>>b;
        cout<< "addition is:-\t" << a+b;
        break;
        getchar();
        case 2:
        cout<< "enter first no";
        cin>>a;
        cout<< "enter second no";
        cin>>b;
        cout<< "subtraction is:-\t" << a-b;
        break;
        getchar();
        case 3:
        cout<< "enter first no";
        cin>>a;
        cout<< "enter second no";
        cin>>b;
        cout<< "divison is:-\t" << a/b;        
        break;
        getchar();
        case 4:
        cout<< "enter first no";
        cin>>a;
        cout<< "enter second no";
        cin>>b;
        cout<< "multiplication is:-\t" << a*b;
        break;
        getchar();
        default:
        cout<< "choice dosent exist";
        break;
        getchar();
    }
    return 0;
}
