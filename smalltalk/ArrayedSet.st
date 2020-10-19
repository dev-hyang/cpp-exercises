

contains: anObject
	"Tell if anObject is included in the Set or not"
	(items isEmpty) ifTrue: [^false].
	items do:[:item|(item = anObject) ifTrue:[^true].].
	^false.
