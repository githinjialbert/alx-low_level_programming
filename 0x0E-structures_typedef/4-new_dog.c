#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*_strlen - returns the string length
*@s: string
*Return: always 0
*/
int _strlen(char *s)
{
	int q;

	q = 0;
	while (s[q] != '\0')
		q++;
	return (q);
}
/**
*_strcpy - copies the string
*@src: source
*@dest: destination
*Return: always 0
*/
char *_strcpy(char *dest, char *src)
{
	int longi, q;

	longi = 0;
	while (src[longi] != '\0')
		longi++;
	for (q = 0; q < longi; q++)
		dest[q] = src[q];
	dest[q] = '\0';
	return (dest);
}
/**
*new_dog - creates a new dog
*@name: name of dog
*@age: age of dog
*@owner: name of owner
*Return: always 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int longi1, longi2;

	longi1 = _strlen(name);
	longi2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (longi1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (longi2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
