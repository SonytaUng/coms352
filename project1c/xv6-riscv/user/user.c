#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/proc.h"
#include "kernel/syscall.h"


int main(int argc, char* argv[]){
	int fd, i;

	if(argc <= 1){
		wc(0, "");
		exit(0);
	}

	for(i=1; i<argc; i++){
		if((fd = open(argv[i], 0)) < 0){
			printf("wc: cannot open %s\n", argc[i]);
			exit(1);
		}
		wc(fd, argv[i]);
		close(fd);
	}
	exit(0);
}
