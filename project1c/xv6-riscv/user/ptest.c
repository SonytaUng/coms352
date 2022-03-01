/**
 * Philip Choi
 * 
 * The number of processes before fork() is 3.
 * After invoking fork(), the number becomes 4.
 * In this case, the fork() creates one more process.
 */


#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
 
  printf("%d: before fork()\n", pcount());
  
  if(fork() > 0)
    sleep(5);  // Let child exit before parent.
  
  printf("%d: after fork()\n", pcount()); 

  exit(0);
}
