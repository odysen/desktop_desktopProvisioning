#include <iostream>
#include <cstdio>
#include <string>
#include "utils.h"
#include "lib/common/base.h"

int utils::arrsize(std::string* arr)
{
	int i = 0;
	while(!arr[i].empty())
		i++;

	return (i - 1);
}