#include <iostream>
#include <fstream>
#include <cmath>

int main(int argc, const char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments" << std::endl;
		return -1;
	}

	std::ifstream in;
	in.open(argv[1]);

	double x, y, z;
	double angle;

	if (in.is_open())
	{
		while (!in.eof())
		{
			in >> x;
			in >> y;
			in >> z;
			angle = 2 * sin(x) * sin(y) + cos(z);
			std::cout << angle << "\n";
		}
	}
	in.close();

	return 0;
}
