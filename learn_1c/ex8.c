#include <stdio.h>

int main(int argc, char *argv[])
{
	char fullName[] = {'Z', 'e', 'd', ' ', 'A', ' ', 'S', 'h', 'a', 'w', '\0'};
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Zed";
	
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	printf("The first area is %d, the second %d. \n", areas[0], areas[1]);
	printf("The size of char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
	printf("The size of fullName (char[]): %ld\n", sizeof(fullName));
	printf("The number of chars: %ld\n", sizeof(fullName) / sizeof(char));
	printf("name=\"%s\" and fullName=\"%s\"\n", name, fullName);

	return 0;
} 
