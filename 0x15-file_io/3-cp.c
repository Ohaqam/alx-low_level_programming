#include "main.h"

/**
* main - Poin of starting
* @argc: Parameter one.
* @argv: Parameter two.
* Return:Returns 0.
*/

int main(int argc, char *argv[])
{

int iFD, oFD, nB_r, nB_w;
char text[BUF_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
iFD = open(argv[1], O_RDONLY);
if (iFD == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
argv[1]);
exit(98);
}
oFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (oFD == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((nB_r = read(iFD, text, BUF_SIZE)) > 0)
{
nB_w = write(oFD, text, nB_r);
if (nB_w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
argv[2]);
exit(99);
}
}
if (nB_r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
argv[1]);
exit(98);
}
close_file(iFD);
close_file(oFD);
return (0);
}

/**
* close_file - close a opened file.
* @FD:         Parameter one.
* Return:      Returns nothing.
*/

void close_file(int FD)
{
if (close(FD) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", FD);
exit(100);
}
}

