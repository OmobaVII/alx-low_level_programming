#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - to give the name age and owner of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
