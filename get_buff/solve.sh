#!/bin/sh
perl -e 'print "A" x 10 . "\x00" . "A" x 35 . "\x00"' | ./chall