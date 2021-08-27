
#include "debug.h"

WiFiUDP DebugUdp;
String debugMsgLine;

void debugSetup()
{
    debugMsgLine.reserve(128);
}

void sendDebugUDP(String msg)
{
    DebugUdp.beginPacket(DEBUG_HOST, DEBUG_PORT);
    DebugUdp.print("msg: ");
    DebugUdp.print(msg);
    // for (int i = 0; i < msg.length(); i++)
    // {
    //   DebugUdp.write(msg.charAt(i));
    // }
    DebugUdp.endPacket();
}

void debugMsgLn(String part)
{
    debugMsg(part + "\n");
}

void debugMsg(String part)
{
    Serial.print(part);
    debugMsgLine += part;
    if (debugMsgLine.endsWith("\n"))
    {
        sendDebugUDP(debugMsgLine);
        debugMsgLine = "";
    }
}
