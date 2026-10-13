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

/*
#include<iostream>
#include<string>
using namespace std;

class Students{
	public:
		int roll;
		string name;
		static int count;
		
		Students(int roll, string name){
			this->roll = roll;
			this->name = name;
			count++;
		}
		void getDetails(){
			cout << this->roll << " " << this->name << endl;
		}
		static void getCount(){
			cout << "Count is " << count << endl;
		}
		~Students(){
			count--;
		}
};
int main(){
	Students s1(101, "Kunal");
	s1.getCount();
	Students s2(102, "Arya");
	s1.getCount();
	s1.getCount();
	return 0;
	
}*/
