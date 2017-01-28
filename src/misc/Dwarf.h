#include <iostream>

#ifndef MISC_DWARF_H_
#define MISC_DWARF_H_

class Dwarf {
public:
	Dwarf();
	Dwarf(std::string name);
	Dwarf(std::string name, int age);
	std::string toString();
private:
	std::string name;
	int age;
};

#endif /* MISC_DWARF_H_ */
