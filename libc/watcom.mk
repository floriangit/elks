# OpenWatcom Makefile for ELKS C Library 

include watcom.inc

#NOTBUILT = \
	asm	    \
	debug	\
	gcc	    \
	math	\
	crt0.S	\

SUBDIRS =	\
	ctype	\
	error	\
	getent	\
	malloc	\
	misc	\
	net	    \
	regex	\
	stdio	\
	string	\
	termcap	\
	termios	\
	time	\
	# end of list

.PHONY: all
all:
	$(MAKE) -C system -f out.mk COMPILER=watcom LIB=out.lib
	for DIR in $(SUBDIRS); do $(MAKE) -C $$DIR COMPILER=watcom LIB=out.lib || exit 1; done
	wlib -n -b -fo libc.lib */*.lib

.PHONY: clean
clean:
	rm -f system/*.obj system/*.lib
	for DIR in $(SUBDIRS); do rm -f $$DIR/*.obj $$DIR/*.lib || exit 1; done
	rm -f libc.lib
