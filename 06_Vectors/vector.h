// Header files & Template classes

template<typename T> // T is some generic type // int, student, bool
class Vector{
    // Data Members
    T *arr;
    int cs; // Current size
    int ms; // Max size
public:
    // Constructor, Destructor, Methods
    Vector(int max_size=1){
        cs = 0; 
        ms = max_size;
        arr = new T[ms];
    }

    void push_back(const T d){
        // Two cases
        if(cs==ms){
            // Create a new array and delete the old one, double the capacity
            T *oldArr = arr;
            ms = 2*ms;
            arr = new T[ms];
            // Copy the elements
            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }
            // Delete
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back(){
        if(cs>=0){
            cs--; 
        }      
    }

    bool isEmpty() const{
        return cs==0;
    }

    // Front, Back, At(i), []
    T front() const{
        return arr[0];
    }

    T back() const{
        return arr[cs-1];
    }
    
    T at(int i) const{
        return arr[i];
    }
    
    int size() const{
        return cs;
    }
    
    int capacity() const{
        return ms;
    }

    T operator[](const int i) const{
        return arr[i];
    }
};