FROM ubuntu:latest

RUN apt update

RUN apt install -y ncat

RUN apt install -y nodejs

COPY ./app.js .

COPY ./flag.txt .

EXPOSE 4000

CMD ncat -lp 4000 -e "./bin/node backend_app.js"