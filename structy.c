#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct order {
	char * food;
	double price;
};

void bill(struct order *o);
struct order * ordering(char * food, double price);

int main() {
	srand(time(NULL));
	char * food = "french fries";
	double price = rand() / 1000000000.0;
	
	struct order *a = ordering(food, price);
	bill(a);
	
	return 0;
}

void bill(struct order *o) {
	int i;
	printf("order: %s \n cost: $%d \n", o-> food, o->price);
}

struct order * ordering(char * food, double price) {
	struct order *o;
	o = malloc(sizeof(struct order));
	
	o->food = food;
	o->price = price;
	
	return o;
}


