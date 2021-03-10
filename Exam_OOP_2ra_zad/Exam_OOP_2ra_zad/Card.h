#pragma once
using namespace std;
#include<iostream>
#include<string>
enum Type { Nothing, Hero, Magic ,Special};
class Cards
{
public:
	Cards();
	Cards(Type, string, unsigned int, unsigned int);
	void setName(string);
	void setNumber(unsigned int);
	void setImage(unsigned int);
	string getName()const;
	unsigned int getNumber()const;
	unsigned int getImage()const;
	virtual void print()const;
private:
	string name;
	unsigned int number_card;
	unsigned int number_image;
	Type type;

};

Cards::Cards()
{
	this->name = "";
	this->number_card = 0;
	this->number_image = 0;
	this->type = Type::Nothing;
}
Cards::Cards(Type type, string name, unsigned int number_card, unsigned int number_image)
{
	this->type = type;
	this->name = name;
	this->number_card = number_card;
	this->number_image = number_image;
}
void Cards::setName(string name)
{
	this->name = name;
}
void Cards::setNumber(unsigned int number_card)
{
	this->number_card = number_card;
}
void Cards::setImage(unsigned int number_image)
{
	this->number_image = number_image;
}
string Cards::getName()const
{
	return this->name;
}
unsigned int Cards::getNumber()const
{
	return this->number_card;
}
unsigned int Cards::getImage()const
{
	return this->number_image;
}