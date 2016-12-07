//
// Created by mafn on 12/1/16.
//

#include "CowState.hpp"
#include "../Cow.hpp"

CowState::CowState(Cow& context)
: _context(context)
{
    this->_context._path.clear();
}
