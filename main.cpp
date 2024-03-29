﻿#include "../aqp/aqp.hpp"
#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName(app.translate("main", "Zipcodes"));
#ifdef Q_WS_MAC
    app.setCursorFlashTime(0);
#endif

    QTranslator translator;
    translator.load(AQP::applicationPathOf() + "/zipcodes_en.qm");
    app.installTranslator(&translator);

    MainWindow window;
    window.resize(800, 640);
    window.show();
    return app.exec();
}
