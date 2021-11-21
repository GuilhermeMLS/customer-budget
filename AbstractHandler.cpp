#include <string>
#include "Handler.hpp"

class AbstractHandler : public Handler {
private:
    Handler *nextHandler;

public:
    AbstractHandler() : nextHandler(nullptr) {}

    Handler *setNext(Handler *handler) override {
        this->nextHandler = handler;
        return handler;
    }

    std::string handle(std::string request) override {
        if (this->nextHandler) {
            return this->nextHandler->handle(request);
        }

        return {};
    }
};