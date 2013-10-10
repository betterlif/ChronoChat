/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil -*- */
/*
 * Copyright (c) 2013, Regents of the University of California
 *                     Yingdi Yu
 *
 * BSD license, See the LICENSE file for more information
 *
 * Author: Yingdi Yu <yingdi@cs.ucla.edu>
 */

#ifndef CONTACTPANEL_H
#define CONTACTPANEL_H

#include <QDialog>

namespace Ui {
class ContactPanel;
}

class ContactPanel : public QDialog
{
    Q_OBJECT

public:
    explicit ContactPanel(QWidget *parent = 0);
    ~ContactPanel();

private:
    Ui::ContactPanel *ui;
};

#endif // CONTACTPANEL_H