#include "Animal.h"

Animal::Animal(const int height, const double mass, const std::string& name)
	:height(height), mass(mass), speciesName(name)
{
}

void Animal::printAnimalAttributes()
{
	std::cout << std::setw(15) << height;
	std::cout << std::setw(15) << mass;
	std::cout << std::setw(15) << Animal::speciesName; //If you forget, type in class name to see the private variables
	std::cout << "\n";

}

Dog::Dog(const int height, const double mass, const std::string& name, const std::string& familiarName, FurinessLevel furriness, const int tailLength)
	:Animal(height,mass,name), familiarName(familiarName), furriness(furriness), tailLength(tailLength) //if Animal is not called, it will show //EO291: No default contructor exists for class "Animal"
{ 


}

void Dog::printDogAttributes()
{
	Animal::printAnimalAttributes();
	constexpr int Furry_Width = 5; //better to do it this way
	std::cout << std::setw(15) << familiarName;
	std::cout << std::setw(Furry_Width) << (int) furriness; // (int) is casting an enum into an integer, called a "type cast"
	std::cout << std::setw(5) << tailLength;
	//std::cout << std::setw(15) << mass; //this is allowed if you use a protected variable, see example in Animal.h
}
