#include "Long.h"

Long::Long() :Pair()
{
    int high = 0;
    int low = 0;
}
Long::~Long() {}

Long::Long(int r, int k)
{
    high = r;
    low = k;
}

Long::Long(const Long& l)
{
    first = l.first;
    second = l.second;
    high = l.high;
    low = l.low;
}

void Long::set_rub(int r)
{
    high = r;
}
void Long::set_kop(int k)
{
    low = k;
}

Long& Long::operator =(const Long& l)
{
    if (&l == this)
        return *this;
    first = l.first;
    second = l.second;
    high = l.high;
    low = l.low;
    return *this;
}

Long Long::operator -(const Long& l)
{
    int a_high = l.high;
    int a_low = l.low;
    int  b_high = high;
    int b_low = low;
    Long p;
    p.high = (b_high - a_high);
    p.low = (b_low - a_low);
    return p;
}


Long Long::operator /(const Long& l)
{
    int temp1 = high;
    int temp2 = low;
    int  temp3 = l.high;
    int temp4 = l.low;
    Long p;
    p.high = (temp1 / temp2);
    p.low = (temp3 / temp4);
    return p;
}

Long& Long::operator +(const Long &a)
{
    int a_high = a.high;
    int a_low = a.low;
    int  b_high = high;
    int b_low = low;
    Long p;
    p.high = (a_high + b_high);
    p.low = (a_low + b_low);
    return p;
}

Long& Long::operator *(const Long& a)
{
    int a_high = a.high;
    int a_low = a.low;
    int  b_high = high;
    int b_low = low;
    Long p;
    p.high = (a_high * b_high);
    p.low = (a_low * b_low);
    return p;
}

istream& operator >> (istream& in, Long& l)
{
    cout << "¬ведите старшую часть числа: "; in >> l.high;
    cout << "¬ведите младшую часть числа: "; in >> l.low;
    return in;
}
ostream& operator << (ostream& out, Long& l)
{
    out << l.high << "."<<l.low << endl;
    out << endl;
    return out;
}