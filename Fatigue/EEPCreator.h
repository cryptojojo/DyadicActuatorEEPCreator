#ifndef EEP_H
#define EEP_H



#include <fstream>
#include <iostream>
#include <string>
using namespace std;



class Printer
{
	double travel;
	double speed;
	string name;

public:
	Printer(double, double, string);
	void WriteEEP();

};

#endif