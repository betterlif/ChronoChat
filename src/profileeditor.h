/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil -*- */
/*
 * Copyright (c) 2013, Regents of the University of California
 *                     Yingdi Yu
 *
 * BSD license, See the LICENSE file for more information
 *
 * Author: Yingdi Yu <yingdi@cs.ucla.edu>
 */

#ifndef PROFILEEDITOR_H
#define PROFILEEDITOR_H

#include <QDialog>
#include <QtSql/QSqlTableModel>

#ifndef Q_MOC_RUN
#include "contact-manager.h"
#include <ndn-cpp-dev/security/key-chain.hpp>
#endif

namespace Ui {
class ProfileEditor;
}

class ProfileEditor : public QDialog
{
    Q_OBJECT

public:
  explicit ProfileEditor(ndn::shared_ptr<chronos::ContactManager> contactManager, 
                         QWidget *parent = 0);
  
  ~ProfileEditor();

  void
  setCurrentIdentity(const ndn::Name& name)
  { m_currentIdentity = name; }
  
private slots:
  void
  onAddClicked();

  void
  onDeleteClicked();

  void
  onOkClicked();

  void
  onGetClicked();

signals:
  void
  noKeyOrCert(const QString&);

private:
  Ui::ProfileEditor *ui;
  QSqlTableModel* m_tableModel;
  ndn::shared_ptr<chronos::ContactManager> m_contactManager;
  ndn::shared_ptr<ndn::KeyChain> m_keyChain;
  ndn::Name m_currentIdentity;
};

#endif // PROFILEEDITOR_H
