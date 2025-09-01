#pragma once


class DatabaseWrapper {

    public:
        DatabaseWrapper();
        void connect();
    private:
        bool connected;

};