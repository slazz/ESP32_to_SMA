#ifndef SITE_DETAILS_H_
#define SITE_DETAILS_H_

// Host name for ESP32, used with DHCP server, MQTT topics, identifier in HA etc
#define HOST "sma-monitor"
// Friendly name used to prefix Home Assistant entity names
#define FRIENDLY_NAME "SMA Inverter"

// The "MAC" Address of the Bluetooth device in the SMA inverter.
// Use a bluetooth scanner to get this value, it must be written in an array format,
// for example, the MAC "AA:BB:CC:00:11:22" should be written as:
// #define SMA_ADDRESS 0xAA, 0xBB, 0xCC, 0x00, 0x11, 0x22
#define SMA_ADDRESS 0x00, 0x80, 0x25, 0x00, 0x11, 0x22

// WiFi details
#define SSID "xxx"
#define PASSWORD "xxx"

// Timezone offset from GMT in hours
#define TIME_ZONE 10

// MQTT server hostname/IP address
#define MQTT_SERVER "mqtt.server"
#define MQTT_USERNAME "" // Can be omitted if not needed
#define MQTT_PASSWORD "" // Can be omitted if not needed
// MQTT base topic, must end with a /
#define MQTT_BASE_TOPIC "sma/solar/"

// NTP server(s), at least one must be configured
#define NTP_SERVER "ntp.pool.org"
#define NTP_SERVER2 NULL
#define NTP_SERVER3 NULL

// Host to send UDP/syslog debug messages to.
// Comment out the following 2 lines to disable UDP logging
#define DEBUG_HOST "192.168.0.1"
#define DEBUG_PORT 514

// Comment out the following line if you do NOT want the relevant Home Assistant topics
// published via MQTT to allow auto discovery.
#define PUBLISH_HASS_TOPICS

#endif /* SITE_DETAILS_H_ */