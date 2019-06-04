#include <stdio.h>
#include <stdlib.h>

int verbose = 0;
char *out_file = "print.out";
char *program_name;
int line_max = 66;

void do_file(char *name) {
	printf("Verbose %d Lines %d Input %s Output %s\n",
		verbose, line_max, name, out_file);
}

void usage(void) {
	fprintf(stderr, "Usage is %s [options] [file-list]\n", program_name);

	fprintf(stderr, "Options\n");
	fprintf(stderr, "-v      verbose\n");
	fprintf(stderr, "  -l<number>  Number of lines\n");
	fprintf(stderr, "  -o<name>    Set output filename\n");
	exit(8);
}
int main(int argc, char *argv[]) {
	program_name = argv[0];
	printf("%s\n", program_name);
	printf("argc %d\n", argc);
	return 0;
}