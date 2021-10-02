//write include statements
#include "dna.h"
#include <string>
//write using statements
using std::cout;using std::cin;using std::string;using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	int num;
	int num1;
	int num2;
	char varification;
	bool vars = true;
	do{
		
		cout<<"1-Factorial\n";
		cout<<"2-Greatest Common Divisor\n";
		cout<<"3-Exit\n";
		cin>>choice;
		if(choice == 1)
		{
			cout<<"Enter 1 number for factorial\n";
			cin>>num;
			cout<<"Factorial:"<< factorial(num)<<"\n";
		}
		if(choice == 2)
		{
			cout<<"Enter first number for gcd\n";
			cin>>num1;
			cout<<"Enter second number for gcd\n";
			cin>>num2;
			cout<<"GCD:"<< gcd(num1, num2)<<"\n";
		}
		if(choice == 3)
		{
			cout<<"Are you sure you want to exit? (y/other char)\n";
			cin>>ws>>varification;
			if(varification == 'Y'|| varification  == 'y')
			{
				vars = false;
			}else{
				vars = true;
			}
		}
	}
	while(vars);
	
	return 0;
}