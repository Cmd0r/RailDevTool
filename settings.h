#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QWidget>

class settings : public QWidget
{
    Q_OBJECT
public:
    explicit settings(QWidget *parent = 0);

signals:

public slots:
};

#endif // SETTINGS_H