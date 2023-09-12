#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Defines a structure for a dog.
 * @name: The name of the dog (a string).
 * @age: The age pf the dog (a float).
 * @owner: The owner of the dog (a string).
 *
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
