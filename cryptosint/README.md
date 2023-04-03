# CryptOSINT

## Prompt

A group of people have been harrassing my friend (instagram.com/sirbedeverebobcat). We recovered this zip file; can you help us track down the group and figure out what their mission is?

## Solving the Challenge

- Trying to unzip the recovered.zip file results in a prompt for a password so we will come back to that.
- Going to the instagram link and looking around, we see a singular post.
- Clicking on the post and examining the comments, we see a johnnyinsta524288 commenting.
- Going to their user profile which also has a single post, we click on that and see them talking about Folsom Prison Blues at the building in the photo.
- The building in the photo is Baker Center at Ohio University.
- Searching for "Folsom Prison Blues Ohio Univeristy" on youtube has someone playing at Baker Center.
- The comment on that video gives the password to the zip file which gives a txt file of base64. 
- Decode the file which results in an image.
- Going back to the link in johnnyinsta524288's bio, the endpoint gives instructions on how to get something out of their images.
- Now we assume something is hidden in the image and that something visible on the image is the passphrase.
- Make sure steghide is installed.
- We can check to see if their is data hidden with:
```
steghide --info decoded-20230403175005.jpeg
```
- Say yes to try to get information and enter the passphrase which is the numbers in the image.
- Now we can actually extract 
```
steghide --extract -sf decoded-20230403175005.jpeg -p 177013228922
```

