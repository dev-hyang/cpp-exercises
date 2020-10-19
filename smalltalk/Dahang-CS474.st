<?xml version="1.0"?>

<st-source>
<time-stamp>From VisualWorks® Personal Use Edition, 8.3 of July 28, 2017 on September 20, 2018 at 11:56:40 AM</time-stamp>


<component-created>
<name>Dahang-CS474</name> <type>package</type>
</component-created><!-- Package Dahang-CS474* -->


<component-created>
<name>Dahang-CS474</name> <type>package</type>
</component-created>

<class>
<name>Queue</name>
<environment>Smalltalk</environment>
<super>Core.Object</super>
<private>false</private>
<indexed-type>none</indexed-type>
<inst-vars>items </inst-vars>
<class-inst-vars></class-inst-vars>
<imports></imports>
<category></category>
<attributes>
<package>Dahang-CS474</package>
</attributes>
</class>

<methods>
<class-id>Queue class</class-id> <category>instance creation</category>

<body package="Dahang-CS474" selector="new">new	"Answer a newly created and initialized instance."	^super new initialize</body>
</methods>


<methods>
<class-id>Queue</class-id> <category>accessing</category>

<body package="Dahang-CS474" selector="items">items	^items</body>

<body package="Dahang-CS474" selector="items:">items: anObject	items := anObject</body>
</methods>

<methods>
<class-id>Queue</class-id> <category>operations</category>

<body package="Dahang-CS474" selector="dequeue:">dequeue: x	"comment stating purpose of message"	items isEmpty ifTrue:[^nil]				ifFalse:[^items removeLast].</body>

<body package="Dahang-CS474" selector="enqueue:">enqueue: x	"comment stating purpose of message"	items addFirst: x.	^self.</body>
</methods>

<methods>
<class-id>Queue</class-id> <category>initialize-release</category>

<body package="Dahang-CS474" selector="initialize">initialize	"Initialize a newly created instance. This method must answer the receiver."	super initialize.	" *** Edit the following to properly initialize instance variables ***"	items := OrderedCollection new.	" *** And replace this comment with additional initialization code *** "	^self</body>
</methods>



</st-source>
