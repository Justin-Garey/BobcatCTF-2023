# Get Buff

## Setup

- This challenge makes use of a stack overflow with two buffers declared one after the other.
- After creating the binary of the challenge, we need to make a docker image to serve it.
```
docker build -t time-and-relative-dimensions-in-space ./time_and_relative_dimensions_in_space/deploy
```
- To build the docker image
```
docker run --privileged -p 9000:9000 -d time-and-relative-dimensions-in-space:latest
```
- To run the docker image

## Solving the Challenge

- The only thing given to the contestant is the challenge binary.
- Using the binary in a decompiler such as Ghidra, the vulnerability should be noticed.
- GDB could also be used to figure out where data is placed in the stack when reading into the buffer.
- The goal is to overwrite the return address of the main function to point to the flag function.
- This can be done by writing past the reading buffer and into the return address that is on the stack.