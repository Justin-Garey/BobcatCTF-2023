# Get Buff

## Setup

- This challenge makes use of a stack overflow with two buffers declared one after the other.
- After creating the binary of the challenge, we need to make a docker image to serve it.
```
docker build -t get-buff ./get_buff/deploy
```
- To build the docker image
```
docker run --privileged -p 9000:9000 -d get-buff:latest
```
- To run the docker image

## Solving the Challenge

- The only thing given to the contestant is the challenge binary.
- Using the binary in a decompiler such as Ghidra, the vulnerability should be noticed.
- GDB could also be used to figure out where data is placed in the stack when reading into the buffer.
- The goal is to make the two buffers equal when strcmp compares them.
- This can be done by placing a null byte in the correct spot of one or buffers.