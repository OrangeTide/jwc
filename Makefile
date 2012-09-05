CFLAGS ?= -Wall -W -g
all ::
clean ::
tests ::
.PHONY : all clean tests
#
%-peg.c : %.peg
	peg -v -o $@ $<
#
OBJS_jwc := jwc.o w.o
jwc : $(OBJS_jwc)
w.o : w.c w-peg.c
clean :: ; $(RM) jwc $(OBJS_jwc) w-peg.c
all :: jwc
tests :: jwc test.w
	./jwc <test.w
	./jwc <square.w
	./jwc <dist.w
