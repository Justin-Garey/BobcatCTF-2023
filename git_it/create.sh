#!/bin/sh

rm -rf git-it

mkdir git-it

cp app.py git-it/app.py

cd git-it && git init

git add app.py && git commit -m "Initial commit"

pre=2573
post=9849

flag=$(tr -dc 'A-Za-z0-9!#$%&_' </dev/urandom | head -c 26)
sed -i "1s/.*/flag = \"$flag\"/" app.py

git commit -am "modified"

for NUM in $(seq $pre); do
    flag=$(tr -dc 'A-Za-z0-9!#$%&_' </dev/urandom | head -c 26)
    sed -i "1s/.*/flag = \"$flag\"/" app.py
    git commit -am "modified"
done

flag="BobcatCTF{D0_yUo_G1T_g!t?}"
sed -i "1s/.*/flag = \"$flag\"/" app.py
git commit -am "modified"

for NUM in $(seq $post); do
    flag=$(tr -dc 'A-Za-z0-9!#$%&_' </dev/urandom | head -c 26)
    sed -i "1s/.*/flag = \"$flag\"/" app.py
    git commit -am "modified"
done

git bundle create ../git-it.bundle --all
