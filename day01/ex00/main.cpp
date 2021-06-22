#include "Pony.hpp"

int	main(void)
{
	ponyOnTheHeap(true, true, "Buttstalion");
	ponyOnTheHeap(false, false, "");
	ponyOnTheHeap(false, true, "John");
	ponyOnTheStack(true, true, "Buttstalion");
	ponyOnTheStack(false, false, "");
	ponyOnTheStack(false, true, "John");
	return (0);
}