#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

<<<<<<< HEAD
//For 1B
/*
Print out the nice function with some argument parameter by the user input

For example, the command “nice 19 wc README” executes the nice utility program 
which in turn sets the nice value to 19 and then executes the
command “wc README”. The command “wc README” executes the wc (word count) utility
program passing it the argument README. 
*/

int
main(int argc, char *argv[]){
  char **arr = (char**)&argv[2]; 
  int result = nice(atoi(argv[1]));
  nice(result);
=======
//nice.c, it takes 4 command line arguments and process and pass it to kernel side.
int
main(int argc, char *argv[]){
  //pointer to set value to pass to exec()
  char **arr = (char**)&argv[2];  
>>>>>>> 5d89a66434ef2d43242ba199b0ac7958de6513e1
  
  if(argc < 3){
    printf("give a proper command. ex) nice 19 wc README");
    exit(1);
  }
<<<<<<< HEAD
  
  exec(argv[2], arr);
  exit(0);

=======
  //error occurs here
  nice(atoi(argv[1]));

  exec(argv[2], arr);
  exit(0);
>>>>>>> 5d89a66434ef2d43242ba199b0ac7958de6513e1
}
