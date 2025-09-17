#pragma once
#include <iomanip>
#include <iostream>
#include <string>
class Animal {
private:
	int height;
	double mass;
	std::string speciesName;

	/* (Commented out) //example
protected:
	double mass;
*/

public:
	Animal(const int height, const double mass, const std::string& name);

	void printAnimalAttributes();
};

enum class FurinessLevel {
	NotFurry = 0,
	MildlyFurry = 1,
	ModeratelyFurry = 2,
	VeryFurry = 3

};

class Dog : public Animal 
{ //class dog inherits Animal class
private:
	FurinessLevel furriness;
	int tailLength{};
	std::string familiarName;

public:
	Dog(const int height, const double mass, const std::string& name,
		const std::string& familiarName, FurinessLevel furriness, const int tailLength);

	void printDogAttributes();
};
