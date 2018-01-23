#include "Sequence.hpp"

using namespace APP;

//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// constructor & destructor

Sequence::Sequence()
{
    try
    {

    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("Constructor error!");
}

Sequence::~Sequence()
{
    try
    {

    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("Destructor error!");
}

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// member function

void Sequence::init()
{
    try
    {
        this->m_inspectionManager.init();
    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("Initialization error!");
}

void Sequence::inspectCycle()
{
    try
    {
        this->m_inspectionManager.inspect();
    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("Error!");
}

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
