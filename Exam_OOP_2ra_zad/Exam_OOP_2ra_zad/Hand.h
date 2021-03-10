#pragma once
#include"Special.h"
#include<vector>
#pragma once
class Hand
{
private:
	vector<Cards*> arr;
public:

	void addCard(Cards* item);
	void removeCard(unsigned int index);
	void print();


};


void Hand::addCard(Cards* item)
{
	this->arr.push_back(item);
}

void Hand::removeCard(unsigned int index)
{
	this->arr.erase(this->arr.begin() + index);
}
void Hand::print()
{
	for (int i = 0; i < this->arr.size(); i++)
	{
		this->arr[i]->print();
	}
}
