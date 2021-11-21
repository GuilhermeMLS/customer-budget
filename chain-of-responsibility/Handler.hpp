#ifndef HANDLER
#define HANDLER

template <typename T>

class Handler {
public:
    virtual Handler *setNext(Handler *handler) = 0;
    virtual void handle(T request) = 0;
};

#endif