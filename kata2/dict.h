
typedef struct dictElement {
	char *key;
	void *value;
} DictElement;

typedef struct dict {
	DictElement *dictionary;
	insigned int size;
} Dict;

Dict * initDictionary (unsigned int)