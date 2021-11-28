#include "group.h"
#include <iostream>


void group::setgroup(std::string a)
{
	group1 = a;
}

string group::getgroup() const
{
	return string(group1);
}

group::group(std::string a)
{
	setgroup(a);
}

std::ostream& operator<<(std::ostream& s, const group& p)
{
	string p1 = p.group1;
	s << p1;
	return s;
}
