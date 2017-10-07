## Signals & Slots

Signals and slots are a way to publish and receive messages between objects. It is Qt's implementation of the Pub/Sub pattern.

A signal is pushed from one object and received in another objects slot.

Qt's model view pattern used for its widget is powered by this functionality.

A signal has a parameter list but no function body. It is emitted by the object of the class.

A typical binding is done in the following way:

```cpp
bool QObject::connect(senderQObjectPtr, SIGNAL(signalName(parameters)), receiverQObjectPtr, SLOT(slotName(parameters);
```

There is an optional connection type that I wont go into.

Resources:

* Ezust Chapter 8 \(page 275\)
* Voidrealms GUI version [https://www.youtube.com/watch?v=JtyCM4BTbYo](https://www.youtube.com/watch?v=JtyCM4BTbYo)
* Voidrealms non-GUI version [https://www.youtube.com/watch?v=zpZJ4vd7YqY](https://www.youtube.com/watch?v=zpZJ4vd7YqY)



