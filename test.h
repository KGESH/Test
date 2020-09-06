#ifndef TEST_H
#define TEST_H
#include <QObject>
#include <QTime>
#include <QDate>


class Test: public QObject
{
    Q_OBJECT
public:
    Test();
    virtual ~Test(){
    }

    void setDate();
    Q_INVOKABLE QString getDate();
    void setTime();
    Q_INVOKABLE QString getTime();

signals:
    void dateChanged();

private:
    QString date;
    QString time;

};

#endif // TEST_H
