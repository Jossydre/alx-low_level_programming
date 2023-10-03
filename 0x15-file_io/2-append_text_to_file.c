#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name o fthe text file to be append
 * @text_content: content of the file to be append
 * Return: 1, then 0 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int dfile, m = 0;

	if (!filename)
		return (-1);

	dfile = open(filename, O_WRONLY | O_APPEND);
	if (dfile == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[m])
		m++;

	write(dfile, text_content, m);

	close(dfile);

	return (1);
}
