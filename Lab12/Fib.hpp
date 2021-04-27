#ifndef FIB_HPP
#define FIB_HPP

class Fib{
public:
    static int secondLast, last;
    Fib(){}
    int next(){
        int nxt = secondLast + last;
        secondLast = last;
        last = nxt;
        return last;
    }
    int next(bool val){
        if(val){
            secondLast = 0;
            last = 1;
        }
        return this->next(); //refers to first next function
    }
};

#endif