#include "Character.hpp"

t_list *ft_lstnew(AMateria *content)
{
	t_list *lst;

	lst = new t_list;
	lst->materia = content;
	lst->next = 0;
	return (lst);
}

void ft_lstadd_back(t_list **alst, t_list *new_el)
{
	t_list *last;

	if (!*alst)
		*alst = new_el;
	else
	{
		last = *alst;
		while (last->next)
			last = last->next;
		last->next = new_el;
	}
}

void ft_lstclear(t_list **lst)
{
	t_list *tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			if ((*lst)->materia)
			{
				delete (*lst)->materia;
				(*lst)->materia = 0;
			}
			delete (*lst);
			*lst = tmp;
		}
	}
}

Character::Character(const std::string name)
:_name(name), _miam(0)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

Character::Character(const Character &other)
:_name(other._name), _miam(0)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = other._materia[i]->clone();
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			_materia[i] = other._materia[i]->clone();
			ft_lstadd_back(&_miam, ft_lstnew(_materia[i]));
		}
	}
	return (*this);
}

Character::~Character()
{
	ft_lstclear(&_miam);
}

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i] && m)
		{
			_materia[i] = m;
			break ;
		}
	}
	ft_lstadd_back(&_miam, ft_lstnew(m));
}

void	Character::unequip(int idx)
{
	if (idx >= 0 || idx <= 3)
		_materia[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_materia[idx])
		_materia[idx]->use(target);
}
