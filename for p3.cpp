#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    
    //حل مشكله بfor
    
    for (int x= 0 ;x<=30 ;x=x+3){
        cout << x <<endl ;
    }
    
    // حل المساله ب while
    
    int x=0;
    while(x<=30){
           cout <<x<<endl;
             x=x+3;}
    
//حل المساله ب do-while
    
    int x=0;
    do{
        cout << x<< endl;
        x=x+3;
    }while(x<=30);


    return 0;
}
