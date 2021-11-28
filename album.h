#pragma once
#include "group.h"
class album :
    public group
{
public:
    void setalbum(std::string a);
    void setdate(int);
    int getdate()const;
    std::string getalbum()const;
    album(std::string =" ", std::string =" ", int = 0);
    friend std::ostream& operator << (std::ostream& s, const album& p);
private:
    std::string album1;
    int year;
};

