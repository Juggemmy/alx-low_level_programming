#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Desc: Dog attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
