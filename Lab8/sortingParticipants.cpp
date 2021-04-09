#include <iostream>
#include <string>
#include "Sortable.h"
#include "DataObjects.hpp"
#include "Participant.hpp"

using namespace std;


int main(int argc, const char * argv[])
{
    string name;
    int age;
    double score;

    int n;
    cin >> n;

    Data myData;

    for (int i = 0; i < n; i++) {
        cin >> name >> age >> score;
        myData.add(new Participant(name, age, score));
    }

    myData.print();

    myData.sortParticipant();

    myData.print();
    return 0;
}