#include <TFT_eSPI.h>
TFT_eSPI lcd = TFT_eSPI(); /* TFT实例 */
uint16_t touchX, touchY;
void setup() {
  // put your setup code here, to run once:
  //LCD初始化
  lcd.begin();          /*初始化*/
}

void loop() {
  // put your main code here, to run repeatedly:
  bool touched = lcd.getTouch( &touchX, &touchY, 600);
  if ( touched )
  {
    Serial.print( "Data x " );
    Serial.println( touchX );

    Serial.print( "Data y " );
    Serial.println( touchY );
  }
}
