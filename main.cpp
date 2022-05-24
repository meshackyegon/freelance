#include <iostream>

using namespace std;
#define SIZE 50
class Stack{
int stackArray[SIZE];
int tos;
public:
    Stack(){
    tos=0;
    }
    void push(int);
    int pop();
    void set(int);
};
void Stack::push(int value){
if(tos<SIZE){
    stackArray[tos++]=value;
}else
cout<<"Stack overflow"<<endl;
}
void Stack::set(int a){
tos=a;
}
int Stack::pop(){
if (tos==0){
    cout<<"Stack underflow"<<endl;
}else {
return stackArray[--tos];
}
}
int main()
{
    Stack s;
    for(int i=0;i<50;i++){
        s.push(i);
    }
    for(int i=0;i<51;i++){
    cout << s.pop()<<" " <<i<< endl;
    }
}
