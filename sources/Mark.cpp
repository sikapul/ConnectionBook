

class Mark {
private:
    string name;
    int pageNumber;
public:	
	Mark() {
    }
	
	Mark(string name, int pageNumber) {
        this->name = name;
        this->pageNumber = pageNumber;
    }   
    
    void setName(string name) {
        this->name = name;
    }
    
        
    string getName() {
	    return name;    
    }
    
    int getPageNumber() {
        return pageNumber;
    }
};
