#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i <= argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}	

	char *states[] = {
		"Abuja", "Enugu", "\0", "Lagos", "Edo", "Oyo"};
	int num_states = 5;


	for (i = 0; i < num_states; i++)
	{
		printf("state %d: %s %s\n", i, states[i], states[2]);
	} 

}
