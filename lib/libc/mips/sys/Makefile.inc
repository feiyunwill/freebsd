# $FreeBSD$

SRCS+=	trivial-vdso_tc.c

MDASM=  Ovfork.S brk.S cerror.S exect.S \
	sbrk.S syscall.S

# Don't generate default code for these syscalls:
NOASM+=	vfork.o
