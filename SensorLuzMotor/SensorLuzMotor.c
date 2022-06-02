#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  while (1) {
    if((Get_Colour_Data(1,1))==(6)) {
      SetMotor(1,20);
      SetMotor(2,20);
    } else {
      SetMotor(1,0);
      SetMotor(2,0);
    }
  }
}
