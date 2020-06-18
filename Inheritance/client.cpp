#include"client.h"
client::client(const char* n = NULL, int a = 0, const char* ad = NULL, long int c = 0) {
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	age = a;
	address = new char[strlen(ad) + 1];
	strcpy(address, ad);
	contact = c;
}
void client::display() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Address: " << address << endl;
	cout << "Contact: " << contact << endl;
}