#ifndef PRACTICE_FIGHT_FIGHTER_H_
#define PRACTICE_FIGHT_FIGHTER_H_

class Fighter {
public:
	Fighter(std::string name);
	void takeDamage(int damage);
	void dealDamage(Fighter& enemy);
	bool isAlive();
	int health;
	std::string getName();
private:
	const std::string name;
	int rollDamage();
};

#endif /* PRACTICE_FIGHT_FIGHTER_H_ */
