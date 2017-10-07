## Qt's Child Management

Many of Qt's important classes are derived from QObject. QObject's can have one parent and an arbitrary amount of children.

This is an example of a composite pattern. Each child will be a QObject or derived from QObject.

```cpp
objectA->setParent(objectB);
```



