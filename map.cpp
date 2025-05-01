#include<iostream>
#include<map>
using namespace std;

int main() {
    map <string,int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera",25}); 

    m.erase("tv"); //erase tv

    for(auto p : m) {
        cout << p.first <<" : " <<p.second<<endl;
    }

    cout<<"Count : "<<m.count("laptop")<<endl;//1
    cout<<"Total Laptop = "<<m["laptop"]<<endl;//100
}