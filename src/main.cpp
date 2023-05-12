#include <iostream>
#include "math_helpers.h"

int main(int argc,char* argv[])
{
	std::vector<double> mytemp;
	mytemp.push_back(5);
	mytemp.push_back(6);
	std::vector<double> newtemp = standardize(std::move(mytemp));
	
	std::vector<double>::iterator iter;
	for(iter = newtemp.begin(); iter < newtemp.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}
	
	return 0;
}
