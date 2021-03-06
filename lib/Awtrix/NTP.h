#ifndef NTP_H
#define	NTP_H


#include "ESP8266WiFi.h"
#include "WiFiUdp.h"
#include <stdint.h>
#include <Time.h>
#include "config.h"


class NTP
{
  private:
    #define LOCALPORT 2390 
    #define NTP_PACKET_SIZE 48 
    uint8_t DSToffset(time_t date);
    uint8_t packetBuffer[ NTP_PACKET_SIZE]; 
    const char* _serverName;
    int8_t _timeZoneOffset;
  
  public:
    time_t getNtpTime();
    void checkSleepMode();
};

#endif