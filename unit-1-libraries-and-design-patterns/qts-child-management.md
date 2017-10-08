## Qt's Child Management

Many of Qt's important classes are derived from QObject. QObject's can have one parent and an arbitrary amount of children.

This is an example of a composite pattern. Each child will be a QObject or derived from QObject.

```cpp
objectA->setParent(objectB);
```

We can return the children in different ways

```cpp
// Returned in the order they were added
const QObjectList& QObject::children() const

// Returns a specific Type of object and a String can be used to get a specific one
QList<Type> parentObj.findChildren<Type> (const QString& name = QString() ) const

// An example of the above

QList<Customer> custList = parent.findChildren<Customer*>();
foreach (const Customer* current, custList){
    // do something with it
    current->toString();
}
```





