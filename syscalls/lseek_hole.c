#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

char	buf1[] = "abcdefghij";
char	buf2[] = "ABCDEFGHIJ";

int
main(void)
{
	int		fd;

	if ((fd = creat("file.hole", O_CREAT)) < 0)
		printf("creat error");

	if (write(fd, buf1, 10) != 10)
		printf("buf1 write error");
	/* offset now = 10 */

	if (lseek(fd, 16384, SEEK_SET) == -1)
		printf("lseek error");
	/* offset now = 16384 */

	if (write(fd, buf2, 10) != 10)
		printf("buf2 write error");
	/* offset now = 16394 */

	exit(0);
}
