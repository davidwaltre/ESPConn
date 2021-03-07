# About

ESPConn is a simple library to check the connection to and automatically reconnect to your WiFi. Include in your Arduino IDE project.

## Requirements

You need to have ESP8266WiFi library installed.
You'll also need the [ESP8266 Ping](https://github.com/jeroenst/ESP8266Ping) library made by [jeroenst](https://github.com/jeroenst) installed. I provided a copy of the code in the /src/ folder.

## Usage

Copy the contents of the /src/ folder directly to the folder of your Arduino IDE project.

Then, if not yet done, you have to include all dependenies and the ESPConn library:

```Arduino
#include <ESP8266WiFi.h>
#include "ESP8266Ping.h" //only do it that way if you use the copied version
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
And replace "YOUR_SSID" and "YOUR_PASS" with your WiFi credentials.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
