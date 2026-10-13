#include<iostream>
#include<string>
using namespace std;
class Writer{
	
	public:
		string name;
		string add;
	
	Writer(string n, string ad){
		this->name = n;
		this->add = ad;
	}
};

class Book{
	public:
		string title;
		Writer writer;
		
	Book(string title, Writer w) : title(title), writer(w) {
}

};
class Sales{
	public:
		Book book;
		static int count;
		int timestamp;
		
		Sales(Book b, int t) : book(b), timestamp(t) {
    count++;
}

		static void GetCount(){
			cout << count << endl;
		}
};
int Sales::count = 0;


int main(){
	Writer w1("Kunal", "Aligarh");
	Book b1("CPP", w1);
	Sales s1(b1, 1);
	Sales s2(b1, 2);
	Sales s3(b1, 3);
	
	Sales::GetCount();
	return 0;
	
}
