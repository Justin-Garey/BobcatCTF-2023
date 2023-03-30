#!/bin/sh

unzip git-it.zip

git clone git-it.bundle

cd git-it

git log | grep 'commit' | cut -d " " -f2 | while read line; do git show $line; done | grep "BobcatCTF"