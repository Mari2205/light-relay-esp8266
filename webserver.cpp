        //    // Display the HTML web page
        //     client.println("<!DOCTYPE html><html>");
        //     client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
        //     client.println("<link rel=\"icon\" href=\"data:,\">");
        //     // CSS to style the on/off buttons 
        //     // Feel free to change the background-color and font-size attributes to fit your preferences
        //     client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
        //     client.println(".button { background-color: #195B6A; border: none; color: white; padding: 16px 40px;");
        //     client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
        //     client.println(".button2 {background-color: #77878A;}</style></head>");
            
            // Web Page Heading
            // client.println("<body><h1>ESP8266 Web Server</h1>");
            
            // // Display current state, and ON/OFF buttons for GPIO 5  
            // client.println("<p>GPIO 5 - State " + output5State + "</p>");
            // // If the output5State is off, it displays the ON button       
            // if (output5State=="off") {
            //   client.println("<p><a href=\"/5/on\"><button class=\"button\">ON</button></a></p>");
            // } else {
            //   client.println("<p><a href=\"/5/off\"><button class=\"button button2\">OFF</button></a></p>");
            // } 
               
            // // Display current state, and ON/OFF buttons for GPIO 4  
            // client.println("<p>GPIO 4 - State " + output4State + "</p>");
            // // If the output4State is off, it displays the ON button       
            // if (output4State=="off") {
            //   client.println("<p><a href=\"/4/on\"><button class=\"button\">ON</button></a></p>");
            // } else {
            //   client.println("<p><a href=\"/4/off\"><button class=\"button button2\">OFF</button></a></p>");
            // }

            // // Display current state, and ON/OFF buttons for GPIO 16  
            // client.println("<p>GPIO 16 - State " + output16State + "</p>");
            // // If the output4State is off, it displays the ON button       
            // if (output16State=="off") {
            //   client.println("<p><a href=\"/16/on\"><button class=\"button\">ON</button></a></p>");
            // } else {
            //   client.println("<p><a href=\"/16/off\"><button class=\"button button2\">OFF</button></a></p>");
            // }

            // // Display current state, and ON/OFF buttons for GPIO 0  
            // client.println("<p>GPIO 0 - State " + output0State + "</p>");
            // // If the output4State is off, it displays the ON button       
            // if (output0State=="off") {
            //   client.println("<p><a href=\"/0/on\"><button class=\"button\">ON</button></a></p>");
            // } else {
            //   client.println("<p><a href=\"/0/off\"><button class=\"button button2\">OFF</button></a></p>");
            // }
            // client.println("</body></html>");
            
            #include "webserver.h"
            
            void renderInitializeHtml() {
                 // Display the HTML web page
                client.println("<!DOCTYPE html><html>");
                client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
                client.println("<link rel=\"icon\" href=\"data:,\">");
                // CSS to style the on/off buttons 
                // Feel free to change the background-color and font-size attributes to fit your preferences
                client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
                client.println(".button { background-color: #195B6A; border: none; color: white; padding: 16px 40px;");
                client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
                client.println(".button2 {background-color: #77878A;}</style></head>");
            }

            void renderOpenBody() {
                // Web Page Heading
            client.println("<body><h1>ESP8266 Web Server</h1>");
            }

            void renderCloseBody() {
                // Web Page Heading
            client.println("</body></html>");
            }
            void renderBtn(String pinState, int pinNo) {
            client.println("<p>GPIO 5 - State " + pinState + "</p>");
            // If the output5State is off, it displays the ON button       
            if (pinState == "off") {
              //client.println("<p><a href=\"/pinNo/on\"><button class=\"button\">ON</button></a></p>");
              client.println("<p><a href=\"/" + pinNo + "/on\"><button class=\"button button2\">OFF</button></a></p>");
            } else {
              client.println("<p><a href=\"/" + pinNo + "/off\"><button class=\"button button2\">OFF</button></a></p>");
            } 
            }