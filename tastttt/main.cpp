//
//  main.cpp
//  testCPP
//
//  Created by s20181106119 on 2019/6/13.
//  Copyright © 2019 s20181106119. All rights reserved.
//

#include <iostream>
using namespace std;

// insert code here...
class point {
public:
    int a,b;
    point (int x=0,int y=0):a(x),b(y){
        x=a;
        y=b;
    }
    void get(){
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
private:
    int x,y;
};

int main(int argc, const char * argv[]) {
    
    point p;
    p.get();
    p.display();
    return 0;
    
}
//std::cout << "Hello, World!\n";
//return 0;

