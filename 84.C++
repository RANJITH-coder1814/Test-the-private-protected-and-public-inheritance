#include <iostream>
using namespace std;
class parent{
    private: int a;
    protected: int b;
    public: int c;
    void funparent(){
        a=7;
        b=9;
        c=6;
    }
};
class child : private parent{
    void funchild(){
         //a=7;
         b=8;
         c=5;
    }
};
class grandchild : private child{
    void fungrandchild(){
        //a=9;
        //b=56;
        //c=765;
    }
};
int main(){
    child c;
    //c.a=2;
    //c.b=4;
    //c.c=8;
}
