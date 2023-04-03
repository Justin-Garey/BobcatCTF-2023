# OU-2023-CTF
Ohio University 2023 CTF Event

## Challenge Categories
- starter
- web
- crypto
- rev
- pwn
- misc

## Challenges List
- The Logs Say I Cannot Play
  - My friend took me off the whitelist for their Minecraft server. Could you put me back on there since you can play on the server? Not sure if it helps, but they are running it on java 8 which has some sort of logging issue.
- Can't Read Me
  - I've hidden the flag in some code. You can't read the code and I don't think you ever will.
- A Calculated Escape
  - I'm stuck in jail and the only way to escape is to solve this math problem. Inputting that should get us our way out! Here is the problem: (x! * 4.5)/ 3 = 718502400.
  - Port 4000
- Get Buff
  - Port 9000
- Time and Relative Dimensions in Space
  - Port 1112
- Can You Hear Me
  - Listen closely and you might just hear it.
- Find Me
  - It took some effort to hide this flag. Can you find it?
- Git It
  - I accidentally pushed the flag up one time. I've lost it since then. Could you retrieve it for me?
- Heaps of Fun
  - Port 5678
- Mine All Day
  - I hid my flag in a cave somewhere, can you find it? It was left on a sign I think.
- So Shocked
  - I would be shocked if you could use the shell to get this flag.
- Base Exclusive
  - So I encoded this and I think I accidentally did it twice. Please help me.
- CryptOSINT
  - A group of people have been harrassing my friend (instagram.com/sirbedeverebobcat). We recovered this zip file; can you help us track down the group and figure out what their mission is?

## Connection Info
- get-buff: nc 18.116.26.88 9000
- time-and-relative-dimensions-in-space: nc 18.116.26.88 1112
- heaps-of-fun: nc 18.116.26.88 5678
- a-calculated-escape: nc 18.116.26.88 4000

## Useful Docker Commands
- Stop the most recent image
```
docker stop $(docker ps -q)
```
- Get the IP Address of the most recent image
```
sudo docker container inspect $(docker ps -q) | grep -i IPADDRESS
```

## Contributors

[![Justin Garey Avatar Image](./_contributors/Justin-Garey_avatar.png)](https://github.com/Justin-Garey)
[![Alex Williams Avatar Image](_contributors/awisticky_avatar.png)](https://github.com/awisticky)
[![Owen Salyer Avatar Image](./_contributors/osalyer02_avatar.png)](https://github.com/osalyer02)
