#include <stdio.h>
#include <string.h>

#include "../include/output.h"

int main(int args_count, char* args[]) {

	if(args_count > 2) too_many_args();
	else if(args_count == 2) {
		if(strcmp(args[1], "--help") == 0) help();
	}
	else help();

	return 0;
}