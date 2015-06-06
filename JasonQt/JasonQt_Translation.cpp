#include "JasonQt_Translation.h"

// BaiduTranslation
JasonQt_Translation::BaiduTranslation::BaiduTranslation(const QString &apiKey):
    m_apiKey(apiKey)
{ }

std::pair<bool, QString> JasonQt_Translation::BaiduTranslation::translation(const QString &string, const QString &from, const QString &to)
{
    QNetworkRequest request(QUrl("http://openapi.baidu.com/public/2.0/bmt/translate"));
    const QString format("client_id=%1&q=%2&from=%3&to=%4");
    QByteArray buf;

    request.setRawHeader("Content-Type", "application");

    if(!m_http.post(request, format.arg(m_apiKey, string, from, to).toUtf8(), buf)) { return { false, QString() }; }

    QJsonObject data(QJsonDocument::fromJson(buf).object());

    if(!data.contains("trans_result")
     || data["trans_result"].toArray().isEmpty()
     || !data["trans_result"].toArray()[0].toObject().contains("dst")) { return { false, QString() }; }

    return { true, data["trans_result"].toArray()[0].toObject()["dst"].toString() };
}
