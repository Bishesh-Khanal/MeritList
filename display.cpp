#include <fstream>
#include "candidate.h"

using std::endl;
using std::ios;
using std::fstream;

void display_data( fstream& myFiles, Candidate cdt_list[], int size ){
	myFiles.open( "Merit_List.ods", ios::out );

	if( myFiles.is_open() ){
		myFiles << "Registration no.,Grade,Merit,Name,Eligibility" << endl;

		for( int index = 0; index < size; index++ ){
			myFiles << cdt_list[index].get_registration() << ",";
			myFiles << cdt_list[index].get_grade() << ",";
			myFiles << cdt_list[index].Merit << ",";
			myFiles << cdt_list[index].Name << ",";
			myFiles << cdt_list[index].Eligibility() << endl;
		}

		myFiles.close();
	}
}