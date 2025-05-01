#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(4);
    d.push_front(0);
    d.push_front(3);


    for(int val : d) {
        cout << val << " ";
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();

    for(int val : d) {
        cout << val << " ";
    }
    cout<<endl;
}