

#include <stdio.h>

main(int argc, char **argv)
{
	char	*name;
	int	len;
	int	ct;

	for(ct=1;ct<argc;ct++)
	{
		name = argv[ct];
		len = strlen(name);
		printf("<A HREF=\"%s\">", name);
		name[len - 3] = 'g';
		name[len - 2] = 'i';
		name[len - 1] = 'f';
		printf("<IMG SRC=\"%s\" ALIGN=LEFT></A><BR>\n", name);
		name[len - 4] = '\0';
		printf("picture: %s\n", name);
		printf("<BR CLEAR=LEFT><P>\n");
	}
}

