#include "touch.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin( 9600 ); /*初始化串口*/
  touch_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (touch_has_signal())
  {
    if (touch_touched())
    {
      Serial.print( "Data x :" );
      Serial.println( touch_last_x );

      Serial.print( "Data y :" );
      Serial.println( touch_last_y );
    }
  }
}
