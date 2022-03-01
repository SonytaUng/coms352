#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
//#include "kernel/sysproc.h"

//For 1B
int
main(int argc, char *argv[]){
  char **arr = (char**)&argv[2];  
 // int result = nice(atoi(argv[1]));

  if(argc < 4){
    printf("give a proper command. ex) nice 19 wc README");
    exit(1);
  }

 // if(result == 0){
    exec(argv[2], arr);
    exit(0);
 // }else{
 //   printf("Wrong value nicevalue");
 //   exit(1);
 // }
}
