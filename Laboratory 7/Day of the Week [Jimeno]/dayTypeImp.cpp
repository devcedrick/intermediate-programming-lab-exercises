#include <string>
#include <iostream>

#include "day.h"

using namespace std;

dayType::dayType()
{
    day = "Sunday";
}

void dayType::setDay(string d)
{
    day = d;
}

string dayType::getDay()
{
    return day;
}

string dayType::getNextDay()
{
    if(day == "Sunday")
    {
        return "Monday";
    }
    else if(day == "Monday")
    {
        return "Tuesday";
    }
    else if(day == "Tuesday")
    {
        return "Wednesday";
    }
    else if(day == "Wednesday")
    {
        return "Thursday";
    }
    else if(day == "Thursday")
    {
        return "Friday";
    }
    else if(day == "Friday")
    {
        return "Saturday";
    }
    else if(day == "Saturday")
    {
        return "Sunday";
    }
}

string dayType::getPrevDay()
{
    if(day == "Sunday")
    {
        return "Saturday";
    }
    else if(day == "Monday")
    {
        return "Sunday";
    }
    else if(day == "Tuesday")
    {
        return "Monday";
    }
    else if(day == "Wednesday")
    {
        return "Tuesday";
    }
    else if(day == "Thursday")
    {
        return "Wednesday";
    }
    else if(day == "Friday")
    {
        return "Thursday";
    }
    else if(day == "Saturday")
    {
        return "Friday";
    }
}

void dayType::printDay()
{
    cout << "Today is " << day << ". " << endl;
}

string dayType::calcAddDay(int addDay)
{
    string result;
    if(addDay >= 0)
    {
        for(int i=0; i<addDay; i++)
        {
            result = getNextDay();
            day = getNextDay();
        }
    }
    else
    {
        for(int i=addDay; i<0; i++)
        {
            result = getPrevDay();
            day = getPrevDay();
        }
    }
    return result;

}

dayType::~dayType()
{

}
