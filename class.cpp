#include<iostream>
using namespace std;

// class node{ it's a used defined data type
// public:

//     string name;
//     string color;

// }; 
class Parent {

    /*Public can be accessed from anywhere in the the main function*/
    /*protected it can be accessed in own class parent class and derived class( child class)*/
    /*private can be accessed on in its mode*/
  /*  public :
    int x;
    protected:
    int y;
    private:
    int z;
*/

    /*   public:
    int l;
    int b;

    Rectangle(){//default constructor;
        l=0;
        b=0;
    }
    Rectangle(int x,int y){//parameterized constructor;
        l=x;
        b=y;
    }
    ~Rectangle(){
        cout<<"destructor was called"<<endl;
    }//destructor   */

  /*  int x;
    public:
    void set(int n){
        x=n;
    }
    int get (){
        return x;
    } */

    public:
    Parent(){
    cout<<"Parent class"<<endl;
    }

};

/*class Child1 : public Parent{ //inherit public 
    //x will remain public 
    // y will be remain protected 
    // z will not be accessed 
};

class child2 : private Parent{
     //x will private
    // y will be private
    // z will not be inaccessible
};
class child2 : protected Parent{
    //x will protected
    // y will be protected 
    // z will not be inaccessible
};*/

class child: public Parent{
    public:
    child(){
        cout<<"child class"<<endl;
    }
};
/*multi inheritance*/
class grandchild : public child{
    public:
    grandchild(){
    cout<<"grandchild class"<<endl;
    }
};
/*multiple inheritance ---- one child to many parents*/
/*hierarchial inheritance --- one parent to many childs */


int main(){

// node apple;
// apple.name = "Apple";
// cout<<apple.name;


// node *mango = new node();

// mango->name = "Mango";

// cout<<mango->name;

  /* Rectangle *r1= new Rectangle();//default constructor if new Rectangle is called it gives the value if not called it calls the address of the value
cout<<r1->l<<" "<<r1->b<<endl;
delete r1;// destructor was called

Rectangle r2(3,4);// parameterized constructor

cout<<r2.l<<" "<<r2.b<<endl;  */

/*  Rectangle  obj;
obj.set (3);
cout<<obj.get()<<endl;  giving value using constructor and function to enter value get function and to get the value get function
*/

/*inheritance is called a class includes properties of another class 
ex if we want to create the class for car and truck and scooter with the help of inheritance we can do it wit class vehicle*/

// child c;
grandchild gcp;


  return 0;
}