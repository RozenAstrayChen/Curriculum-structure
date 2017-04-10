#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdint.h>

typedef struct class_struct{
	uint8_t* _name;
	int32_t _time;
	bool _notify;
	struct _class *next;
	struct _class *before;


	/*function*/
	//void (*init)(void);
	//struct _class* (*class_create)(uint8_t* name,int32_t time, bool notify);
	void (*class_link)(struct _class* class_obj,uint8_t* name,int32_t time, bool notify);
	void (*show)(struct _class* first);
}_class;

void _class_link(_class* class_obj,uint8_t* name,int32_t time, bool notify);
void _print_name(_class* class_obj);

