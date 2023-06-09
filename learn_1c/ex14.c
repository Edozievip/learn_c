#include <stdio.h>
#include <ctype.h>

//forward declarations
void print_letters(char arg[]);
int can_print_it(char ch);

void print_arguements(int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < argc; i++) {
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;
	
	for (i = 0; arg[i] != '\0'; i++) {
		char ch = arg[i];
	
		if (can_print_it(ch)) {
			printf("Normal character = '%c'\n ASCII character = %d \n", ch, ch);
		}
	}
	printf("\n");
}
	
int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch) || isdigit(ch);
}

int main(int argc, char *argv[])
{
	print_arguements(argc, argv);
	return 0;
}
