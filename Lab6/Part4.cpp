#include "RectStash.hpp"

int main(){
    RectStash rs = RectStash(sizeof(Rect));
    float x = 0, y = 0, w = 0, h = 0;
    int p1 = 0, p2 = 0;
    std::cin >> x >> y >> w >> h;
    while(true){
        if(x < 0 && y < 0 && w < 0 && h < 0){
            break;
        }
        std::shared_ptr<Rect> r(new Rect(x, y, w, h));
        rs.addArr(std::move(r));
        //rs.addVec(std::move(r));
        std::cin >> x >> y >> w >> h;
    }
    std::cin >> p1 >> p2;
    while(p1 != -99 && p2 != -99){
        rs.contains(p1, p2);
        std::cin >> p1 >> p2;
    }
}