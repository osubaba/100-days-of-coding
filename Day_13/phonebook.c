#include <stdio.h>
#include <string.h>

typedef struct
{
	char* name;
	char* number;
}
jitu;

int main(void)
{
	jitu watu[3];

	watu[0].name = "Fay";
	watu[0].number =  "0792631487";

	watu[1].name = "willy";
	watu[1].number = "0792631435";

	watu[2].name = "mzii";
	watu[2].number = "0762451387";
	
	for (int n = 0;	n < 4; n++)
	{
		if (strcmp(watu[n].name, "mzii") == 0)
		{
			printf("found %s\n", watu[n].number);
			return (0);
		}
	}
	printf("not found");
	return (1);
}
