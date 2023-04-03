# Git It

## Author

[Justin Garey](https://github.com/Justin-Garey)

## Setup

A shell script was used to create the git repository and commit an abundant amount of times, add the flag, remove the flag, and commit another abundant amount of times.

## Solving the Challenge

- Step one is to clone the repository from the bundle.
- After we have the repository and take a look, we should know that it has something to do with git.
- Looking at the amount of commits shows that we cannot manually check all of them.
- The simplest way to do this is to get all of the commit ids and show the changes.
- If you pipe the changes to grep and look for the flag identifier "BobcatCTF", then the flag will be shown.
