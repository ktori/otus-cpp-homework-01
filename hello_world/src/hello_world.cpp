//
// Created by victoria on 27.03.20.
//

#include <version.h>

#include <iostream>

int main()
{
	std::cout << "Hello " << version_major() << "." << version_minor() << "." << version_patch() << " world\n";
	std::cout << "Build: " << build_number() << "\n";

	return 0;
}