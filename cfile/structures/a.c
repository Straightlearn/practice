#include <stdio.h>
void init_dog(struct dog *d,char *name,float age,char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d,char *name,float age,char *owner)
{
if (d)
{
	d->name=name;
	d->age=age;
}
}

int main()
{
	struct dog my_dog;
	int_dog(&my_dog,"poppy",3.5,"bob");
	printf(" i have a dog named %s , its %.1f old today",my_dog.name,my_dog.age);
	return (0);
}
