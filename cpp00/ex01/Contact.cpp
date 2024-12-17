#include "Contact.hpp"

//Setters
void	Contact::set_first_name(const std::string &value)
{
		first_name = value;
}

void	Contact::set_last_name(const std::string &value)
{
		last_name = value;
}

void	Contact::set_nick_name(const std::string &value)
{
		nick_name = value;
}

void	Contact::set_phone_number(const std::string &value)
{
		phone_number = value;
}

void	Contact::set_darkest_secret(const std::string &value)
{
		darkest_secret = value;
}

//Getters
std::string	Contact::get_first_name() const
{
	return this->first_name;
}

std::string get_last_name() const
{
	return this->last_name;
}

std::string get_nick_name() const
{
	return this->nick_name;
}

std::string get_phone_number() const
{
	return this->phone_number;
}

std::string get_darkest_secret() const
{
	return this->darkest_secret;
}
