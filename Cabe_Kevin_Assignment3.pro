SOURCES += \
    main.cpp \
    button.cpp \
    label.cpp

HEADERS += \
    button.h \
    label.h

TEMPLATE = app
TARGET = BANK_ACCOUNT

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
