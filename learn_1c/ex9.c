#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};
	char *another = "ZedA";

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;

	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = 'A';
	name[4] = '\0';
	printf("numbers: %d %d %d %d %d\n", numbers[0], numbers[1],numbers[2], numbers[3], numbers[4]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);
	printf("another: %s\n", another);
}
