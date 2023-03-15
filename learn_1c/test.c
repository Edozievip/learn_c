#include <stdio.h>

int main(int argc, char *argv[])
{
	int age[] = {45, 27, 71, 25};
	char *names[] = {
		"Ike", "Chris", "Leo", "Okey"};
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		printf("%s is %d years old.\n", *(names+i),
		*(age+i));
	}
} 
