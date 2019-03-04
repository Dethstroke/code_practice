#include "Foo.hpp"

foo::Foo::Foo()
{
}

foo::Foo::~Foo()
{
}

int foo::Foo::convert_to_int(const char* str)
{

    int sum = 0;
    int mod = 0;
    int sign = 1;
    int i = 0;

    if(str[0] == '-') {

		sign = -1;
		i++;
    }

    while(str[i]-'0' >= 0 && str[i]-'0' <= 9) {

		mod = str[i] % 30;

		sum = mod + sum * 10;

		i++;
    }

    return sign * sum;
}