TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += heatmap.h lodepng.h
SOURCES += main.cpp heatmap.c lodepng.cpp

win32 {
INCLUDEPATH += C:\opencv\release\install\include
LIBS += C:\opencv\release\install\x86\mingw\bin\libopencv_*.dll
}
