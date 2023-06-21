#include "Counter.h"

int Counter::GetVal()
{
	return val;
}

void Counter::SetVal(int val)
{
	this->val = val;
}

void Counter::Incr()
{
	this->val = val + 1;
}

void Counter::Decr()
{
	this->val = val - 1;
}

void Counter::PrintV()
{
	std::cout << "This val: " << val << std::endl;
}

