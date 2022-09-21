#include <iostream>
#include "arraystack.cpp"
#include "linkedliststack.cpp"

using namespace std;

int main(){
    cout<<"Array implementation of Stack\n";

    arraystack s(7);
    cout<<"Checking isEmpty\n";
    if(s.isEmpty()){
        cout<<"Stack is empty\n";
    }else{
        cout<<"Stack is not empty\n";
    }

    s.push(7);
    cout<<"Pushing 7 in stack\n";
    cout<<"Checking isEmpty\n";
    if(s.isEmpty()){
        cout<<"Stack is empty\n";
    }else{
        cout<<"Stack is not empty\n";
    }

    s.push(10);
    s.push(9);
    s.push(8);
    s.push(4);
    s.push(6);
    s.push(5);
    cout<<"Checking isFull\n";
    if(s.isFull()){
        cout<<"Stack is full\n";
    }else{
        cout<<"Stack is not full\n";
    }

    
    cout<<"Popping top data from the stack\n";
    cout<<s.pop()<<endl;
    cout<<"Checking isFull\n";
    if(s.isFull()){
        cout<<"Stack is full\n";
    }else{
        cout<<"Stack is not full\n";
    }

    cout<<"Checking data in the top\n";
    cout<<s.viewtop()<<"\n\n\n\n\n";


    cout<<"LinkedList implementation of Stack\n";
    LinkedListstack s1;
    cout<<"Checking isEmpty\n";
    if(s1.isEmpty()){
        cout<<"Stack is empty\n";
    }else{
        cout<<"Stack is not empty\n";
    }
    
    s1.push(11);
    cout<<"Pushing 11 to stack\n";
    cout<<"Checking isEmpty\n";
    if(s1.isEmpty()){
        cout<<"Stack is empty\n";
    }else{
        cout<<"Stack is not empty\n";
    }

    cout<<"Pushing data to the stack\n";
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(15);
    cout<<"Poping top data from the stack\n";
    cout<<s1.pop()<<endl<<endl<<endl;

    cout<<"Checking data in the top\n";
    cout<<s1.viewtop()<<endl;

    return 0;
}