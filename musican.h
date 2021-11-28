#pragma once
#include "group.h"
#include <iostream>
class musican :
    public group
{
public:
    void setmusican(std::string);
    void setinstrument(std::string);
    std::string getmusican() const;
    musican(std::string =" ", std::string = " ",std::string =" ");
    friend std::ostream& operator << (std::ostream& s, const musican& p);
    std::string getinstr() const;
private:
    std::string musican1;
    std::string instr;
};

