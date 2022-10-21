#include <stdio.h>
void car1(struct my_car *j,char *n, char *c);

struct my_car
{
	char *name;
	char *color;
};

int main()
{
	struct my_car jeep;
	car1(&jeep,"lexus 350","blue");
	printf(" i have %s , %s color",jeep.name,jeep.color);
}

void car1(struct my_car *j,char *n, char *c)
{
if(j)
{
	j->name= n;
	j->color= c;
}
}
