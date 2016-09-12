TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Engine.cpp \
    Parser.cpp \
    FileUtils.cpp \
    Grammar.cpp \
    Compiler.cpp \
    CompilationHandler.cpp

HEADERS += \
    Grammar.h \
    Engine.h \
    Defines.h \
    Parser.h \
    FileUtils.h \
    Compiler.h \
    Berserk.h \
    CompilationHandler.h
