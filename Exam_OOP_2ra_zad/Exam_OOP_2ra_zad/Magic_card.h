#pragma once
#include"Card.h"
class MagicCards:virtual public Cards
{
public:
	MagicCards();
	MagicCards(Type, string, unsigned int, unsigned int,string);
	void setOpisanie(string);
	string getOpisanie()const;
	void print()const override;
private:
	Type type;
	string opisanie;
};

MagicCards::MagicCards():Cards()
{
	this->type = Type::Magic;
	this->opisanie = "";
}
MagicCards::MagicCards(Type type, string name, unsigned int number_card, unsigned int number_image,string opisanie):Cards(type,name,number_card,number_image)
{
	this->type = Type::Magic;
	this->opisanie = opisanie;
}
void MagicCards::setOpisanie(string opisanie )
{
	this->opisanie = opisanie;
}
string MagicCards::getOpisanie()const
{
	return this->opisanie;
}
void MagicCards::print()const 
{
	cout << "Type:Magic" << '\n';
	cout << "Name:"<<this->getName()<< '\n';
	cout << "Number of Card:"<<this->getNumber() << '\n';
	cout << "Number of Image:"<<this->getImage() << '\n';
	cout << "History of card:"<<this->opisanie << '\n';
}