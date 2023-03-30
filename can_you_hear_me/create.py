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
