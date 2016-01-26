/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#define SIZE 31
char * get_last_word(char * str)
{
	int i=0,start=0;
	char *last_word;
	if (str==NULL)
		return NULL;
	last_word = (char *)malloc(SIZE*(sizeof(char)));
	while (str[i + 1] != '\0')
	{
		if (str[i] == ' '&&str[i + 1] != ' ')
			start = i + 1;
		i++;
	}
	
	for (i = 0; str[start] != ' ' && str[start] != '\0';start++,i++)
		last_word[i] = str[start];

	last_word[i] = '\0';
	return last_word;
}
