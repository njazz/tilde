#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class qtpdGUI : public QObject
{
    Q_OBJECT

public:
    qtpdGUI();
    ~qtpdGUI();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

qtpdGUI::qtpdGUI()
{

}

qtpdGUI::~qtpdGUI()
{

}

void qtpdGUI::initTestCase()
{

}

void qtpdGUI::cleanupTestCase()
{

}

void qtpdGUI::test_case1()
{

}

QTEST_MAIN(qtpdGUI)

#include "tst_qtpdgui.moc"
