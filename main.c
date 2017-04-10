#include <stdio.h>
#include <stdlib.h>
#include<week.h>
void test(void){

	/*_class test,test2;
	test.class_link = &_class_link;
	test.show = &_print_name;
	test.class_link("123",233,false);
	test.show();*/
	_class* test = class_init();
	test->class_link(test,"123",222,false);
	test->show(test);

	_class* t2 = class_init();
	t2->class_link(t2,"222",444,false);
	t2->show(t2);

}
int main(void){


	test();

}
