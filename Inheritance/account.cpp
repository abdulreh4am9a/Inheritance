#include"account.h"
account::account(const char* n = NULL, int a = 0, const char* ad = NULL, long int c = 0, const char* t = NULL, const char* tl = NULL) : client(n, a, ad, c) {
	type = new char[strlen(t) + 1];
	strcpy(type, t);
	title = new char[strlen(tl) + 1];
	strcpy(title, tl);
}
void account::display() {
	client::display();
	cout << "Type: " << type << endl;
	cout << "Title: " << title << endl;
}