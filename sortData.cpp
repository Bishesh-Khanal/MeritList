#include "candidate.h"

bool sort_reg( int data1, int data2 ){
	return data1 < data2;
}

bool sort_grade( int data1, int data2 ){
	return data1 > data2;
}

void sort_data( Candidate cdt_list[], int size, bool( *funcPtr )( int, int ), int iteration ){
	int index_main, index_sub, data1, data2;
	
	Candidate temporary;

	for( index_main = 0; index_main < size - 1; index_main++ ){
		for( index_sub = 0; index_sub < size - index_main - 1; index_sub++ ){
			switch( iteration ){
				case 1:
					data1 = cdt_list[index_sub + 1].get_grade();
					data2 = cdt_list[index_sub].get_grade();
				break;
				default:
					data1 = cdt_list[index_sub + 1].get_registration();
					data2 = cdt_list[index_sub].get_registration();
				break;
			}
			if( funcPtr( data1, data2 ) ){
				temporary = cdt_list[index_sub];
				cdt_list[index_sub] = cdt_list[index_sub + 1];
				cdt_list[index_sub + 1] = temporary;
			}
		}
	}
}