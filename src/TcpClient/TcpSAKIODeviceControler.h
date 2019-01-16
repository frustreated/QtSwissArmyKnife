﻿/*******************************************************************************
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2018 wuhai persionnal. All rights reserved.
*******************************************************************************/
#ifndef TCPSAKIODEVICECONTROLER_H
#define TCPSAKIODEVICECONTROLER_H

#include <QWidget>
#include <QHBoxLayout>
#include <QApplication>
#include <QDebug>
#include <QHostInfo>
#include <QNetworkInterface>

#include "SAKIODeviceControler.h"

namespace Ui{
class TcpSAKIODeviceControler;
}

class TcpSAKIODeviceControler : public SAKIODeviceControler
{
    Q_OBJECT
public:
    TcpSAKIODeviceControler(QWidget *parent = Q_NULLPTR);
    ~TcpSAKIODeviceControler();

    virtual void afterDeviceOpen();
    virtual void afterDeviceClose();
public slots:
    virtual void open();
    virtual void refresh();
private:
    Ui::TcpSAKIODeviceControler *ui = nullptr;
    void initUi();
private slots:
    void setLocalePort(QString port);
    void setPeerPort(QString port);
    void setPeerAddress(QString address);
signals:
    void need2refresh();
};

#endif
