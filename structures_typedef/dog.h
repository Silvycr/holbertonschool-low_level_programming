#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - Information about dogs
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /**__dog_h_**/
