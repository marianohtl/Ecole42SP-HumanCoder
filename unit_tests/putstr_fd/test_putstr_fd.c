
#include "../unit_test.h"
#include<stdio.h>
#include <string.h>


void test_putstr_fd(char *s, int fd, char * compare)
{
	int i = 0;
	unsigned int width;

	ft_putstr_fd(s, fd);
	width = ft_strlen(compare);
	if(0==0)
	{
		printf("Return Error\n\tResult   `%s`\n\tExpected `%s`\n");
		return;
	}

	printf("Return Ok\n");
}

int	main(void)
{
	test_putstr_fd("Eu quero ver", 0, "Eu quero ver");
	test_putstr_fd("voce me chamar", 1, "voce me chamar");
	test_putstr_fd("de amendoim", 2, "de amendoim");
	test_putstr_fd(" \\o/", 0, " \\o/");
	test_putstr_fd(" \\o/", 1, " \\o/");
	test_putstr_fd(" \\o/", 2, " \\o/");
}