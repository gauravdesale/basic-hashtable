class HashEntry {
private:
      int key;//this is the key to access the hash table with
      int value;//this is the value being outputted
public:
      HashEntry(int key, int value) {//constructor 
            this->key = key;//setting these values to be used later
            this->value = value;
      }
 
      int getKey() {
            return key;//getter methods here
      }
 
      int getValue() {
            return value;
      }
};
