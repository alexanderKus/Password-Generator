#include <string>
#include <iostream>
#include <cstdlib>

#ifndef GENERATOR_H
#define GENERATOR_H

class Generator
{
private:
	// length of the password
	int size = 24;
	std::string passwd;
	std::string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string numbers = "12345678990";
	std::string all = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ12345678990!@#$%^&*()";

public:
	Generator();
	// Function create password based on letters
	std::string generat_only_letters();
	// Function create password based on numbers
	std::string generat_only_numbers();
	// Function create password based on letters, numbers and special characters
	std::string generat_all();
	// Funcion for displaying help
	void help();
};

#endif
