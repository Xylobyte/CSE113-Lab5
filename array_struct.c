#include "array_struct.h"
#include <stdio.h>

#define dataAtIndex data[index]

int main(void)
{

	struct data_t data[SIZE];

	/* data initialization calls */
	init_array(data, 0, 'A', 23, 74);
	init_array(data, 1, 'B', 22, 64);
	init_array(data, 2, 'C', 19, 68);
	init_array(data, 3, 'D', 20, 76);
	init_array(data, 4, 'E', 22, 62);

	printf("Minimum age: ");
	printStruct(data, minAge(data));
	printf("Maximum age: ");
	printStruct(data, maxAge(data));
	printf("Minimum height: ");
	printStruct(data, minHeight(data));
	printf("Maximum height: ");
	printStruct(data, maxHeight(data));
	printf("Average age: %d\n", avgAge(data));
	printf("Average height: %d\n", avgHeight(data));

	return 0;
}

void init_array(struct data_t data[], int index, char id, int years, int inches) {
	dataAtIndex.subject = id;
	dataAtIndex.age = years;
	dataAtIndex.height = inches;
}

int minAge(struct data_t data[]) {
	int min = data[0].age;
	int minIndex = 0;
	for(int i = 0; i < SIZE; i++)
		if(min > data[i].age) {
			min = data[i].age;
			minIndex = i;
		}
	return minIndex;
}

int minHeight(struct data_t data[]) {
	int min = data[0].height;
	int Index = 0;
	for(int i = 0; i < SIZE; i++)
		if(min > data[i].height) {
			min = data[i].height;
			Index = i;
		}
	return Index;
}

int maxAge(struct data_t data[]) {
	int max = data[0].age;
	int Index = 0;
	for(int i = 0; i < SIZE; i++)
		if(max < data[i].age) {
			max = data[i].age;
			Index = i;
		}
	return Index;
}

int maxHeight(struct data_t data[]) {
	int max = data[0].height;
	int Index = 0;
	for(int i = 0; i < SIZE; i++)
		if(max < data[i].height) {
			max = data[i].height;
			Index = i;
		}
	return Index;
}

int avgAge(struct data_t data[]) {
	int sum = 0;
	for(int i = 0; i < SIZE; i++)
		sum += data[i].age;
	return sum / SIZE;
}

int avgHeight(struct data_t data[]) {
	int sum = 0;
	for(int i = 0; i < SIZE; i++)
		sum += data[i].height;
	return sum / SIZE;
}

void printStruct(struct data_t data[], int index) {
	printf("Subject: %c  Age: %d  Height: %d\n", dataAtIndex.subject, dataAtIndex.age, dataAtIndex.height);
}