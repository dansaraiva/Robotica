#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  while (1) {
    if((GetAHRS(1,2))>(30)) {
      SetMotor(1,100);
      SetMotor(2,100);
    } else {
      SetMotor(1,0);
      SetMotor(2,0);
    }
  }
}
