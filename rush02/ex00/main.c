#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

//void ft_checkIn(char *str);

void read_dict(const char *filename) {
    int fd, bytes_read;
    char buffer[BUFFER_SIZE + 1];

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return;
    }

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0) {
        buffer[bytes_read] = '\0';
    }

    if (bytes_read == -1) {
        perror("Error reading file");
    }

    close(fd);
}

int main(int argc, char **argv)
{
	int	i;
	char *str;
	
	i = 0;
	if(argc > 1 && argc < 4)
	{
		read_dict("numbers.dict");
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == '.')
			{
				write (1, "Error\n",6);
				return (0);
			}
			else
			{
				str = argv[1];
			}
			i++;
		}
		
	}
	printf("%s\n", str);
}
