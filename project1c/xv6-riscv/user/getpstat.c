#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/pstat.h" 

//For 1B
/*

*/

int
main(void){
  struct pstat p;
  
  getpstat(&p);
  
	for( int i = 0; i< NPROC; i++){
		printf( "%d, %d, %d \n", p.inuse[i],p.pid[i], p.nice[i] );		
		
	}
	return 0;

}
