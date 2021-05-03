#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

void printFrequencies(const std::string &str)
{
	std::unordered_map<std::string, int> hashmap;
	std::string word;
	int i = 0;
	for(i; i < str.size(); i++){
		if(str[i] == ' '){
			auto got = hashmap.find(word);
			if(got != hashmap.end()){ //If found...
				got->second++;
			}
			else{
				hashmap.insert({word, 1});
			}
			word = "";
		}
		else{
			word += str[i];
		}
	}
	for(const auto&x : hashmap){
		std::cout << '(' << x.first << ", " << x.second << "), ";
	}
}

int main(int argc, char** argv)
{
	std::ifstream ifs("file.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));
	printFrequencies(content);
	return 0;
}