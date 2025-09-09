#include <SCServo.h>

SMS_STS st;
#define S_RXD D7
#define S_TXD D6

int ID_ChangeFrom = 4;
int ID_Changeto   = 5;

void setup() {
  Serial.begin(115200);
  Serial1.begin(1000000, SERIAL_8N1, S_RXD, S_TXD);
  st.pSerial = &Serial1;
  delay(500);

  // 1) Unlock the EEPROM of the servo you're changing
  st.unLockEprom(ID_ChangeFrom);

  // 2) Write the new ID into the ID register
  st.writeByte(ID_ChangeFrom, SMS_STS_ID, ID_Changeto);

  // 3) Lock the EEPROM of the *new* ID
  st.LockEprom(ID_Changeto);

  delay(500);

  // Optional: quick move to verify the new ID took
  st.WritePosEx(ID_Changeto, 2048, 3400, 50);
}

void loop() {}