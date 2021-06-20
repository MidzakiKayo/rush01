#include <unistd.h>
#include "ft_printer.c"
#include "processing.c"
#include "checkerr.c"
#include "ft_putchar.c"
#include "print_numb.c"
#include "ft_strlen.c"
#include "read_num.c""
int main(int argc, char **argv)
{
	int err;
	int **mass;
	mass = read_num(argv);
	processing(argv[1]);
    return 0;
}
