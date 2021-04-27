#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
#include <math.h>

class Time{
    //Private member variables
    int hours, mins, secs;
    public:
        Time(){ std::cout << "NEED PARAMS!\n"; }

        Time(int hours, int mins, int secs){
            this->hours = hours;
            this->mins = mins;
            this->secs = secs;
        }

        void print(){ std::cout << this->hours << " hours, " << this->mins << " minutes, " << this->secs << " seconds\n";}

        const Time operator+(const Time& t) const {
            int tempHours = this->hours + t.hours;
            int tempMins = this->mins + t.mins;
            int tempSecs = this->secs + t.secs;
            if(tempSecs >= 60){
                tempMins += trunc(tempSecs / 60);
                tempSecs %= 60;
            }
            if(tempMins >= 60){
                tempHours += trunc(tempMins / 60);
                tempMins %= 60;
            }
            const Time newTime = Time(tempHours, tempMins, tempSecs);
            return newTime;
        }
};

#endif
