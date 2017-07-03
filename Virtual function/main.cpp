//  Copyright © 2017 Dixit sharma. All rights reserved.
// Virtual Function

#include <iostream>
using namespace std;

class base
{
    public :
    
     virtual void show()
    {
        cout<<"I am base class"<<endl;
    }
};
    
    class derived : public base
    {
        public :
        
        void show()
        {
            cout<<"I am derived class"<<endl;
        }
};

int main(int argc, const char * argv[]) {
    
    base *b1 = new derived;
    
    b1->show();
    
    return 0;
}
/*--------------OUTPUT with virtual keyword----------
 
 I am derived class
 Program ended with exit code: 0
------------------------------------------------------*/


/*-----------OUTPUT without virtual keyword----------
 
 I am base class
 Program ended with exit code: 0
 ---------------------------------------------------*/
