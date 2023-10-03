#include "main.h"

/**
 * read_textfile - text file to be read
 * @filename: the file name
 * @letters: numbers of letters printed
 * Return: number of letters to be read. if fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t dr, mk;
	char *bet;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bet = malloc(sizeof(char) * (letters));
	if (!bet)
		return (0);

	dr = read(fd, bet, letters);
	mk = write(STDOUT_FILENO, bet, dr);

	close(fd);

	free(bet);

	return (mk);
}
