

    
class SaveManager {		  
}


enum PageMode {}


class Notebook {
    string id;
    Container<Page> pages;
    Page* currentPage;
    Container<Label> labels;

public:
	
	Notebook() {
        id = "";
        currentPage = NULL;
    }
	   
	Notebook(int pageCount, PageMode mode) {
    }   
    
    string getId() {
        return id;
    }
    
    void setId(string id) {
        this->id = id;
    }
    
    Page* getCurrentPage() {
        return currentPage; 
    }
    
    Container<Label> getLabels() {
        return labels;
    }
    
    void addLabel(Label l);
    void deleteLabel(int pageNumber);
    void addPage(int position);
    void gotoPage(int position);
    void deletePage(int position);
    void saveToFile();
    void loadFromFile();
}
