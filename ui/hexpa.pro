TEMPLATE = app
QT = gui core 
CONFIG += debug
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
RESOURCES += hexpa.qrc
FORMS = ui/hexpa.ui

HEADERS = src/hexpa.h
SOURCES = src/hexpa.cpp \
src/main.cpp

debug {
 QT +=  widgets
}
