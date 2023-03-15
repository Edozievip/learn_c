#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1) { 
		printf("You only have one arguement.\n");
	} else if (argc > 1 && argc < 6) {
		printf("Here's your arguement:\n");

		for (i = 1; i < argc; i++) {
			printf("%s\n %s", argv[i], argv[2]);
		}
		printf("\n");
	} else {
		printf("You have too many arguements.\n");
	}

	return 0;
}	
