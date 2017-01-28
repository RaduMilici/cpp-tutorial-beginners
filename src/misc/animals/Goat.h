#ifndef MISC_ANIMALS_GOAT_H_
#define MISC_ANIMALS_GOAT_H_

namespace animals {

const std::string GOAT_SOUND = "baaah used and abused :D";

class Goat {
public:
	Goat();
	virtual ~Goat();
	void speak();
};

} /* namespace animals */

#endif /* MISC_ANIMALS_GOAT_H_ */
