# @(#) $Id$ (XSE)
# $FreeBSD$

TARGET=	blink2

BOARD_TAG= atmega328

ARDUINO_DIR= /usr/local/arduino

AVRDUDE_ARD_PROGRAMMER= arduino
AVRDUDE_ARD_BAUDRATE= 57600
ARDUINO_PORT= /dev/arduino

include $(ARDUINO_DIR)/lib/Arduino.mk

CPPFLAGS+= -Werror
