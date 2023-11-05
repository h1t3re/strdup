#include <stdlib.h>

char *strdup(const char *str)
{
	int len = 0;
	while(*(str+len) != '\0')
		len = len +1;
	len = len +1;

	char *dup_of_str = (char *)malloc(len*sizeof(char *));
	len = 0;
	
	while(*(str+len) != '\0')
	{
		*(dup_of_str+len) = *(str+len);
		len = len +1;
	}
	*(dup_of_str+len) = *(str+len);
	return dup_of_str;
}
