## Understanding MetaObjects

MetaObjects are objects that describe the structure of another object. This is Qt's implementation of the reflection design pattern.

With reflection you are able to examine the properties and members of an object. This gives you an advantage as you are able to write general-purpose code that works against different classes.

All QObjects have MetaObjects. An any class that has a MetaObject supports reflection

QVariant is a general purpose store of value. It can be used instead of an explicitly declared type. In other words, it is a generic container.



