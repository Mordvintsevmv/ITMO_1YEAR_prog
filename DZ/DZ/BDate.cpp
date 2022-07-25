#include "BDate.hpp"
#include <ctime>

BDate::BDate()
{
}
BDate::BDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}


int BDate::getAge() {
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    BDate *currentDate = new BDate(timeinfo->tm_mday, timeinfo->tm_mon + 1, timeinfo->tm_year+1900);
    int Age;
    Age = currentDate->year - this->year;
    if (currentDate->month - this->month < 0) {
        Age--;
    }
    if ((currentDate->month - this->month <= 0) && (currentDate->day - this->day < 0)) {
        Age--;
    }
    return Age;
}

