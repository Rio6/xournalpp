/*
 * Xournal++
 *
 * XML Writer helper class
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <string>
#include <vector>

#include "Attribute.h"


class DoubleAttribute: public XMLAttribute {
public:
    DoubleAttribute(const char* name, double value);
    ~DoubleAttribute() override;

public:
    void writeOut(OutputStream* out) override;

private:
    double value;
};
