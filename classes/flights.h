#pragma once
#include "..\\classes\cities.h"
#include "..\\classes\tickets.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>

using namespace std;



struct date {
	int day;
	int month;
	int year;
};

struct times {
	int hour;
	int min;
	int sec;
};

struct flight {
	string numFlight;
	string pointSrc;
	string pointDst;
	date dateFlight;
	times timeUp;
	times timeDown;
	string typeAirplane;
	double costTicket;
	int countSeats;
	//ticket personFly;
};

class Flight {
	city town;
	//Ticket listPerson;
	map<string, flight> allFlight;
	//multimap<string, ticket> person;
	
public:
	Flight();	
	~Flight();
	
	void addFlight();
	void editFlight();
	void delFlight();
	void OutToFile();
	void print();
	void InToFlight();
	void printTicketPerson();
	
	
	map<string, flight> get_flight();
};

