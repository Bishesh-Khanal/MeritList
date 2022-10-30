#include <iostream>
#include "candidate.h"

using std::cout;
using std::cin;
using std::endl;

void set_data( Candidate cdt_list[], int size ){
	int index_main = 0;
	bool reg_repeat = false;
	int index_sub;

	cout << "\nValid Registration Number from 1 to 60 and valid grade from 0.0 t0 2200.0" << endl;

	while( index_main < size ){
		cout << "\nEnter registration number: ";
		cdt_list[index_main].set_registration();

		cout << "Enter name: ";
		cin >> cdt_list[index_main].Name;

		cout << "Enter grade: ";
		cdt_list[index_main].set_grade();

		if( cdt_list[index_main].get_registration() == 0 || cdt_list[index_main].get_grade() == -1.0 ){
			if( cdt_list[index_main].get_registration() == 0 ){
				cout << "\nInvalid registration number for " << cdt_list[index_main].Name << "." << endl;
			}

			if( cdt_list[index_main].get_grade() == -1.0 ){
				cout << "\nInvalid grade for " << cdt_list[index_main].Name << "." << endl;
			}

			cout << "Please enter again." <<  endl;
		} else{
			for( index_sub = 0; index_sub < index_main; index_sub++ ){
				if( cdt_list[index_main].get_registration() == cdt_list[index_sub].get_registration() ){
					reg_repeat = true;
					break;
				} else{
					reg_repeat = false;
				}
			}

			if( reg_repeat ){
				cout << "\nError! " << cdt_list[index_main].Name << " has the same registration number as  ";
				cout << cdt_list[index_sub].Name << ". Please enter again." << endl;
			} else{
				index_main++; 
			}
		}
	}
}