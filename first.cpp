#include <iostream>
#include <fstream>
#define _USE_MATH_DEFINES
#include <cmath>

int main(int argc, const char *argv[])
{
	if (argc != 3)
	{
		std::cout << "Wrong arguments" << std::endl;
		return -1;
	}

	char *end;
	int n = strtol(argv[1], &end, 10);

	std::ofstream out;
	out.open(argv[2]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			out << (double)rand() * (2 * M_PI) / RAND_MAX - M_PI << "\t";
		}
		out << "\n";
	}

	return 0;
}
