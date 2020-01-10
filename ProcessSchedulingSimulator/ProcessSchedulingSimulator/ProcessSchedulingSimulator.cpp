////////////////////////////////////////////////////////////////////////////////////////
// ProcessSchedulingSimulator.cpp : Simulates the workings of an operating system.
//
// Christopher Griffin
// February 15, 2018
// Operating Systems - Dr. Harmon
//
/////////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Scheduler.h"
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	Scheduler schedule;
	ifstream inF;
	inF.open("testFile1.txt");
	schedule.SetData(inF);
	schedule.Schedule();
	inF.close();
    return 0;
}

