
#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <locale>   
#include "EEPCreator.h"
using namespace std;



Printer::Printer(double t, double s, string n)
{
	Printer::travel = t;
	Printer::speed = s;
	Printer::name = n;
	WriteEEP();

}

void Printer::WriteEEP()
{
	ofstream EEP;
	EEP.open(name);


	// HEADER AND COMMON DATA
	EEP << ";*********  " << name << "  *********" << endl;
	EEP << ";-------------------------------------" << endl;

	EEP << ";------------ COMMON DATA ------------" << endl;
	EEP << "00:3FFFFFFF,C0000000,00000085,FFFFB15A" << endl;
	EEP << "04:3FFFFFFF,C0000000,00000007,00000000" << endl;
	EEP << "08:00000060,00000004,000003E8,00000028" << endl;
	EEP << "0C:000000FF,00000004,00002710,00000200" << endl;
	EEP << "10:0000003C,000000FF,00000006,00000000" << endl;
	EEP << "14:00000000,000000FF,00000000,0000002C" << endl;
	EEP << "18:00000000,000000E0,00002000,80000040" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;

	// CONVERT TO DECIMAL THE HEX
	int decHigh = travel*-133.33333333333;
	int decLow = travel*133.33333333333;
	int decSpeed = speed*112.5;


	//    hex << decHigh 
	//    hex << decLow
	//    hex << decSpeed


	// POINT DATA
	EEP << ";------------ POINT 00 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;



	EEP << ";------------ POINT 01 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 02 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 03 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 04 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;

	EEP << ";------------ POINT 05 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 06 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 07 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 08 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 09 DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 0A DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 0B DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	EEP << ";------------ POINT 0C DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;

	EEP << ";------------ POINT 0D DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;

	EEP << ";------------ POINT 0E DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decLow << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;

	EEP << ";------------ POINT 0F DATA ----------" << endl;
	EEP << "00:" << setfill('0') << setw(8) << hex << decHigh << ",000000FF,00000000,00000004" << endl;
	EEP << "04:" << setfill('0') << setw(8) << hex << decSpeed << ",00000200,0000003C,000000FF" << endl;
	EEP << "08:00000006,00000008,00000001,00000000" << endl;
	EEP << "0C:00000000,00000000,00000000,00000000" << endl;
	EEP << "10:00000000,00000000,00000000,00000000" << endl;
	EEP << "14:00000000,00000000,00000000,00000000" << endl;
	EEP << "18:00000000,00000000,00000000,00000000" << endl;
	EEP << "1C:00000000,00000000,00000000,00000001" << endl;


	// FOOTER


	EEP << "00:FFFFFFFF" << endl;



}
