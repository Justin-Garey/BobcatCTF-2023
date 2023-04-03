# Can't Read Me

## Author

[Justin Garey](https://github.com/Justin-Garey)

## Abstract

Python code can be obfuscated but will still run the same. This means the assembly-esque version of the code will be the same.

## Prompt

I've hidden the flag in some code. You can't read the code and I don't think you ever will.

## Setup

Use this repo to obfuscate the code: https://github.com/Sl-Sanda-Ru/Py-Fuscate/.

This video explains this repository and how to reverse the obfuscation: https://youtu.be/XZj87tKIlik.

## Solving the Challenge

Basically, we want to view the disassembled form of the code since we can't view the actual code. The obfuscation process obfuscates a number of times so we have to keep doing this on the unwrapped code until we only have the base form of the code. Then we can view the assembly-esque form of that code to get the flag.

## References

- https://github.com/Sl-Sanda-Ru/Py-Fuscate/
- https://youtu.be/XZj87tKIlik
