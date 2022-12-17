#include <unistd.h>
#include <string.h>

int rand()
{
	static int nm = -1;

	nm++;
	if (nm == 0)
		return 9;
	if (nm == 1)
		return 8;
	if (nm == 2)
		return 10;
	if (nm == 3)
		return 24;
	if (nm == 4)
		return 75;
	if (nm == 5)
		return 9;
	return nm * nm % 30000;
}
