#ifndef ARRAY_STRUCT_H_
#define ARRAY_STRUCT_H_


#define SIZE 5

struct data_t {

	int age;  /* age of the subject */
	int height;  /* height of subject in inches */
	char subject; 	/* one capital letter id for subject */
	
};

void init_array(struct data_t data[], int index, char id, int years, int inches);
int minAge(struct data_t data[]);
int minHeight(struct data_t data[]);
int maxAge(struct data_t data[]);
int maxHeight(struct data_t data[]);
int avgAge(struct data_t data[]);
int avgHeight(struct data_t data[]);
void printStruct(struct data_t data[], int index);

#endif
