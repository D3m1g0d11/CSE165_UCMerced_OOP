#include <iostream>


int main(){

    int num1, num2;
    std::cin >> num1 >> num2;

    int* pNum1 = &num1;
    int* pNum2 = &num2;

    std::cout << "NUM1 * NUM2 = " << *pNum1 * *pNum2 << '\n';
    std::cout << "NUM1 + NUM2 = " << *pNum1 + *pNum2 << '\n';
    std::cout << "NUM1 - NUM2 = " << *pNum1 - *pNum2 << '\n';
    std::cout << "NUM1 / NUM2 = " << *pNum1 / *pNum2 << '\n';

    return EXIT_SUCCESS;
}