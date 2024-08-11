class TestCard {
    private:
        int value;
        char suit;
    public:
        int get_value() {
            return this->value;
        }
        char get_suit() {
            return this->suit;
        }
        
        void set_value(int given_value) {
            this->value = given_value;
        }
        void set_suit(char given_suit) {
            this->suit = given_suit;
        }
};