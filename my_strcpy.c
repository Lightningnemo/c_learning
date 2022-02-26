#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

	while (*dest++ = *src++)
	{
      ;
	}
	//*dest = *src; //'\0;'
	return ret;
}
