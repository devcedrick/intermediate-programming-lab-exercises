#include <iostream>
#include <string>
#include <cmath>
#include "day.h"

using namespace std;

int main()
{
    dayType d;

    d.setDay("Thursday");
    d.printDay();

    cout << "\nHow many days would you like to add/subtract from the current day? ";
    int addDay;
    cin >> addDay;

    if(addDay >= 0)
    {
        cout << addDay << " day(s) from now is " << d.calcAddDay(addDay) << "." << endl ;
    }
    else
    {
        cout << static_cast<int>(abs(addDay)) << " day(s) ago is " << d.calcAddDay(addDay) << "." << endl;
    }


}
