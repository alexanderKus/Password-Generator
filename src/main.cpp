#include <iostream>
#include <string>
#include "../include/generator.h"

int main(int args, char *argv[])
{	
	Generator generator;

	if(args != 2)
	{
		generator.help();
		return 0;	
	}

	std::string mode = argv[1];
	
	if(mode == "-l" || mode == "--letters")
	{
		std::cout << generator.generat_only_letters() << std::endl;
		return 0;
	}
	else if(mode == "-n" || mode == "--numbers")
	{
		std::cout << generator.generat_only_numbers() << std::endl;
		return 0;
	}
	else if(mode == "-a" || mode == "--all")
	{
  		std::cout << generator.generat_all() << std::endl;
		return 0;
	}
	else if(mode == "-h" || mode == "--help")
	{
		generator.help();
		return 0;	
	}	
	else 
	{
  	 	generator.help();
		return 1;
	}
	
}

