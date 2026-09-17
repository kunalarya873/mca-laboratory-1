#include<iostream>
using namespace std;

class Count{
    static int created;
    static int destroyed;

    public:
    Count(){
        created +=1;
        cout << "Created " << created << endl;
    }
    void displayCreated(){
        cout << "Created number is " << created << endl;
    }
    void displayDestroyed(){
        cout << "Destroyed number is " << destroyed << endl;
    }
    ~Count(){
        destroyed ++;
    } 
};
int Count::destroyed =0;
int Count::created =0;

int main(){
    Count c1;
    Count c2;
    c1.displayCreated();
    c1.displayDestroyed();
    c2.displayDestroyed();
    return 0;
}