#include "I2C_Com.h"
	


void setup_I2C_com_py() {
    Wire.begin(8, 48, (uint32_t)800000);
    Wire.onReceive(receivedData_py); 
}

void SendData_py(uint8_t address, const char* data) {
  Wire.beginTransmission(address); 
  Wire.write((uint8_t*)data, strlen(data));            
  Wire.endTransmission();        
}


void receivedData_py(int numBytes) {
  String receivedText = "";
  while (Wire.available()) {
    char c = Wire.read();
    receivedText += c;
  }
  process_msg(receivedText);

 
}

