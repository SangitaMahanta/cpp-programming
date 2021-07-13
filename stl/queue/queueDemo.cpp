#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("miki");
    q.push("sangita");
    q.push("mahanta");
    cout<<"size before pop  "<<q.size()<<endl;

    cout<<"First elements "<<q.front()<<endl;
    q.pop(); // fist input element remove first
    cout<<"After pop First elements "<<q.front()<<endl;
    cout<<"size After pop  "<<q.size()<<endl;

}