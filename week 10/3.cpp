#include <iostream>
#include <string>
using namespace std;

struct Book{

	int book_id;
	string title;
	string author_name;
	float price;
	
	Book(int book_id, string title, string author_name, float price){
		this->book_id = book_id;
		this->title = title;
		this->author_name = author_name;
		this->price = price;
	}
	void display(){
		cout 
		<< "Book Id: " << this->book_id 
		<< " Book Title: " << this->title 
		<< " Author Name: " <<  this->author_name 
		<< " Price: " << this->price 
		<< endl;
	};
	 
};

int main() {
	Book b1(1, "Harry Potter", "J.K Rowling", 1);
	b1.display();
    return 0;
}
