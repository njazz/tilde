#include <QString>
#include <QtTest>

//#include <QGRaphicsObject>

//#include "../qtpd_gui/graphicobjects/UIObject.h"

#include "../qtpd_gui/properties/PropertyList.h"

using namespace qtpd;

class Qtpd_tests : public QObject {
    Q_OBJECT

public:
    Qtpd_tests();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    //    void UIObjectTest();
    void propertyTestDataTypes();
    void propertyTestEscape();
    void propertyTestLoad();
};

Qtpd_tests::Qtpd_tests()
{
}

// ----------

void Qtpd_tests::initTestCase()
{
}

void Qtpd_tests::cleanupTestCase()
{
}

// ----------

void Qtpd_tests::propertyTestDataTypes()
{
    PropertyList* l = new PropertyList;

    l->create("bool", "Group", "0.1", true);
    l->create("string", "Group", "0.1", QString("string"));
    l->create("stringlist", "Group", "0.1", QString("1 2 3").split(" "));
    l->create("color", "Group", "0.1", QColor(255, 192, 168, 128));
    l->create("size", "Group", "0.1", QSize(30, 70));
    l->create("sizef", "Group", "0.1", QSizeF(30, 70));
    l->create("point", "Group", "0.1", QPoint(30, 70));
    l->create("pointf", "Group", "0.1", QPointF(30, 70));

    QVERIFY(((l->get("bool")->asBool()) == true));
    QVERIFY(((l->get("string")->asQString()) == "string"));
    QVERIFY(((l->get("stringlist")->asQStringList()) == QString("1 2 3").split(" ")));
    QVERIFY(((l->get("color")->asQColor()) == QColor(255, 192, 168, 128)));
    QVERIFY(((l->get("size")->asQSize()) == QSize(30, 70)));
    QVERIFY(((l->get("sizef")->asQSizeF()) == QSizeF(30, 70)));
    QVERIFY(((l->get("point")->asQPoint()) == QPoint(30, 70)));
    QVERIFY(((l->get("pointf")->asQPointF()) == QPointF(30, 70)));
}

void Qtpd_tests::propertyTestEscape()
{
    QString testEscape = "1 2\n 3, 4. 5@ 6;";

    if (Property::unescapeString(Property::escapeString(testEscape)) != testEscape) {
        qDebug() << testEscape << Property::escapeString(testEscape) << Property::unescapeString(Property::unescapeString(testEscape));
    }

    QVERIFY(Property::unescapeString(Property::escapeString(testEscape)) == testEscape);
}

void Qtpd_tests::propertyTestLoad()
{
    PropertyList *l = new PropertyList();

    l->create("used", "Group", "0.1", "test");

    QString input = "object.name @used string value @unused string value";
    QString output = l->extractFromPdFileString(input);

    if ("object.name @unused string value" != output)
        {
            qDebug() << input << ">>" << output;
        }

    QVERIFY("object.name @unused string value" == output);
}

QTEST_APPLESS_MAIN(Qtpd_tests)
#include "qtpd_tests.moc"
