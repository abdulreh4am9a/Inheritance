#include"client.h"
class account : public client {
	char* type;
	char* title;
public:
	account(const char* n, int a, const char* ad, long int c, const char* t, const char* tl);
	void display();
};