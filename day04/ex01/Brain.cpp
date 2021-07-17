#include "Brain.hpp"

Brain::Brain()
{
	std::string words[] {"thinking",
					"drinking",
					"eating",
					"playing", 
					"peeing on the sofa",
					"making some noise"};
	for (int i = 0; i < 100; i++)
		_ideas[i] = words[rand() % 100 + 1];
	std::cout << "Brain created!" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	std::cout << "Brain created from another one!" << std::endl;
}

Brain::~Brain()
{

}

Brain	&Brain::operator=(const Brain &other)
{

}

void	Brain::displayIdeas()
{
	std::cout << "Here are all their ideas" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << _ideas[i] << std::endl;
}