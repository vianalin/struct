#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct order {
	char * food;
	double price;
}

void bill(struct order *o) {
	int i;
	printf("order: %c \n cost: %d \n", o->food, o->price);
}

	
