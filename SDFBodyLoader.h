/**
   \file
   \author
*/

#ifndef CNOID_BODY_SDF_BODY_LOADER_H_INCLUDED
#define CNOID_BODY_SDF_BODY_LOADER_H_INCLUDED

#include <cnoid/AbstractBodyLoader>
#include "exportdecl.h"

#define MODELING_ROTOR_INERTIA // comment out here for not modeling rotor inertia
#ifdef MODELING_ROTOR_INERTIA
#warning "rotor inertia is modeled in sdf."
#endif

namespace cnoid {

class SDFBodyLoaderImpl;
  
class CNOID_EXPORT SDFBodyLoader : public AbstractBodyLoader
{
public:
    SDFBodyLoader();
    ~SDFBodyLoader();
    virtual const char* format() const;
    virtual void setMessageSink(std::ostream& os);
    virtual void setVerbose(bool on);
    virtual bool load(Body* body, const std::string& filename);

private:
    SDFBodyLoaderImpl* impl;
};
}

#endif
