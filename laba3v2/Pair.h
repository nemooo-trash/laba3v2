#ifndef PAIR_H
#define PAIR_H
#include <iostream>

using namespace std;

class Pair
{
public:
    Pair();
    virtual ~Pair();
    Pair(int, int);
    Pair(const Pair&);
    int get_first() { return first; };
    int get_second() { return second; };
    void set_first(int);
    void set_second(int);
    Pair& operator =(const Pair&);
    Pair operator +(const Pair&);
    friend istream& operator>>(istream& in, Pair& t);
    friend ostream& operator<<(ostream& out, Pair& t);
    int first, second;
};

#endif