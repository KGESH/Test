#include "test.h"



Test::Test(){
    Test::setDate();
    Test::setTime();
}

void Test::setDate(){
    date = QDate::currentDate().toString("yyyy-MM-dd");
}


QString Test::getDate(){
    return date;
}


void Test::setTime(){
    time = QTime::currentTime().toString("hh:mm:ss");
}


QString Test::getTime(){
    return time;
}

