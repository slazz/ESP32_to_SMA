#define RED_LED 6
#define INVERTERSCAN_PIN 14 //Analogue pin 1 - next to VIN on connectors
#define BT_KEY 15           //Forces BT BOARD/CHIP into AT command mode
#define RxD 16
#define TxD 17
#define BLUETOOTH_POWER_PIN 5 //pin 5

//Location in EEPROM where the 2 arrays are written
#define ADDRESS_MY_BTADDRESS 0
#define ADDRESS_SMAINVERTER_BTADDRESS 10

// This is set via a build time constant in setup()
unsigned char smaBTInverterAddressArray[6] = {};

unsigned char myBTAddress[6] = {}; // BT address of ESP32.

bool BTStart();
bool BTEnd();
bool BTCheckConnected();
