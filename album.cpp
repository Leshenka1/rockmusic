#include "album.h"
#include <iostream>


void album::setalbum(std::string a)
{
	album1 = a;
}

void album::setdate(int a)
{
	if (a < 0 || a > 2021) {
		throw std::exception("invalid year");
	}
	year = a;
}

int album::getdate()const
{
	return year;
}

std::string album::getalbum()const
{
	return std::string(album1);
}

album::album(std::string a,std::string b,int c):
	group(a) {
	setalbum(b);
	setdate(c);
}

std::ostream& operator<<(std::ostream& s, const album& p)
{
	s  << p.album1 << "year " << p.year << " " << p.getgroup();
	return s;
}
