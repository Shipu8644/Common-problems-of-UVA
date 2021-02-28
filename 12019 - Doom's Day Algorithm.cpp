
#include <stdio.h>

char week[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday",
					"Thursday", "Friday", "Saturday"};

int total[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

int main()
{
	int n, m, d;
	while (~scanf("%d",&n))
	while (n --) {
		scanf("%d%d",&m,&d);
		puts(week[(total[m-1]+d+5)%7]);
	}
	return 0;
}
