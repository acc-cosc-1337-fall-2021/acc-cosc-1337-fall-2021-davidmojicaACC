#include "func.h"
#include <string>
//write using statements
using std::cout;using std::cin;using std::string;using namespace std;


int main() 
{
	int choice;
	string dna;
	char varification;
	bool vars = true;
	do{
		
		cout<<"1- Get GC Content\n";
		cout<<"2- Get DNA Complement\n";
		cout<<"3-Exit\n";
		cin>>choice;
		if(choice == 1)
		{
			cout<<"Enter DNA Sequence: ";
			cin>>dna;
			cout<<"\nGC Content: "<< get_gc_content(dna)<<"\n";
		}
		if(choice == 2)
		{
			cout<<"Enter DNA Sequence: ";
			cin>>dna;
			cout<<"\nDNA Complement: "<< get_dna_complement(dna)<<"\n";
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

	}while(vars);
	return 0;
}