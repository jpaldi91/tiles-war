t=main
o=main.o
z=$(c)

cflags-c =-D_REENTRANT -I/usr/include/SDL2 -I/usr/include/libdrm
cflags-d = $(cflags-c) -march=native -O0 -Wall -pedantic -g
cflags-r = $(cflags-c) -march=native -O2 -Wall -pedantic -Werror
ldlibs =-O2 -lm -lSDL2 -lpthread

debug:   cflags+=$(cflags-d)
release: cflags+=$(cflags-r)

cc =clang
cxx=clang++
rm=$(RM)
make=$(MAKE)
c=${o:.o=.cpp}

.PHONY: debug release clean
all:      debug
debug:   .depend.mk $(t)
release: .depend.mk $(t)

zip: Makefile $(z)
	zip -r $(t).zip $^
$(t): $(o)
	$(cc) $^ $(ldlibs) -o $@

$(o): %.o: %.cpp
	$(cc) $(cflags) -c $< -o $@
.depend.mk: $(C) Makefile
	$(cc) -MM $(cflags) $(c) > .depend.mk
clean:
	$(rm) $(t) $(o)
-include .depend.mk
