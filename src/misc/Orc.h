#ifndef ORC_H_
#define ORC_H_

#include <iostream>
using namespace std;

class Orc {
public:
	Orc(int hp);
	~Orc();
	void speak();
	void fullHeal();
	void setName(string name);
	string getName();
private:
	int hp;
	string name;
	string toString();
};

#endif /* ORC_H_ */
