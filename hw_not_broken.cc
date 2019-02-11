/** \file */
#include <iostream>
#include <cmath>

double deviation( int* a, int n )
{
	/**
	* \brief - Finds the standard deviation for an array of size n
	* \param - int* a The array of integers 
	* \param - int n the size of the array
	* \return - double sqrt(stddev) The calculated standard deviation
	*/

	double sum = 0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	}
	double mean = sum /= n;
	double stddev = 0;
	for(size_t i = 0; i < n; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean);
	}
	stddev /= n;
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}
