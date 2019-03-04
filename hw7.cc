#include <iostream>
#include <vector>
#include <cmath>
#include <cstdarg>
#include "hw7.h"

double variadicStddev( int size, ...)
{
	double sum = 0;

	std::vector<int> v;
	va_list args;
	va_start(args,size);
	for(size_t i = 0; i < size; i++)
	{
		int element = va_arg(args,int);
		v.push_back(element);
		sum += element;
	}

	va_end(args);

	double mean = sum / size;
	double stddev = 0;

	for(size_t i = 0; i < size; i++)
	{
		stddev = stddev + (v[i] - mean) * (v[i] - mean);
	}

	return sqrt(stddev /= size);

}
