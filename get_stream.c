#include "monty.h"


/**
 * _getstream - Gets stream for reading from file.
 * @file_name: name of the file to open the stream.
 */

void _getstream(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);

	if (fd == -1)
	{
		getstream_error(file_name);
	}

	arguments->stream = fdopen(fd, "r");

	if (arguments->stream == NULL)
	{
		close(fd);
		getstream_error(file_name);
	}
}
