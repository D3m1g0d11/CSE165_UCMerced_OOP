#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int n, sum = 0;
    std::cin >> n;
    std::vector<int> v;
    while(n != 0){
        if(n > 0){
            v.push_back(n);
        }
        else{
            for(int i = 0; i < v.size(); i++){
                if(abs(n) == v[i]){
                    v.erase(v.begin() + i);
                }
            }
        }
        std::cin >> n;
    }
    for(const auto &i: v){
        std::cout << i;
        sum += i;
    }
    std::cout << "\nSUM OF ENTRIES IS: " << sum << '\n';

    return EXIT_SUCCESS;
}