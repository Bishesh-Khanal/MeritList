#include <string>

using std::string;

class Candidate{
	private:
		int Reg_no;
		float Grade;
	public:
		string Name;
		int Merit;

		void set_registration();
		int get_registration();
		void set_grade();
		float get_grade();
		virtual string Eligibility();
};
