#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  while (1) {
    if((GetTouch(2))==(1)) {
      SetMotor(1,50);
      SetMotor(2,0);
    }
    if((GetTouch(1))==(1)) {
      SetMotor(1,0);
      SetMotor(2,50);
    }
    if((((GetTouch(1))==(1)))&&(((GetTouch(2))==(1)))) {
      SetMotor(1,50);
      SetMotor(2,50);
    }
  }
}
