#include "Animal.h"
#include "Dog.h"
#include <memory>
void display (const vector<std::unique_ptr<Animal>> &list){
    for (int i = 0; i <(int) list.size(); i++) {
        cout << list[i]->getName() << endl;
    }
}
