#include "Pony.hpp"

int	main(void)
{
	ponyOnTheHeap(true, true, "Buttstalion");
	ponyOnTheStack(false, false, "Bobert");
	ponyOnTheStack(false, false, "");
	return (0);
}