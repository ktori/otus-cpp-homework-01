#include "version.h"
#include "config.h"

int version_major()
{
	return PROJECT_VERSION_MAJOR;
}

int version_minor()
{
	return PROJECT_VERSION_MINOR;
}

int version_patch()
{
	return PROJECT_VERSION_PATCH;
}
