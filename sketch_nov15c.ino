#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(5,4);
Adafruit_Fingerprint finger= Adafruit_Fingerprint(&mySerial);
uint8_t id;
void setup()
{
  Serial.begin(9600);
  while(!Serial);
  delay(100);
  Serial.println("\n\nannanRSujay Checking the Availability of FingerPrint Sensor");
  finger.begin(57600);
  if(finger.verifyPassword())
  {
    Serial.println("Found FingerPrint Sensor");
  }
  else
  {
    Serial.println("Did not find fingerprint sensor");
    while (1)
    {
      delay(1);
    }
  }
}
