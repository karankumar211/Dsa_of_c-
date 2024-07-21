#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"parent constructor"<<endl;
    }
};
class child1: public parent{
    public:
    child1(){
        cout<<"child1 constructor"<<endl;
    }
};
class child2: public parent{
    public:
    child2(){
        cout<<"child2 constructor"<<endl;
    }
};
class grandchild: public child1,public child2{
    public:
    grandchild(){
        cout<<"grandchild constructor"<<endl;
    }
};
int main(){
grandchild child;
 return 0;
}