#pragma once
#include"Card.h"
class HeroCard :virtual public Cards
{
public:
	HeroCard();
	HeroCard(Type, string, unsigned int, unsigned int,unsigned int,unsigned int);
	void setAttack(unsigned int);
	unsigned int getAttack()const;
	void setDefence(unsigned int);
	unsigned int getDefence()const;
	void print()const override;
private:
	Type type;
	unsigned int attack;
	unsigned int defence;
};

HeroCard::HeroCard() :Cards()
{
	this->type = Type::Hero;
	this->attack = 0;
	this->defence = 0;
}
HeroCard::HeroCard(Type type, string name, unsigned int number_card, unsigned int number_image,unsigned int attack,unsigned int defence) : Cards(type, name, number_card, number_image)
{
	this->type = Type::Hero;
	this->attack = attack;
	this->defence = defence;
}
void HeroCard::setAttack(unsigned int attack)
{
	this->attack=attack;
}
unsigned int HeroCard::getAttack()const
{
	return this->attack;
}
void HeroCard::setDefence(unsigned int defence)
{
	this->defence = defence;
}
unsigned int HeroCard::getDefence()const
{
	return this->defence;
}
void HeroCard::print()const
{
	cout << "Type:Hero" << '\n';
	cout << "Name:" << this->getName() << '\n';
	cout << "Number of Card:" << this->getNumber() << '\n';
	cout << "Number of Image:" << this->getImage() << '\n';
	cout << "Attack power:" << this->attack << '\n';
	cout << "Defence power:" << this->defence << '\n';
}