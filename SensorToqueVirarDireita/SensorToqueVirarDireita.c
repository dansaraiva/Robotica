#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  while (1) {
    if((GetTouch(1))==(1)) {
      SetMotor(1,0);
      SetMotor(2,0);
      SetWaitForTime(1);
      SetMotor(1,50);
      SetMotor(2,0);
      SetWaitForTime(1);
    } else {
      SetMotor(1,30);
      SetMotor(2,30);
    }
  }
}
