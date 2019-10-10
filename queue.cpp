#include<iostream>
using namespace std;
class Queue{
    int Q[100];
    int front = -1;
    int size=100;
    int rear = -1;
public:
    void add(int value){
        if(front==size-1){
            cout<<"Overflow"<<endl;
        }
        else
            if(front==-1){
                front=0;
            }
            rear++;
            Q[rear]=value;
    }
    void dequeue(){
        if(front==-1||front>rear){
            cout<<"Underflow"<<endl;
        }
        else
            front++;
    }
    void display(){
        if(front==-1){
            cout<<"Queue Empty"<<endl;
        }
        for(int i=front;i<=rear;i++){
            cout<<Q[i]<<"  "<<endl;
        }
    }
};
int main(){
    Queue q1;
    for(int i=0;i<=10;i++){
     q1.add(i);
    }
    q1.display();
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.display();
}
