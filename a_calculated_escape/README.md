# A Calculated Escape

## Author

[Justin Garey](https://github.com/Justin-Garey)

## Abstract

Javascript is not type safe whatsoever. Using a very small set of characters, we can do anything we want in Javascript. 

## Prompt

I'm stuck in jail and the only way to escape is to solve this math problem. Inputting that should get us our way out! Here is the problem: (x! * 4.5)/ 3 = 718502400.

## Setup

The dockerfile makes use of an Ubuntu base and installs ncat and node. A port also needs to be exposed to be used in the netcat listener.

## Solving the Challenge

After solving for x (should be 12), put that number through jsfuck.com and send that to the netcat server.

## References

- http://www.jsfuck.com/