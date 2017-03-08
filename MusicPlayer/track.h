#pragma once
#include <string>

using namespace std;

class Track
{
public:
	Track();

	string getName();

	string getLocation();

	void setName(string name);

	void setLocation(string location);

private:
	string name = "";

	string location = "";
};

