#pragma once
#include "Types.h"
template<typename Type, typename Number>
class Vector
{
public:
	Vector() {};
	Vector(Type data, Number number) : _data(data), _number(number)
	{}

	Type getType()
	{
		return _data;
	}

	Number getNumber()
	{
		return _number;
	}
private:
	Type _data;
	Number _number;
};