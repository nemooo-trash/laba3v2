#ifndef LONG_H
#define LONG_H
#include "Pair.h"

class Long :
    public Pair
{
public:
    Long();
    ~Long();
    Long(int, int);
    Long(const Long&);
    int get_rub() { return high; };
    int get_kop() { return low; };
    void set_rub(int);
    void set_kop(int);
    Long& operator =(const Long&);
    Long& operator +(const Long&);
    Long& operator *(const Long&);
    Long operator -(const Long&);
    Long operator /(const Long&);
    friend std::istream& operator>>(std::istream& in, Long& l);
    friend std::ostream& operator<<(std::ostream& out, Long& l);
    int high;
    int low;
};

#endif