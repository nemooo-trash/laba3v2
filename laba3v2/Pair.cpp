#include "Pair.h"
Pair::Pair()
{
    int first = 0;
    int second = 0;
}
Pair::~Pair() {}
Pair::Pair(int f, int s)
{
    first = f;
    second = s;
}
Pair::Pair(const Pair& t)
{
    first = t.first;
    second = t.second;
}
void Pair::set_first(int f)
{
    first = f;
}
void Pair::set_second(int s)
{
    second = s;
}
Pair& Pair::operator =(const Pair& t)
{
    if (&t == this)
        return *this;
    first = t.first;
    second = t.second;
    return *this;
}
Pair Pair::operator +(const Pair& t)
{

    int temp1 = first;
    int temp2 = second;
    int  temp3 = t.first;
    int temp4 = t.second;
    Pair p;
    p.first = (temp1 + temp2);
    p.second = (temp3 + temp4);
    return p;
}
istream& operator >> (istream& in, Pair& t)
{
    cout << "Введите первое число: "; in >> t.first;
    cout << "Введите второе число: "; in >> t.second;
    return in;
}
ostream& operator << (ostream& out, Pair& t)
{
    out << "Первое число = " << t.first << endl;
    out << "Второе число = " << t.second << endl;
    out << endl;
    return out;
}