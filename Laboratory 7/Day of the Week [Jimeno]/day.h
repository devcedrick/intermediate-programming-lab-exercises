#ifndef DAY_H_INCLUDED
#define DAY_H_INCLUDED

using namespace std;

class dayType
{
public:
    dayType();
    void setDay(string);
    string getDay();
    string getNextDay();
    string getPrevDay();
    void printDay();
    string calcAddDay(int);

    ~dayType();

private:
    string day;
};

#endif // DAY_H_INCLUDED
