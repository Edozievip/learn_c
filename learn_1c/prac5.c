#include <stdio.h>

#define message_for(a, b) \
                printf(#a " and " #b ": will come to school today!\n");
int age(int y,int z)
{
	return(y + z); 
} 
int main()
{
        age(35, 65);

        message_for(Praise, Precious);
}
