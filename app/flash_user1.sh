#!/bin/bash
esptool.py --port /dev/ttyUSB0 --baud 230400 write_flash 0x01000 ../bin/upgrade/user1.4096.new.6.bin --flash_size 32m --flash_freq 40m
