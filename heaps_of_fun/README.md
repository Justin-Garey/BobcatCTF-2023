# Heaps of Heaps

## Setup

- This challenge makes use of a heap overflow with two buffers declared one after the other.
- After creating the binary of the challenge, we need to make a docker image to serve it.
```
docker build -t heaps-of-fun ./heaps-of-fun/deploy
```
- To build the docker image
```
docker run --privileged -p 9000:9000 -d heaps-of-fun:latest
```
- To run the docker image

## Solving the Challenge

- The only thing given to the contestant is the challenge binary.
- Using the binary in a decompiler such as Ghidra, the vulnerability should be noticed.
- The goal is to overwrite one of the buffers to be the name of the file containing the flag.
- This is done by figuring out the distance between the two buffers then writing far enough from the first one to write into the second.