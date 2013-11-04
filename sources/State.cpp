

class PageState {
private:
    string name;
    Page state;

public:	
	PageState() {
    }
	
	PageState(string name, Page state) {
        this->name = name;
        this->state = state;
    }   
    
    void setName(string name) {
        this->name = name;
    }
    
        
    string getName() {
	    return name;    
    }
    
    Page getState() {
        return state;
    }
}; 
