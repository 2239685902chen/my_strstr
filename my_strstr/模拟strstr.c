#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* q, const char* w)
{
	assert(*q && *w);
	char* a = 0;
	char* s = 0;
	char* d = 0;
	char* f = 0;
	a = (char*)q;
	s = (char*)w;
	d = (char*)q;
	f = (char*)w;
	while (d)
	{
		a = d;
		s = f;
		while (*a && *s && !(*a-*s))
		{
			a++;
			s++;
		}
		if (!(*s))
		{
			return d;
		}
		if (!(*a))
		{
			return NULL;
		}
		d++;
	}
	return NULL;
}
int main()
{
	char q[] = "abbbcdefg";
	char w[]= "cde";
	char* e = NULL;
	e=my_strstr(q, w);
	if (e == NULL)
	{
		printf("ÕÒ²»µ½×Ó´®\n");
	}
	else
	{
		printf("%s\n", e);
	}
	return 0;
}