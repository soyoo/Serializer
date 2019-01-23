#ifndef STRINGSERIALIZER_H
#define STRINGSERIALIZER_H

#include "abstractserializer.h"

class StringSerializer : public AbstractSerializer
{
public:
    StringSerializer();

    QVariant fromString(const QString &value, const QMetaType::Type &type) const;
    QString toString(const QVariant &value) const;

private:
    QList<int> toListInt(const QString &s) const;
    QString fromList(const QList<int> &list) const;

    QList<qreal> toListReal(const QString &s) const;
    QString fromList(const QList<qreal> &list) const;
};

#endif // STRINGSERIALIZER_H