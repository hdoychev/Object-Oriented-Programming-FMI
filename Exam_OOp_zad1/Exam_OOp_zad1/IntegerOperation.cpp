#include "IntegerOperation.h"

IntegerOperation::IntegerOperation() {
	this->capacity = 10;
	this->size = 0;
	this->currResult = 0;
}

IntegerOperation::IntegerOperation(const IntegerOperation& other) {
	this->setIntArray(other.intArray, other.capacity, other.size);
	this->capacity = other.capacity;
	this->size = other.size;
	this->currResult = other.getResult();
}

IntegerOperation& IntegerOperation::operator=(const IntegerOperation& other) {
	if (this != &other) {
		this->setIntArray(other.intArray, other.capacity, other.size);
		this->capacity = other.capacity;
		this->size = other.size;
		this->currResult = other.getResult();
	}

	return *this;
}

IntegerOperation::~IntegerOperation() {
	delete[] this->intArray;
}


int IntegerOperation::operator+(IntegerOperation& other) {
	this->sum();
	other.sum();

	return this->getResult + other.getResult();
}

int IntegerOperation::operator-(IntegerOperation& other) {
	this->sub();
	other.sub();

	return this->getResult + other.getResult();
}

int IntegerOperation::operator*(IntegerOperation& other) {
	this->multiply();
	other.multiply();

	return this->getResult + other.getResult();
}


void IntegerOperation::setIntArray(int* _intArray, unsigned int _capacity, unsigned int _size) {
	delete[] this->intArray;
	this->intArray = new int[_capacity];

	for (int i = 0; i < _size; i++) {
		this->intArray[i] = _intArray[i];
	}
}

void IntegerOperation::resize() {
	int* tempArr = new int[this->capacity * 2];

	for (int i = 0; i < this->size; i++) {
		tempArr[i] = this->intArray[i];
	}

	setIntArray(tempArr, this->capacity * 2, this->size);
	this->capacity *= 2;
	delete[] tempArr;
}

void IntegerOperation::insert(int num) {
	if (this->size == this->capacity) {
		this->resize();
	}

	this->intArray[this->size] = num;
	this->size++;
}

void IntegerOperation::sum() {
	int result = 0;

	for (int i = 0; i < this->size; i++) {
		result += this->intArray[i];
	}

	this->currResult = result;
}

void IntegerOperation::sub() {
	int result = 0;

	for (int i = 0; i < this->size; i++) {
		result -= this->intArray[i];
	}

	this->currResult = result;
}

void IntegerOperation::multiply() {
	int result = 1;

	for (int i = 0; i < this->size; i++) {
		result *= this->intArray[i];
	}

	this->currResult = result;
}

int IntegerOperation::getResult() const {
	return this->currResult;
}