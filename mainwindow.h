#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QLineEdit>
#include <QComboBox>
#include <QRadioButton>
#include <QPushButton>
#include <QGridLayout>
#include <QFileDialog>

#include <qdebug.h>

#include <stdio.h>
#include <iostream>
#include <fstream>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow (QWidget *parent = 0);
    ~MainWindow ();

private slots:
    void save ();
    void start ();
    void stop ();
    void about ();
    void reload ();
    void settings ();

private:
    void init ();

    QTextEdit *te_message;
    QLineEdit *le_sendMsg;
    QComboBox *c_sequence;
    QRadioButton *s_sendAck;
    QPushButton *pb_sendMsg;
    QWidget *w_centralWidget;
    QGridLayout *lay_main;
    QStatusBar *sb_statusBar;
    QToolBar *tb_toolBar;
};

#endif // MAINWINDOW_H
