# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

#TARGET = galton_board

QMAKE_CXXFLAGS += -fopenmp
QMAKE_LFLAGS += -fopenmp
LIBS += -fopenmp
LIBS+=-lgomp

HEADERS = \
    binom_galton.h \
    factorial_of_num.h \
    binom_newton.h \
    binom_struct.h \
    binom_work.h \
    ss_time.h

SOURCES = \
    binom_galton.c \
    factorial_of_num.c \
    main.c \
    binom_newton.c \
    binom_struct.c \
    binom_work.c \
    ss_time.c

INCLUDEPATH = \

DISTFILES += \
    autor \
    galton_board.pro.user
