#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

int main(){
    int count = 0;
    std::string word = "", line, compare;
    std::ifstream f("words.txt");
    std::cout << "Enter a word and we will search a text file for that word: " << '\n';
    std::cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    while(std::getline(f, line)){
        std::stringstream s(line);
        while(std::getline(s, line, ' ')){
            compare = "";
            transform(line.begin(), line.end(), line.begin(), ::toupper);
            for(const auto &c : line){ //Ensures no other characters are a part of the concatenated word compare
                if(c >= 65 && c <= 90){
                    compare += c;
                }
            }
            if(word == compare){
                count++;
            }
        }
    }
    std::cout << "That word appears " << count << " times\n";

    return EXIT_SUCCESS;
}