#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, len = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(f, text_content, len);
		if (w != len)
			return (-1);
	}
	close(f);

	return (1);
}
