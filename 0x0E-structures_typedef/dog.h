#include <stdio.h>

/**
* struct dog - structure being created
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

int main (void)
{
	struct dog;
}
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
