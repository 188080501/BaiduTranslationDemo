#-------------------------------------------------
#
# Project created by QtCreator 2015-05-26T09:29:09
#
#-------------------------------------------------

QT       += core gui network concurrent multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BaiduTranslationDemo
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        MainWindow.cpp \
    JasonQt/JasonQt_Net.cpp \
    JasonQt/JasonQt_Translation.cpp

HEADERS  += MainWindow.h \
    JasonQt/JasonQt_Net.h \
    JasonQt/JasonQt_Translation.h

FORMS    += MainWindow.ui
