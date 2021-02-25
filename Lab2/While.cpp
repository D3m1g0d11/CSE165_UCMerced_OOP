#include <iostream>

int main(){
    int num;
    std::string s1, s2;
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> num;
    while(true){
        if(num == 0){
            std::cout << "YOU ENTERED ZERO, ENDING PROGRAM" <<'\n';
            break;
        }
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
        std::cout << "ENTER ANOTHER NUMBER: " << '\n';
        std::cin >> num;
    }

    return EXIT_SUCCESS;
}