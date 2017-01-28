#include <iostream>

#ifndef MISC_PERSON_H_
#define MISC_PERSON_H_

class Person {
public:
	Person();
	Person(std::string name, int age);
	std::string toString();
private:
	std::string name;
	int age;
};

#endif /* MISC_PERSON_H_ */
