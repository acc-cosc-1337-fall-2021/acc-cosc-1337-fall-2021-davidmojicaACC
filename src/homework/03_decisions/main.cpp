#include "decisions.h"
//write include statements
using std::cout; using std::cin;
int main() 
{
	int option;
	int grade;
	cout<<"		MAIN MENU\n\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n";
	cin>>option;
	if (option == 1)
	{
		cout<<"Enter Number: ";
		cin>>grade;
		cout<<"\nGet Letter Grade If: "<<get_letter_grade_using_if(grade)<<"\n";
	}
	else if (option == 2)
	{
		cout<<"Enter Number: ";
		cin>>grade;
		cout<<"\nGet Letter Grade Switch: "<<get_letter_grade_using_switch(grade)<<"\n";

	}
	else{
		cout<<"Goodbye";
	}
	return 0;
}