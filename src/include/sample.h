#ifndef PROJECT_NAME_SAMPLE_H
#define PROJECT_NAME_SAMPLE_H


namespace sample_lib {
    class sample {
    private:
        int value;
    public:
        explicit sample(int value_) : value(value_) {}

        int get_value();
    };
}


#endif //PROJECT_NAME_SAMPLE_H
