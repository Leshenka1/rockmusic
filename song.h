#pragma once
#include "group.h"
#include <string>
class song :
    public group
{
public:
    void  setsong(std:: string);
    void settime(double a);
    std::string getsong() const;
    double gettime() const;
    song(std::string = " ", std::string =" ",double = 0);
    friend std::ostream& operator << (std::ostream& s, const song& p);
private:
    std::string song1;
    double time;
};

