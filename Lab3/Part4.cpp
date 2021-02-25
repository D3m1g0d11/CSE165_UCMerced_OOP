#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main(){

    //INITIALIZING DOUBLE VECTOR
    std::vector<std::unique_ptr<std::vector<std::string>>> v;
    for(int i = 0; i < 10; i++){
        std::unique_ptr<std::vector<std::string>> row(new std::vector<std::string>());
        v.emplace_back(std::move(row));
    }

    std::string input;
    std::cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    while(input != "QUIT"){
        std::vector<std::string>& ref = *v[input.size() - 1];
        ref.emplace_back(input);
        std::cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::toupper);
    }
    for(int i = 0; i < v.size(); i++){
        std::vector<std::string>& ref = *v[i];
        for(int j = 0; j < ref.size(); j++){
            std::cout << ref[j] << " ";
        }
        std::cout << '\n';
    }
    v.clear();

    return EXIT_SUCCESS;
}