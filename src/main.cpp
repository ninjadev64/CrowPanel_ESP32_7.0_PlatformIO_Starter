#include <lvgl.h>
#include <lgfx.h>
#include <demos/lv_demos.h>

void setup() {
  Serial.begin(9600);
  lcd.setup();
  lv_demo_widgets();
}

void loop() {
  delay(lv_timer_handler());
}
