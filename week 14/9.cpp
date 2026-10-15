#include<iostream>
#include<string>
using namespace std;

class Exception{

    string msg;
public:
    Exception(string msg){
        this->msg = msg;
    }

    string getMessage(){

        return this->msg;
    }

};

int main(){
    try
    {
        cout << "Inside try block" << endl;
        /* code */
        throw Exception("Bhai galat ho gya hai....");
    }
    catch(Exception e)
    {
        cout << "Error: " << e.getMessage() << endl;
    }
    
    return 0;
}
