#include <stdio.h>

struct person_data {
	char *name;
	int eng;
	int maths;
	int phy;	
	int com;
	float total;
};

//assign values to them
	
int main(void)
{
	struct person_data Person;

        Person.name = "Christain";
        Person.eng = 78;
        Person.maths = 86;
        Person.phy = 89;
        Person.com = 75;
        //Person.total = eng + maths + phy + com;
	
	printf("His total score is %s.\n", Person);	
	printf("%s scored %d in Physics and scored %d in Maths exam.\n", Person.name, Person.phy, Person.maths);
} 
