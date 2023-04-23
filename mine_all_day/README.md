# Mine All Day

## Author

[Justin Garey](https://github.com/Justin-Garey)

## Prompt

I hid my flag in a cave somewhere, can you find it? It was left on a sign I think. 

## Setup

Hide a flag somewhere in a Minecraft world that has lots of chunks generated. Using mcexplore works well.

Running the Minecraft server
```
java -Xmx4000M -Xms4000M -jar minecraft_server.jar nogui
```

## Solving the Challenge

Note: Minecraft is not needed to solve.

[Download the world](https://drive.google.com/drive/folders/17ErOPU4ravrtU7mHpVcmxltBY3x9g_fs?usp=share_link)

Using the anvil-parser in Python, we can find and see the data of signs in the world. 

## References

- https://github.com/DMBuce/mcexplore

## Flag

BobcatCTF{I_re4l1y_L1ke_t0_gO_MiN1nG}