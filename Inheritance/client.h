#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class client {
	char* name;
	int age;
	char* address;
	long int contact;
public:
	client(const char*, int a, const char* ad, long int c);
	void display();
};