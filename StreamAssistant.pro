
# Qt6: Always include core, gui, and widgets
QT += core gui widgets

CONFIG += c++26


# Enforce Qt6 deprecation warnings
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

RC_ICONS = icon.ico

SOURCES += \
    checkboxwidget.cpp \
    clickablelabel.cpp \
    comboboxwidget.cpp \
    filesdialog.cpp \
    labelwidget.cpp \
    lineeditwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    mywidget.cpp \
    plaintextwidget.cpp \
    radiobuttonwidget.cpp \
    spinboxwidget.cpp

HEADERS += \
    checkboxwidget.h \
    clickablelabel.h \
    comboboxwidget.h \
    filesdialog.h \
    labelwidget.h \
    lineeditwidget.h \
    mainwindow.h \
    mywidget.h \
    plaintextwidget.h \
    radiobuttonwidget.h \
    spinboxwidget.h

FORMS += \
    filesdialog.ui \
    mainwindow.ui \
    test.ui


TRANSLATIONS += \
    StreamAssistant_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


# Qt6: Remove .pro.user from DISTFILES (user-specific)
DISTFILES +=


HEADERS += \
    checkboxwidget.h \
    comboboxwidget.h \
    filesdialog.h \
    labelwidget.h \
    lineeditwidget.h \
    mainwindow.h \
    mywidget.h \
    plaintextwidget.h \
    radiobuttonwidget.h \
    spinboxwidget.h

FORMS += \
    filesdialog.ui \
    mainwindow.ui \
    test.ui

TRANSLATIONS += \
    StreamAssistant_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    StreamAssistant.pro.user
