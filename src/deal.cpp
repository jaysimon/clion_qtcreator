#include "deal.h"
#include <iostream>
#include <unistd.h>

int iFlag;

void *run(void *arg){

  while(1){
//        sleep(1);
    printf("%d\n", iFlag);
    printf("%d%d\n", iFlag, iFlag);
  }
}
