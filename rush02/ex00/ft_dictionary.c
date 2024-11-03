char *to_find(int n)
{
    int fd;
    char buffer;

    fd = open("numbers.dict", O_ORDONLY);
	if (fd == -1)
	{
		write (1,"DictError\n", 10);
		return NULL;
	}
    buffer[40 + 15 + 2];
} 