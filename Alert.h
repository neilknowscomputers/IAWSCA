#ifndef ALERT_H
#define ALERT_H

//
//  File:         Alert.h
//
//  Author:       Brendan Nash & Neil Peterson
//
//  Description:  A class definition for Alert.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Alert {


public:
	Alert();
	~Alert();
	void roll();
	void task();
	
private:
	bool trigger;
	string message[];
};

#endif