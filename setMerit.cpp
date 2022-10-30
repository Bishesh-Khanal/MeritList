#include "candidate.h"

void set_merit( Candidate cdt_list[], int size ){
	int merit = 1;

	for( int index = 0; index < size; index++ ){
		cdt_list[index].Merit = merit;

		if( index != size - 1 ){
			if( cdt_list[index].get_grade() != cdt_list[index + 1].get_grade() ){
				merit++;
			}
		}
	}
}