

class Ui {
	Notebook *currentNotebook;
	Notebook openedNotebooks[256];
	int currentNotebookNumber;
    //FileInterface
    void newNotebook();
    void openNotebook();
    void saveNotebook();
    void saveAsNotebook();
	void exit();
	//EditInterface
	void chancel();
	void repeat();
	void story();
	void copy();
	void paste();
	void cut();
	void clear();
	void clearPage();
	void pickAll();
	//ConnectionInterface
	void connect();
	void disconnect();
	//NotebookInterface
	void newPage();
	void previousPage();
	void nextPage();
	void gotoPage();
	void pasteNewPage();
	void pasteFromFile();
	void copyPage();
	void pastePage();
	void cutPage();
	void addLabel();
	void labelManager();
    void savePageState();
    void pageStateManager();
    void pageParams();
    void deletePage();
    void closeNotebook();
	//ImageInterface
	void resize();
	void changeColor();
	void hideArea();
	void showHiddenArea();
	//InstrumentsInterface
	void palitter();
	void eraser();
	void picker();
	void templates();
	void addTemplate();
	void text();
	//ServiceInterface
	void settings();
	void update();
	//HelpInterface
	void help();
	void about();
	//Other
	void switchNotebook();	
}
