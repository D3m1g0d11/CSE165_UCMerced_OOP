#include <iostream>

int main(){
    std::cout << "Enter an integer: " << std::endl;
    int num;
    std::string s1, s2;
    std::cin >> num;
    if(num % 2 == 0){
        s1 = "EVEN";
    }
    else{
        s1 = "ODD";
    }
    if(num >= 0){
        s2 = "POSITIVE";
    }
    else{
        s2 = "NEGATIVE";
    }
    std::cout << num << " IS " << s1 << " AND " << s2 << '\n';

    return EXIT_SUCCESS;
}