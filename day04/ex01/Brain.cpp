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
}

Brain::Brain(const Brain &other)
{

}

Brain::~Brain()
{

}

Brain	&Brain::operator=(const Brain &other)
{

}

void	Brain::displayIdeas()
{
	
}