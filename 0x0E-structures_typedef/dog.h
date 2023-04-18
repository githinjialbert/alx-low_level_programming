#ifndef DOG_H
#define DOG_H

/**
*struct dog - the dog's name
*@name: member1
*@age: member2
*@owner: member3
*Description: longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
*dog_t - new typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *strpcy(char *dest, char *src);
int _strlen(char *s);
#endif
