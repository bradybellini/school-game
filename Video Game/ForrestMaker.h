#pragma once
#ifndef FORRESTMAKER_H

#include "Maker.h"
#include "Forrest.h"

class ForrestMaker : public Maker {
public:
	Forrest* create() { return new Forrest(); }
};


#endif // !FORRESTMAKER_H
