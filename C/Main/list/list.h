
struct tagItem {
	void* p;
	struct tagItem* prev;
	struct tagItem* next;
};
typedef struct tagItem Item;

int getCount();
void findItem (const char *s);
void printList();
void delItemFromEnd ();
void addItem (void* s);
