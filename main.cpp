#include <fstream>
#include "candidate.h"
#include "library.h"

using std::fstream;

int main(){
	fstream myFiles;
	bool( *funcPtr )( int, int );
	
	int size;
	size = set_size();

	Candidate* cdt_list = new Candidate[size];

	set_data( cdt_list, size );

	funcPtr = sort_grade;

	sort_data( cdt_list, size, funcPtr, 1 );

	set_merit( cdt_list, size );

	funcPtr = sort_reg;

	sort_data( cdt_list, size, funcPtr, 2 );

	display_data( myFiles, cdt_list, size );

	delete[]cdt_list;
	cdt_list = NULL;

	return 0;
}
