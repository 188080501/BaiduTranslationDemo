#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "JasonQt/JasonQt_Translation.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *m_ui;
    JasonQt_Translation::BaiduTranslation m_translation;

public:
    explicit MainWindow(QWidget *parent = NULL);

    ~MainWindow(void);

public slots:
    void translation(void);
};

#endif // MAINWINDOW_H
