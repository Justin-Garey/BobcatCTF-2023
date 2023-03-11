# A Calculated Escape

### Description

I'm stuck in jail and the only way to escape is to solve this math problem. Inputting that should get us our way out! Here is the problem: (x! * 4.5)/ 3 = 718502400

### Solution

After solving for x (should be 12), put that number through jsfuck.com and send that to the netcat server.

### Setup

The dockerfile makes use of an Ubuntu base and installs ncat and node. A port also needs to be exposed to be used in the netcat listener.