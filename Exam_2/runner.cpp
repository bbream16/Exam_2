#include "runner.h"

Runner::Runner(string Firstname, string Lastname, int Pace){
	firstname = Firstname;
	lastname = Lastname;
	pace = Pace;
}

string Runner::get_firstname(){ return firstname; }
string Runner::get_lastname(){ return lastname; }
int Runner::get_pace(){return pace; }