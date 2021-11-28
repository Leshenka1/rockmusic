#include "song.h"
#include <iostream>

void song::setsong(std::string a)
{
	song1 = a;
}
void song::settime(double a)
{
	time = a;
}
std::string song::getsong() const
{
	return std::string(song1);
}
double song::gettime() const
{
	return time;
}
song::song(string xgroupname, string xsongname, double c) :
	group(xgroupname) {
	setsong(xsongname);
	time = c;
}

std::ostream& operator<<(std::ostream& s, const song& p)
{
	string p1, p2;
		s << p.song1 << " time of action " << p.time << " " << p.getgroup();
	return s;
}
