#include <stdio.h>

int main()
{
	char lang_name[11];
	int count;
	while (scanf("%s %d", lang_name, &count)>0){
		printf("%s %d\n", lang_name, count);
	}
}