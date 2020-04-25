//
// Created by victoria on 27.03.20.
//

#include <iostream>

#include <version.h>

int main()
{
	std::cout << "Hello " << version_major() << "." << version_minor() << "." << version_patch() << " world\n";
	std::cout << "Build: " << build_number() << "\n";

	return 0;
}