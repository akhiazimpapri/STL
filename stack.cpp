#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack<int> s2;

    s2.swap(s);//swap the element of two stack.

    cout<< "s size : " << s.size() <<"  "<<"s2 size : " << s2.size()<<endl;

    while(!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout<<endl;

}