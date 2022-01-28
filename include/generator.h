#include <string>
#include <iostream>
#include <cstdlib>


#ifndef GENERATOR_H
#define GENERATOR_H

class Generator
{
private:
	int size = 24;
	std::string passwd;
	std::string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string numbers = "12345678990";
	std::string all = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ12345678990!@#$%^&*()";

public:
	Generator();
	std::string generat_only_letters();
	std::string generat_only_numbers();
	std::string generat_all();
	void help();
};

#endif
