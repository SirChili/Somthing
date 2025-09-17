//Main Function File

#include <iomanip>
#include <iostream>
#include "Animal.h"

int main() {

	Animal someAnimal(32, 51.2, "Zebra"); //32 lbs, 51.2 inches
	std::cout << std::setw(15) << "Height(inches)";
	std::cout << std::setw(15) << "Height(pounds)";
	std::cout << std::setw(15) << "Name";
	std::cout << "\n";
	someAnimal.printAnimalAttributes();

	//20.2 lbs, height 12, veryFurry, speciesName Schnoodle, tailLength 11 inches
	Dog myDog(20.2, 12, FurinessLevel::VeryFurry, "Stella", "Schnoodle", 11);
}