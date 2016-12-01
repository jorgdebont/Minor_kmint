//
// Created by mafn on 12/1/16.
//

#include "CowChaseState.hpp"
#include "../Cow.hpp"

CowChaseState::CowChaseState(Cow& context)
: CowState(context)
{

}

void CowChaseState::update(float delta_time)
{
    uint32_t current_time = this->_context.mApplication->GetTimeSinceStartedMS();
    if (current_time > this->_context._last_move_timestamp_ms + this->_context._move_delay_ms) {
        this->_context._move_to_next_vertex();
        this->_context._last_move_timestamp_ms = current_time;
    }

    if (this->_context._path.empty()) {
        this->_context._recalculate_path();
    }

    if (this->_context.current_position == this->_context._target->current_position) {
        this->_context._target->jump_to_random_position();
    }
}
