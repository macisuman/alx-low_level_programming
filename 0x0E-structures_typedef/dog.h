#ifndef _DOG_H
#define _DOG_H
/**
* struct dog - structure being created
* main- main function
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
