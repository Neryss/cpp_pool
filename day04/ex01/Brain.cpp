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
		_ideas[i] = words[rand() % 6];
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
	std::cout << "Brain deleted!" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain copy done!" << std::endl;
	return (*this);
}

void	Brain::displayIdeas() const
{
	std::cout << "Here are all their ideas" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "[" << i + 1 << "]" << _ideas[i] << std::endl;
}

void	Brain::displayIdeas(int nb) const
{
	std::cout << "Here are all their ideas" << std::endl;
	for (int i = 0; i < nb; i++)
		std::cout << "[" << i + 1 << "]" << _ideas[i] << std::endl;
}

void	Brain::setIdea(int index, std::string newIdea)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Index must be [0 - 99]";
		return ;
	}
	_ideas[index] = newIdea;
}
