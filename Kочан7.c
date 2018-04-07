#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int i, p, Pindex = 2, Prime[150];
	bool Isprime;

	Prime[0] = 2;
	Prime[1] = 3;
	for(p = 5; p <= 150; p += 2)
	{
		Isprime = true;
		for(i = 1; Isprime && p / Prime[i] >= Prime[i]; ++i)
			if(p % Prime[i] == 0)
				Isprime = false;

		if(Isprime == true)
		{
			Prime[Pindex] = p;
			++Pindex;
		}
	}
	for(i = 0; i < Pindex; ++i)
		printf("%i\n", Prime[i]);

	return 0;
}
