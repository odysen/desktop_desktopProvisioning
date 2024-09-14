#include <iostream>
#include <cstdio>
#include <string>
#include <unistd.h>
#include "utils.h"
#include "lib/common/base.h"

int utils::arrsize(std::string* arr)
{
	int i = 0;
	while(!arr[i].empty())
		i++;

	return (i - 1);
}

std::string utils::nullop(std::string nul)
{
	std::string tonull = nul + nulloutp;

	return tonull;
}