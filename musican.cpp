#include "musican.h"

void Space_delete(string& name) {
	int i = 0;
	while (name[i] == ' ')
		name.erase(i, 1);

	for (i; i < name.size(); i++)
	{
		if (i + 1 == name.size())
		{
			if (name[i] == ' ')
				name.erase(i, 1);
			break;
		}
		if (name[i] == ' ' && name[i + 1] == ' ')
		{
			name.erase(i, 1);
			i--;
		}
	}
}

void musican::setmusican(std::string a)
{
	musican1= a;
}

void musican::setinstrument(std::string a) {
	instr = a;
}

std::string musican::getmusican()const
{
	return std::string(musican1);
}

std::string musican::getinstr()const
{
	return std::string(instr);
}

musican::musican(std::string a, std::string b, std::string c) : 
	group(a) {
	setmusican(b);
	setinstrument(c);
}

std::ostream& operator<<(std::ostream& s, const musican& p)
{
	string p1, p2;
	p1 = p.musican1;
	p2 = p.instr;
	Space_delete(p1);
	Space_delete(p2);
	s << "name  " << p1 << "  инструмент  " << p2<< " " << p.getgroup();
	return s;
}
