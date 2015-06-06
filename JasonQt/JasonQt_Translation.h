/*
    JasonQt_Translation

    Copyright: Jason

    Contact email: 188080501@qq.com

    GNU Lesser General Public License Usage
    Alternatively, this file may be used under the terms of the GNU Lesser
    General Public License version 2.1 or version 3 as published by the Free
    Software Foundation and appearing in the file LICENSE.LGPLv21 and
    LICENSE.LGPLv3 included in the packaging of this file. Please review the
    following information to ensure the GNU Lesser General Public License
    requirements will be met: https://www.gnu.org/licenses/lgpl.html and
    http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
*/

#ifndef __JasonQt_Translation_h__
#define __JasonQt_Translation_h__

// Qt lib import
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

// JasonQt lib import
#include "JasonQt_Net.h"

namespace JasonQt_Translation
{

class BaiduTranslation: public QObject
{
    Q_OBJECT

private:
    QString m_apiKey;

    JasonQt_Net::HTTP m_http;

public:
    BaiduTranslation(const QString &apiKey);

public slots:
    std::pair<bool, QString> translation(const QString &string, const QString &from = "auto", const QString &to = "auto");
};

}

#endif//__JasonQt_Translation_h__
