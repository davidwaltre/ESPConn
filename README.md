![Code size](https://img.shields.io/github/languages/code-size/davidwaltre/ESPConn) ![License](https://img.shields.io/github/license/davidwaltre/ESPConn)

# About

ESPConn is a simple library to check the connection to and automatically reconnect to your WiFi. Include in your Arduino IDE project.

## Requirements

You need to have ESP8266WiFi library installed.
You'll also need the [ESP8266 Ping](https://github.com/jeroenst/ESP8266Ping) library made by [jeroenst](https://github.com/jeroenst) installed. I provided a copy of the code in the /src/ folder.

## Usage

Copy the contents of the /src/ folder directly to the folder of your Arduino IDE project.

Then, you have to include the ESPConn library:

```Arduino
#include "ESPConn.h"
```

Second, you have to initialize the IP you want to ping. I recommend using your router or any server like Google:
```Arduino
IPAddress ip (192, 168, 0, 1);
```

Using the library is easy, to check the connection, use:
```Arduino
checkConnection(ip, "YOUR_SSID", "YOUR_PASS"); 
```
And replace "YOUR_SSID" and "YOUR_PASS" with your WiFi credentials. In case of no connection, it automatically reconnects to the WiFi.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
