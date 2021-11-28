#pragma once
#include <string>

using namespace std;

class group
{
private:
	string group1;
public:

	void setgroup(std::string);
	string getgroup() const;
	group(string =" ");
	friend std::ostream& operator << (std::ostream& s, const group& p);
};

