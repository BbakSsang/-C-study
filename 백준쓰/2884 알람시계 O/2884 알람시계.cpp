#include <stdio.h>
int main()
{
	int h, m;
	scanf("%d %d", &h, &m);

	if (h > 1)
	{
		if (m < 45)
		{
			h--;
			m += 60;
		}
		printf("%d %d", h, (m - 45));
	}
	else
	{
		if (m < 45)
		{
			h = 23;
			m += 60;
		}

		printf("%d %d", h, (m - 45));


	}
	return 0;
}