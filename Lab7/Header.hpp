#ifndef HEADER_HPP
#define HEADER_HPP

#include "Rect.hpp"
#include <iostream>

class AppWindow{
public:
    AppRect r;
    AppWindow(){std::cout << "NEED PARAMS FOR APPWINDOW!\n";}
    AppWindow(int x, int y, int w, int h){ this->r = AppRect(x, y, w, h);}
    AppWindow(const AppRect &r){ this->r = r; }
    const AppRect& rect(){ return this->r; }
    virtual void resize(int w, int h) = 0;
};

//////////////////////////////////////////////////////////////////////////////

class RectWin : public AppWindow{
public:
    RectWin(){ std::cout << "NEED RECTWIN WITH PARAMS!\n"; }
    RectWin(int x, int y, int w, int h) : AppWindow(x, y, w, h){};
    RectWin(AppRect r) : AppWindow(r){};
    void resize(int w, int h){ std::cout << "area: " << w * h << '\n'; }
};

///////////////////////////////////////////////////////////////////////////////

class CircleWin : public AppWindow{
public:
    CircleWin(){ std::cout << "NEED CIRCLEWIN WITH PARAMS!\n"; }
    CircleWin(int x, int y, int w, int h) : AppWindow(x, y, w, h){};
    CircleWin(AppRect r) : AppWindow(r){};
    void resize(int w, int h){ std::cout << "radius: " << std::min(w, h) << '\n'; }
};


#endif
