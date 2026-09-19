#include<iostream>
#include"Book.h"
#include<string.h>
using namespace std;

int main() {
	Book book1;
	book1.showbook();
	double fine = book1.getprice();
	cout << "·£¿îÎª: " << fine << "Ôª" << endl;

	return 0;
}