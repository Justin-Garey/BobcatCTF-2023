import anvil
import os
from nbt import nbt

directory = './world/region'

debug = False

for filename in os.listdir(directory):

    region = anvil.Region.from_file(os.path.join(directory, filename))

    chunks = filename.split('.')
    bx = int(chunks[1]) * 32
    by = int(chunks[2]) * 32
    for cx in range(bx, bx + 32):
        for cy in range(by, by + 32):
            try:
                chunk = anvil.Chunk.from_region(region, cx, cy)
                for t in chunk.tile_entities:
                    for tag in t.tags:
                        if tag.name == "id" and "sign" in tag.value:
                            print(t)
            except:
                continue
