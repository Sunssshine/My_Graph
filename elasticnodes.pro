QT += widgets

HEADERS += \
        edge.h \
        node.h \
    mainwindow.h \
    myaction.h \
    myscene.h \
    arrowhead.h \
    renamedialog.h \
    aboutwindow.h \
    theorywindow.h \
    dijkstraresults.h \
    dijkstratheory.h \
    helpbrowser.h

SOURCES += \
        edge.cpp \
        main.cpp \
        node.cpp \
    mainwindow.cpp \
    myaction.cpp \
    myscene.cpp \
    arrowhead.cpp \
    renamedialog.cpp \
    aboutwindow.cpp \
    theorywindow.cpp \
    dijkstraresults.cpp \
    dijkstratheory.cpp \
    helpbrowser.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/graphicsview/elasticnodes
INSTALLS += target

FORMS += \
    mainwindow.ui \
    aboutwindow.ui \
    theorywindow.ui \
    dijkstraresults.ui \
    dijkstratheory.ui

DISTFILES +=

RESOURCES += \
    images.qrc \
    help_res.qrc
