FROM ubuntu:latest

RUN apt update

RUN apt install -y ncat

RUN apt install -y nodejs

COPY ./app.js .

COPY ./flag.txt .

EXPOSE 4000

CMD ncat -lkp 4000 -w 10 -e "./bin/node app.js"

# FROM ubuntu:20.04

# ENV DEBIAN_FRONTEND=noninteractive

# RUN apt-get -y update && apt-get install -y \
# autoconf \
# bison \
# flex \
# gcc \
# g++ \
# git \
# libprotobuf-dev \
# libnl-route-3-dev \
# libtool \
# make \
# pkg-config \
# protobuf-compiler \
# uidmap \
# nodejs \
# && \
# rm -rf /var/lib/apt/lists/*

# RUN git clone https://github.com/google/nsjail.git && \
# cd nsjail && \
# make && \
# mv nsjail /bin && \
# cd / && \
# rm -rf nsjail

# RUN useradd -m ctf && \
# mkdir /chroot/ && \
# chown root:ctf /chroot && \
# chmod 770 /chroot

# COPY flag.txt ./

# RUN chmod 440 flag.txt

# WORKDIR /home/

# COPY app.js /home/

# RUN chown -R root:ctf . && \
# chmod 550 app.js

# EXPOSE 4000

# CMD /bin/nsjail -Ml --port 4000 --chroot / --user 99999 --group 99999 -- /home/app.js
