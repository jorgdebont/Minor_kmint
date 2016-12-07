//
// Created by mafn on 12/2/16.
//

#include "BuneyState.hpp"
#include "../Buney.hpp"

BuneyState::BuneyState(Buney& context)
: _context(context)
{
    this->_context._path.clear();
}
