#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  for (int i = 0; i < 5; i++) {
    SetInBeep(ON);
    SetWaitForTime(1);
    SetInBeep(OFF);
    SetWaitForTime(1);
  }
}
