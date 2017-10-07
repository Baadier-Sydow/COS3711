## Serializer Pattern

The serializer pattern whereby specializer Reader and Writer classes are used to read and write the state of an object.

You dont have to have both if it is not required.

The reader needs to be able to recreate the full state of the class and the writer needs to be able to persist the full state of the object.

In C++ it is common to overload the stream extraction and insertion operators &lt;&lt;&lt; and &gt;&gt;&gt;.

Typically, you would name the classes:

* Class
* ClassReader
* ClassWriter

A simple UML example:![](assets/unit-1/images/serializer.png)![](/assets/unit-1/images/serializer.png)



