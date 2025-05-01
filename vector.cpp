#include<iostream>
#include<vector>
using namespace std;

int main() {
    cout<<"Hello World"<<endl;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.insert(vec.begin()+2,100);

    vec.pop_back();

    for(int val : vec) {
        cout << val << " ";
    }
    cout<<endl;
    cout<<"The front value is " << vec.front()<<endl;
    cout<<"The back value is " << vec.back()<<endl;
    cout<<vec.size() << endl;
    cout<<vec.capacity()<<endl;

    vec.erase(vec.begin());//erase the first element.

     for(int val : vec) {
        cout << val << " ";
    }
     cout<<endl;
    cout<<*(vec.begin())<<" ";  
    cout<<*(vec.end());
    return 0;
}