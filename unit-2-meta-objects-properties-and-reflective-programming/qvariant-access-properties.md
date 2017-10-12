## QVariant Access Properties

QVariant allows you to pull the value of any property without knowing its current type.

```cpp
QVariant QObject::property(QString propertyName);
```

A QVariant once created will remember its type. It has a toString\(\) that works with most supported types.

With class below as a base

```cpp
class Person : public QObject{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY namechange)

    public:
        Person(QObject* parent = 0);
        void setName(QString s);
        QString getName();

    signals:
        void nameChange();

    private:
        QString name;

}
```

We could use QVariant in the following way:

```cpp
int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);
    
    Person human;
    human.setName("Baadier");
    // QVariant can hold whatever it likes
    QVariant name = human.property("name");
    
    // Using the toString method on generic object
    QString baadier = name.toString();
    
    // And usable now
    cust.setName(baadier);
    
    // Comapare the class type but can be used for generic comparisons
    QCOMPARE(human.getType(), Person);

    return app.exec();
}
```





