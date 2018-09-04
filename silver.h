#ifndef SILVER_H
#define SILVER_H

#include "money.h"

class Silver : public Money
{
public:
    Silver(qreal w, qreal h, const QPointF &pos,
           const QPixmaps2 &pixs2, QGraphicsScene *scene,
           QGraphicsItem *parent = nullptr);
    ~Silver(){}
    const QString & name() const;
    const int value() const;

protected:
    int m_value;
    const QString m_name;
};

#endif // SILVER_H
