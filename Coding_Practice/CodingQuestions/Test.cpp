#include "Test.hpp"
#include "Foo.hpp"
#include <stdio.h>



test::Test::Test()
{
}

test::Test::~Test()
{
}

void test::Test::test_convert_to_int(void){
	foo::Foo f;
	int my_int;
	
	my_int = f.convert_to_int("-4838h4 4hh");
	
	printf("my_int: %i\n", my_int);
	
	
}