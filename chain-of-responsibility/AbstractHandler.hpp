#ifndef ABSTRACT_HANDLER
#define ABSTRACT_HANDLER

#include <string>
#include "Handler.hpp"

template <typename T>

class AbstractHandler : public Handler<T> {
private:
    Handler<T> *nextHandler{};

public:
    AbstractHandler() : nextHandler(nullptr) {};

    Handler<T> *setNext(Handler<T> *handler) override {
        this->nextHandler = handler;
        return handler;
    }

    void handle(T* request) override {
        if (this->nextHandler) {
            return this->nextHandler->handle(request);
        }
    }
};

#endif