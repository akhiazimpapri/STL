#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue <int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    queue<int> q2;
    q2.swap(q);//swap the element of two queue.

    cout<< "q size : " << q.size() <<"  "<<"q2 size : " << q2.size()<<endl;

    while(!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout<<endl;

}