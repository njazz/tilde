#ifndef CM_OPENFILEPROXY_H
#define CM_OPENFILEPROXY_H

#include <QObject>

namespace qtpd{
////
/// \brief temporary proxy for patch opening
/// \details this is needed by abstraction loading mechanism. TODO fix to normal pattern later
/// \param parent
///
class OpenFileProxy : public QObject {
    Q_OBJECT
public:
    explicit OpenFileProxy(QObject* parent = 0);

signals:

public slots:

    static void openAbstraction(QString absName);
};
}
#endif // CM_OPENFILEPROXY_H
