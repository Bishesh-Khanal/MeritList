#include <iostream>
#include <string>
#include "candidate.h"

using std::cin;
using std::string;

void Candidate::set_registration(){
	int reg_no;
	cin >> reg_no;

	if( reg_no >= 1 && reg_no <= 60 ){
		Reg_no = reg_no;
	} else{
		Reg_no = 0;
	}
}

int Candidate::get_registration(){
	return Reg_no;
}

void Candidate::set_grade(){
	float grade;
	cin >> grade;

	if( grade >= 0.0 && grade <= 2200.0 ){
		Grade = grade;
	} else{
		Grade = -1.0;
	}
}

float Candidate::get_grade(){
	return Grade;
}

string Candidate::Eligibility(){
	if( Grade >= 0.0 && Grade <= 580.0 ){
		return "N/A";
	} else if( Grade > 580.0 && Grade <= 1000.0 ){
		return "Mechanical Engineering";
	} else if( Grade > 1000.0 && Grade <= 1500.0 ){
		return "Mechanical Engineering / Civil Engineering";
	} else if( Grade > 1500.0 && Grade <= 1700.0 ){
		return "Mechanical Engineering / Civil Engineering / Computer Science & Engineering";
	} else if( Grade > 1700.0 && Grade <= 2000.0 ){
		return "Mechanical Engineering / Civil Engineering / Computer Science & Engineering / Architecture";
	} else if( Grade > 2000.0 && Grade <= 2200.0 ){
		return "Mechanical Engineering / Civil Engineering / Computer Science & Engineering / Architecture / Artificial Intelligence";
	}
}
