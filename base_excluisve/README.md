# Base Exclusive

## Author

[Alex Williams](https://github.com/awisticky)

## Prompt

So I encoded this and I think I accidentally did it twice. Please help me.

## Solving the Challenge

- Taking the encrypted text from the file, we decode it using base64. That gives us the middle part of the flag. 
- The middle part hints at an xor, so we xor the file with a brute force attack.
- Turns out the key is 1 and we get the rest of the flag.
