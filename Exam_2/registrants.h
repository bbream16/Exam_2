#ifndef _REGISTRANTS_H_
#define _REGISTRANTS_H_

#include "runner.h"
#include <string>
#include <vector>
using namespace std;

class Registrants{
private:
	string filename;
	

public:
	vector<Runner> entries;
	Registrants(string Filename);

};

#endif