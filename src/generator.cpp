#include "../include/generator.h"

Generator::Generator() {};

std::string Generator::generat_only_letters()
{
	srand(time(NULL));
	for(int i = 0; i < size; i++)
		passwd += letters[rand() % letters.length()];
	return passwd;	
}

std::string Generator::generat_only_numbers()
{
	srand(time(NULL));
	for(int i = 0; i < size; i++)
		passwd += numbers[rand() % numbers.length()];
	return passwd;	
}

std::string Generator::generat_all()
{
	srand(time(NULL));
	for(int i = 0; i < size; i++)
		passwd += all[rand() % all.length()];
	return passwd;	
}

void Generator::help()
{
std::cout << "Password Generator\n";
std::cout << "<file name> mode\n";
std::cout << "\t-h --help  	 help\n";
std::cout << "\t-a --all	 all\n";
std::cout << "\t-l --leters  only letters\n";
std::cout << "\t-n --numbers only numbers\n";
}


