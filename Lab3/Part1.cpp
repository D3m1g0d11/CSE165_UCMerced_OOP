#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    std::vector<std::string> v;
    std::string input;
    std::cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    while(input != "QUIT"){
        if(input.size() == 1){
            for(int i = 0; i < v.size(); i++){
                if(input[0] == v[i][0]){
                    std::cout << v[i] << '\n';
                }
            }
        }
        else{
            v.push_back(input);
        }
        std::cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::toupper);
    }

    return EXIT_SUCCESS;
}