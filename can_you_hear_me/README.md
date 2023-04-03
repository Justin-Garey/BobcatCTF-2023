# Can You Hear Me?

## Author

[Justin Garey](https://github.com/Justin-Garey)

## Abstract

Steganography is the practice of concealing information in another message such as an image or audio file. One method for storing information in an audio file is to modify the least significant bit of each sample in the audio file. This is a common approach to hiding information as it is easy to do and to reverse.

## Prompt

Listen closely and you might just hear it.

## Setup

- First, we need an audio file to use for the challenge. Any audio file will do as long as it is long enough.
- The audio file then needs to be in wav format; if it is not already, use ffmpeg to convert it.
```
ffmpeg -i input.mp3 audio.wav
```
- Once we have the audio file, audio.wav, we can run create.py which will put information into the LSB of each sample in audio file.
```
import wave
import array

audio = wave.open("audio.wav", 'rb')
message = "BobcatCTF{Y0u_h34Rd_tH4t?}"
sample_width = audio.getsampwidth()
frame_bytes = bytearray(list(audio.readframes(audio.getnframes())))
bits = list(
    map(int, ''.join([bin(ord(i)).lstrip('0b').rjust(8, '0') for i in message])))
samples = array.array('h' if sample_width == 2 else 'B', frame_bytes)
for i, bit in enumerate(bits):
    samples[i] = samples[i] & -2 | bit
frames_modified = samples.tobytes()
with wave.open('flag.wav', 'wb') as modified_audio:
    modified_audio.setparams(audio.getparams())
    modified_audio.writeframes(frames_modified)
print('message hidden ...')
modified_audio.close()
audio.close()
```
- Now, flag.wav can be distributed.

## Solving the challenge

- It is possible to audibly notice that this kind of steganography was used, if not, this should still be a top guess for contestants.
- We can make a simple python script to read the LSB of each sample and use those to create letters.
- A solution may look similar to:
```
import wave
import struct
wav = wave.open("flag.wav", mode='rb')
frame_bytes = bytearray(list(wav.readframes(wav.getnframes())))
shorts = struct.unpack('H'*(len(frame_bytes)//2), frame_bytes)
extractedLSB = ""
for i in range(0, len(shorts)):
        extractedLSB += str(shorts[i] & 1 )
string_blocks = (extractedLSB[i:i+8] for i in range(0, len(extractedLSB), 8))
decoded = ''.join(chr(int(char, 2)) for char in string_blocks)
print(decoded[:500])
wav.close()
```

## References

- https://stackoverflow.com/questions/74583881/audio-steganography-using-lsb-causing-noise-in-audio-with-hidden-message
- https://medium.com/analytics-vidhya/get-secret-message-from-audio-file-8769421205c3
