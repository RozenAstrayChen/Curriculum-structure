#include "class.h"

//_class* first_class;

//_class* get_first_node(void){

//	return first_class;
//}
/*
 *create node
 * */
_class* class_create(uint8_t* name,int32_t time, bool notify){
	_class* node = (_class*)malloc(sizeof(_class));
	
	node->_name = name;
	node->_time = time;
	node->_notify = notify;
	node->next = NULL;
	node->before = NULL;

	return node;

}
/*
 *link list
 * */
void _class_link(_class* class_obj,uint8_t* name,int32_t time, bool notify){
	_class* temp = class_obj;
	_class* new_class = class_create(name,time,notify);
	//judge struct has node?
	if(class_obj ->next == NULL || class_obj->before == NULL){
		printf("first node\n");
		class_obj->next =  new_class;
		new_class->before = class_obj;
		return ;
	}
	printf("not first node\n");
	while(temp->next != NULL){
		temp = temp->next; //
	}
	//double link
	temp->next = new_class;
	new_class->before = temp;
	return;

}
/*
 *Debug useing
 * */
void _print_name(_class* class_obj){
	_class* temp = class_obj;
	while(temp != NULL){
		printf("%s->",temp->_name);
		temp = temp-> next;
	}
	printf("\n");

}
/*
 * init class struct ,we need connect package function
 * */
_class* class_init(){
	_class* c = (_class*)malloc(sizeof(_class));
	c->class_link = &_class_link;
	c->show = &_print_name;
	//test.class_link("123",233,false);
	//test.show();
	return c;


}

