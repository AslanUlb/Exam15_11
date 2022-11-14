#pragma once
#include "..\\classes\tickets.h"
#include "..\\classes\flights.h"
#include "..\\classes\user.h"
#include "flights.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>
#include <set>
using namespace std;

struct passanger {
	string fio;
	string birthday;
};


struct ticket {
	passanger pass;
	string numFlight;
	string numberTicket;
};

class Ticket {
	Flight fly;
	multimap<string, ticket> _tickets;
	int number = 0;
public:
	Ticket();
	~Ticket();
	//void downloadFlight();
	void listUpFlight();
	void listDownFlight();
	void listUpDownFlighy();
	multimap<string, ticket> getTicketS();
	void InToTicket();
	void OutToTicket();
	void booking(multimap<string, flight> fud);
	void print();
};