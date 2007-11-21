#include <OpenSG/OSGConfig.h>


namespace boost
{

inline
void intrusive_ptr_add_ref(osg::IntrusivePtrImplBase * p)
{
    ++(p->_ReferenceCount);
}

}

OSG_BEGIN_NAMESPACE

inline
IntrusivePtrImplBase::IntrusivePtrImplBase(void) : _ReferenceCount(0)
{
}

OSG_END_NAMESPACE