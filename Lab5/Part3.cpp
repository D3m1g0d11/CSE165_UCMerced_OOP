#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Animal.h"
#include "display.h"
#include "Dog.h"

int main(){
    int N, a;
    char c;
    std::string s;
    std::cin >> N;
    std::vector<std::unique_ptr<Animal>> list;
    for(int i = 0; i < N; i++){
        std::cin >> c >> s >> a;
        if(c == 'A'){
            std::unique_ptr<Animal> an(new Animal());
            an->setName(s);
            an->setAge(a);
            list.emplace_back(std::move(an));
        }
        else{
            std::unique_ptr<Dog> d(new Dog(s, a));
            d->setName(s);
            d->setAge(a);
            list.emplace_back(std::move(d));
        }
    }
    display(list);
    return EXIT_SUCCESS;
}