#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  while (1) {
    if((Get_Colour_Data(1,1))==(1)) {
      SetLCDClear(63488);
    }
    if((Get_Colour_Data(1,1))==(6)) {
      SetLCDClear(65535);
    }
    if((Get_Colour_Data(1,1))==(7)) {
      SetLCDClear(0);
    }
  }
}
