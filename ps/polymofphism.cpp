#include<bits/stdc++.h>
using namespace std;
//  polymorphism meaning "many forms"

class Animal{

    public:
        void animalSound(){
            cout << "the animal makes sound \n";
        }
};

class Dog: public Animal{
    public:
        void animalSound(){
            cout << "the dog say: Bow Bow \n";
        }
};

class bird: public  Animal{
    public:
        void animalSound(){
            cout << "This bird say: tweet tweet \n";
        }
};

class base {
    public:
       virtual void callSystem(){
            cout << "call from base class \n";
        }
    
       virtual void secondSystem(){
            cout << "call from second system \n";
        }
};

class chield: public base{
    public:
        void callSystem(){
            cout << "call from chield class \n";
        }
};

class achield: public base{
    public:
        void secondSystem()
        {
            cout << "call from second chield \n";
        }
};

int main (){

    base *b;
    chield c;

    b = &c;
    // b->callSystem();

    achield ac;
    b = &ac;
    b->secondSystem();

    return 0;
}