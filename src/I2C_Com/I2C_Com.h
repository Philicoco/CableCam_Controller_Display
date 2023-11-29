#include "Wire.h"
#include "process_data.h"

extern void setup_I2C_com_py();
extern void SendData_py(uint8_t address, const char* data);
extern void receivedData_py(int numBytes);
