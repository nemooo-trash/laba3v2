#include <iostream>
#include "Pair.h"
#include "Long.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");

    Pair a;
    Pair b;
    Pair c;

    cin >> a;
    cin >> b;
    c = a + b;
    cout << c;

    Long a_low; //(a,b)
    Long b_low; //(c,d)
    Long rezult_summ;
    Long rezult_pr;
    Long rezult_raz;

    cin >> a_low;
    cin >> b_low;

    rezult_summ = a_low + b_low;
    cout << "\nРезультат сложения = " << rezult_summ;

    rezult_raz = a_low - b_low;
    cout << "Результат разницы = " << rezult_raz;

    rezult_pr = a_low * b_low;
    cout << "Результат умножения = " << rezult_pr;
    return 0;
}