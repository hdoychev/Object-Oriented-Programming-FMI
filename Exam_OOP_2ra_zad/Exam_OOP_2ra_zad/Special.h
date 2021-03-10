#pragma once
#include"Magic_card.h"
#include"Hero_card.h"
class Special :public HeroCard,public MagicCards
{
public:
	Special();
	Special(Type, string, unsigned int, unsigned int, string,unsigned int,unsigned int,unsigned int);

	void print()const override;
private:
	Type type;
	unsigned int level;
};

Special::Special() :HeroCard(),MagicCards()
{
	this->type = Type::Special;
	this->level = 0;
}
Special::Special(Type type, string name, unsigned int number_card, unsigned int number_image, string opisanie,unsigned int attack,unsigned int defence,unsigned int level) : Cards(type, name, number_card, number_image)
{
	this->type = Type::Special;
	this->level = level;
}
void Special::print()const
{
	cout << "Type:Magic" << '\n';
	cout << "Name:" << this->getName() << '\n';
	cout << "Number of Card:" << this->getNumber() << '\n';
	cout << "Number of Image:" << this->getImage() << '\n';
	cout << "History of card:" << this->getOpisanie()<< '\n';
	cout << "Attack power:" << this->getAttack() << '\n';
	cout << "Defence power:" << this->getDefence()<< '\n';
	cout << "Level:" << this->level << '\n';
}
