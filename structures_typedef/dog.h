#ifndef _DOG_H_
#define _DOG_H_
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
} dog_t;
#endif /**__DOG_H_**/
