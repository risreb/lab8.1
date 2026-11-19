#pragma once

class Figure
{
public:
    virtual void print() const = 0;
    virtual ~Figure() = default;
};
