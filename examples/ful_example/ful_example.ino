#include <ful.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  unsigned long a = 12345;
  float b = 1.2345;
  
  Serial.print("unsigned long: ");
  Serial.print(a);
  Serial.print("to float: ");
  Serial.println(ul2f(a));
  
  Serial.print("float: ");
  Serial.print(b);
  Serial.print("to unsigned long: ");
  Serial.println(f2ul(b));


}

void loop() {
  // put your main code here, to run repeatedly:

}
