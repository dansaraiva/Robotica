#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  if((Ultrasound(1))<(50)) {
    SetMotor(1,0);
    SetMotor(2,0);
  } else {
    SetMotor(1,100);
    SetMotor(2,100);
  }
}
