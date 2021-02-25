#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    vector<string> v;
    ifstream in("code.cpp");
    string line;
    while (getline(in, line)){
        v.push_back(line);
    }

    for (int i = 0; i < v.size(); i++)
        cout << i << ": " << v[i] << endl;
    
    std::cout << '\n';

    for (int i = v.size() - 1, j = 0; i >= 0, j < v.size(); i--, j++){
        cout << i << ": " << v[j] << endl;
    }

    std::cout << '\n' << '\n';

    std::string conc = "";
    for(int i = 0; i < v.size(); i++){
        conc += v[i] + '\n';
    }
    
    cout << conc;
}
