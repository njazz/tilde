#ifndef _PYEXAMPLEOBJECT_H
#define _PYEXAMPLEOBJECT_H

/*
 *
 *  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Research GmbH, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PyExampleObject.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-10
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"

#include <QObject>
#include <QStringList>
#include <QMainWindow>
#include <QPushButton>
#include <QVariant>
#include <QLayout>


class PyExampleObject : public QObject {

  Q_OBJECT

public:
  PyExampleObject();

public Q_SLOTS:

  //! example for passing a PyObject directly from Qt to Python (without extra mashalling) 
   

  void showInformation(const QString& str);

  QStringList readDirectory(const QString& dir);

  QMainWindow* createWindow();

  QObject* findChild(QObject* o, const QString& name);

  QVariantMap testMap();

};

#endif
