#include <fstream>

using std::fstream;

int set_size();
void set_data( Candidate[], int );
bool sort_reg( int, int );
bool sort_grade( int, int );
void sort_data( Candidate[], int, bool(*)( int, int ), int iteration );
void set_merit( Candidate[], int );
void display_data( fstream&, Candidate[], int );
