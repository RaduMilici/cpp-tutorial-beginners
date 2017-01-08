#ifndef MISC_CAT_H_
#define MISC_CAT_H_

#include <iostream>

class Cat{
public:
	Cat();
	Cat(const Cat& other);
	~Cat();
	void setName(std::string name);
	void speak();
	void jump();
private:
	std::string name;
};

#endif /* MISC_CAT_H_ */
