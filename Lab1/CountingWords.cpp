#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(){
    std::string line;
    int count = 0;
    std::ifstream f("words.txt");
    while(std::getline(f, line)){
        std::stringstream s(line);
        while(std::getline(s, line, ' ')){
            count++;
        }
    }
    std::cout << "Number of words in txt file: " << count << '\n';

    return EXIT_SUCCESS;
}