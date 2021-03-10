#pragma once

class IntegerOperation {
private:
	int* intArray = new int[10];
	int currResult;
	unsigned int capacity;
	unsigned int size;

	void setIntArray(int* _intArray, unsigned int _capacity, unsigned int _size);
	void resize();

public:
	IntegerOperation();
	IntegerOperation(const IntegerOperation& other);
	IntegerOperation& operator=(const IntegerOperation& other);
	~IntegerOperation();

	
	int operator+(IntegerOperation& other);
	int operator-(IntegerOperation& other);
	int operator*(IntegerOperation& other);
	

	void insert(int num);

	void sum();
	void sub();
	void multiply();

	int getResult() const;
};