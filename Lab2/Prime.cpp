#include <iostream>
#include <vector>

void findPrimeLessThan(int num){
    std::vector<int> primes;
    for(int i = 0; i <= num; i++){
        primes.push_back(true);
    }

    for(int i = 2; i * i <= num; i++){
        if(primes[i]){
            for(int j = i * i; j <= num; j += i){
                primes[j] = false;
            }
        }
    }
    for(int i = 2; i < num; i++){
        if(primes[i]){
            std::cout << i << '\n';
        }
    }
}

int main(){
    int num;
    std::cout << "ENTER A NUMBER AND WE WILL RETURN EVERY PRIME LESS THAN IT: " << '\n';
    std::cin >> num;
    findPrimeLessThan(num);

    return EXIT_SUCCESS;
}