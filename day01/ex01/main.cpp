#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int	n = 0;
	if (argc == 1 || argc >= 3)
		return (1);
	n = atoi(argv[1]);
	if (n < 0)
		return (1);
	Zombie	*horde = zombieHorde(n, "Bob");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}