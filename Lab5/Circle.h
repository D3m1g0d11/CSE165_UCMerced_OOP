#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
private:
    double x, y, r;
public:
    double area;

    Circle(){this->x = 0; this->y = 0; this->r = 1; this->area = 3.14159265358979;}
    Circle(double x, double y, double r){
        this->x = x;
        this->y = y;
        this->r = r;
    }
    double getX(){
        return this->x;
    }
    double getY(){
        return this->y;
    }
    double getR(){
        return this->r;
    }
    void setX(double x){
        this->x = x;
    }
    void setY(double y){
        this->y = y;
    }
    void setR(double r){
        this->r = r;
    }
};



#endif
