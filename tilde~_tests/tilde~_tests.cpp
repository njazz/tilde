#include <QString>
#include <QtTest>

#include "PropertyList.h"

#include "fileparserconverter.h"
//#include "FileSaver.h"

using namespace tilde;

class Tilde_tests : public QObject {
    Q_OBJECT

public:
    Tilde_tests();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    //    void UIObjectTest();
    void propertyDataTypes();
    void propertyEscapeString();
    void propertyLoad();

    void propertyVec2Converters();

    void propertyCopy();
    //    void propertyCopy();
    //
    void patchControllerCopyObject();

    void fileParserEscapeString();
};

Tilde_tests::Tilde_tests()
{
}

// ----------

void Tilde_tests::initTestCase()
{
}

void Tilde_tests::cleanupTestCase()
{
}

// ----------

void Tilde_tests::propertyDataTypes()
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

    l->create("bool_str", "Group", "0.1", "1");
    QVERIFY(((l->get("bool_str")->asBool()) == true));
    l->set("bool_str","0");
    qDebug() << "bool" << l->get("bool_str")->asQString();
    QVERIFY(((l->get("bool_str")->asBool()) == false));


}

void Tilde_tests::propertyEscapeString()
{
    QString testEscape = "1 2\n 3, 4. 5@ 6;";

    if (Property::unescapeString(Property::escapeString(testEscape)) != testEscape) {
        qDebug() << testEscape << Property::escapeString(testEscape) << Property::unescapeString(Property::unescapeString(testEscape));
    }

    QVERIFY(Property::unescapeString(Property::escapeString(testEscape)) == testEscape);
}

void Tilde_tests::propertyLoad()
{
    PropertyList* l = new PropertyList();

    l->create("used", "Group", "0.1", "test");

    QString input = "object.name @used string value @unused string value";
    QString output = l->extractFromPdFileString(input);

    if ("object.name @unused string value" != output) {
        qDebug() << input << ">>" << output;
    }

    QVERIFY("object.name @unused string value" == output);
}

//void Tilde_tests::propertyCopy()
//{

//}

void Tilde_tests::propertyVec2Converters()
{
    PropertyList* l = new PropertyList();

    l->create("size", "Group", "0.1", "30 70");
    l->create("point", "Group", "0.1", "30 70");

    qDebug() << "size " << l->get("size")->asQSize();
    qDebug() << "size str l" << l->get("size")->asQStringList();

    QVERIFY(l->get("size")->asQSize() == QSize(30, 70));
    QVERIFY(l->get("point")->asQPoint() == QPoint(30, 70));
}

void Tilde_tests::propertyCopy()
{
    PropertyList* l = new PropertyList();

    l->create("source", "Group", "0.1", "30 70");

    Property a =  *l->get("source");
    qDebug() << a.asQString();

    Property* b = new Property(*l->get("source"));
    qDebug() << b->asQString();

    QVERIFY(a.asQPoint() == l->get("source")->asQPoint());
    QVERIFY(a.asQString() == l->get("source")->asQString());
}

void Tilde_tests::patchControllerCopyObject()
{
    //PatchWindowController *w = new PatchWindowController(0);

    //w->createObject("text @Text test object", QPoint(0,0));
}

void Tilde_tests::fileParserEscapeString()
{

    QString testEscape = "1 2\n 3, 4. 5@ 6;";

    if (FileParserConverter::unescapeString(FileParserConverter::escapeString(testEscape)) != testEscape) {
        qDebug() << testEscape << FileParserConverter::escapeString(testEscape) << FileParserConverter::unescapeString(FileParserConverter::unescapeString(testEscape));
    }

    QVERIFY(FileParserConverter::unescapeString(FileParserConverter::escapeString(testEscape)) == testEscape);

}

QTEST_APPLESS_MAIN(Tilde_tests)
#include "tilde~_tests.moc"
