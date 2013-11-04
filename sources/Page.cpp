

class Page {
    Image image;
    Container<PageState> states;
    BackGroundGenerator bgGenerator;
    int number;
    
    void addState(PageState ps);
    void deleteState(int stateNumber);
    void saveToFile();
    void loadFromFile();
}
