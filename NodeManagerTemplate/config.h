#ifndef config_h
#define config_h

/**********************************
 * Sketch configuration
 */

#define SKETCH_NAME "NodeManagerTemplate"
#define SKETCH_VERSION "1.1"

/**********************************
 * MySensors configuration
 */
#define MY_RADIO_NRF24
//#define MY_RF24_ENABLE_ENCRYPTION
//#define MY_DEBUG
//#define MY_RF24_CHANNEL 76
//#define MY_NODE_ID 100

/***********************************
 * NodeManager configuration
 */
// if enabled, will load the sleep manager library. Sleep mode and sleep interval have to be configured to make the board sleeping/waiting
#define SLEEP_MANAGER 1
// if enabled, enable the capability to power on sensors with the arduino's pins to save battery while sleeping
#define POWER_MANAGER 1
// if enabled, will load the battery manager library to allow the battery level to be reported automatically or on demand
#define BATTERY_MANAGER 1
// if enabled, allow modifying the configuration remotely by interacting with the configuration child id
#define REMOTE_CONFIGURATION 1
// if enabled, persist the remote configuration settings on EEPROM
#define PERSIST 0

// if enabled, enable debug messages on serial port
#define DEBUG 1

// if enabled, send a SLEEPING and AWAKE service messages just before entering and just after leaving a sleep cycle
#define SERVICE_MESSAGES 1
// if enabled, a battery sensor will be created at BATTERY_CHILD_ID and will report vcc voltage together with the battery level percentage
#define BATTERY_SENSOR 1

// Enable this module to use one of the following sensors: SENSOR_ANALOG_INPUT, SENSOR_LDR, SENSOR_THERMISTOR
#define MODULE_ANALOG_INPUT 1
// Enable this module to use one of the following sensors: SENSOR_DIGITAL_INPUT
#define MODULE_DIGITAL_INPUT 1
// Enable this module to use one of the following sensors: SENSOR_DIGITAL_OUTPUT, SENSOR_RELAY, SENSOR_LATCHING_RELAY
#define MODULE_DIGITAL_OUTPUT 1
// Enable this module to use one of the following sensors: SENSOR_DHT11, SENSOR_DHT22
#define MODULE_DHT 0
// Enable this module to use one of the following sensors: SENSOR_SHT21
#define MODULE_SHT21 0
// Enable this module to use one of the following sensors: SENSOR_SWITCH, SENSOR_DOOR, SENSOR_MOTION
#define MODULE_SWITCH 0
// Enable this module to use one of the following sensors: SENSOR_DS18B20
#define MODULE_DS18B20 0

#endif