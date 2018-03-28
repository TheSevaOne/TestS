include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

DEFINES += INPUTDIR=\\\"$$PWD/input\\\"
HEADERS +=  \
    ../app/common.h\
      ../app/text/text.h\
    ../app/text/_text.h\
fibonachi_test.h

SOURCES +=     main.cpp \
 ../app/load.c\
../app/show.c\
../app/shownum.c\
../app/text/cursors.c\
../app/text/append_line.c\
../app/text/process_forward.c\
../app/text/create_text.c\
../app/text/remove_all.c\
../app/text/tracer.c\
../app/save.c\
../app/text/process_forward_extra_option.c

INCLUDEPATH += ../app
