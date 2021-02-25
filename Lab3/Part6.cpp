#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    std::string input;
    std::vector<std::string> v;
    std::cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    while(input != "QUIT"){
        if(input.size() >= 4){
            v.emplace_back(input);
        }
        else{
            for(int i = 0; i < v.size(); i++){
                int check = 0;
                for(int j = 0; j < input.size(); j++){
                    if(v[i][j] == input[j]){
                        check++;
                    }
                }
                if(check == input.size()){
                    std::cout << v[i] << '\n';
                }
            }
        }
        std::cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::toupper);
    }

    return EXIT_SUCCESS;
}