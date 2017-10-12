## Q\_PROPERTY Macro - QObject Properties

Q\_PROPERTY gives you an alternative way to access data members albeit at a speed trade off.

You make a property read only by omitting a WRITE function and add a signal when it updates by adding a NOTIFY tag.

The generic syntax is as follows:

```cpp
// Basic example. NB no semi-colon
Q_PROPERTY(type name READ getFunction WRITE setFunction NOTIFY signalFunction)

// Additional properties but not useful for the context of this course
(RESET resetFunction DESIGNABLE bool SCRIPTABLE bool STORED bool)
```

A example of a class that implements Q\_PROPERTY

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



