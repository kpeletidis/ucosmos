CC = gcc
CFLAGS = -g -O2 -Wall
#LDFLAGS = $(shell curl-config --libs)
CLEANFILES = core core.* *.core *.o temp.* *.out *~ *.dSYM
PROG =	ucosmos

SOURCES = ucosmos.c \
          uc_node.c

HEADERS = ucosmos.h \
          uc_common.h \
          uc_node.h

all:	${PROG}

${PROG}:	${SOURCES} ${HEADERS}
		${CC} ${CFLAGS} -o $@ ${SOURCES} ${LDFLAGS}

clean:
		rm -rf ${PROG} ${CLEANFILES}
