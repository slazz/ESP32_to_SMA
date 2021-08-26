#define RED_LED 6
#define INVERTERSCAN_PIN 14 //Analogue pin 1 - next to VIN on connectors
#define BT_KEY 15           //Forces BT BOARD/CHIP into AT command mode
#define RxD 16
#define TxD 17
#define BLUETOOTH_POWER_PIN 5 //pin 5

//Location in EEPROM where the 2 arrays are written
#define ADDRESS_MY_BTADDRESS 0
#define ADDRESS_SMAINVERTER_BTADDRESS 10

// NOTE: You MUST change the next line to give the BT MAC address of your SMA inverter.
// 00:80:25:26:8A:C2
// unsigned char smaBTInverterAddressArray[6] = {0x00, 0x80, 0x25, 0x26, 0x8A, 0xC2}; // BT address of my SMA.
unsigned char smaBTInverterAddressArray[6] = {0xC2, 0x8A, 0x26, 0x25, 0x80, 0x00};

unsigned char myBTAddress[6] = {}; // BT address of ESP32.

void BTStart();
