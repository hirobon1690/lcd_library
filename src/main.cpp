#include <mbed.h>
#include "lcd.h"

LCD lcd;
char str[16];
int hour=0;
int minutes=0;
int sec=0;

int main() {
  lcd.init();
  lcd.print("Hello, World!");
  for(hour=0;;hour++){
    for(minutes=0;minutes<60;minutes++){
      for(sec=0;sec<60;sec++){
        sprintf(str,"%02d:%02d:%02d",hour,minutes,sec);
        lcd.print(str,2);
        wait_us(1000000);
      }
    }
  }
}