#include "../Global.h"

const class VariantParameterList
{
    struct Parameter {
        unsigned __int64 type;
        void* data;
    };

private:
  VariantParameterList::Parameter parameters[10];
};
