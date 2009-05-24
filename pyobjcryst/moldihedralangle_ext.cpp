/*****************************************************************************
*
* pyobjcryst        by DANSE Diffraction group
*                   Simon J. L. Billinge
*                   (c) 2009 Trustees of the Columbia University
*                   in the City of New York.  All rights reserved.
*
* File coded by:    Chris Farrow
*
* See AUTHORS.txt for a list of people who contributed.
* See LICENSE.txt for license information.
*
******************************************************************************
*
* boost::python bindings to ObjCryst::DihedralAngle.  
* 
* Changes from ObjCryst++
*
* $Id$
*
*****************************************************************************/

#include "ObjCryst/Molecule.h"
#include "RefinableObj/RefinableObj.h"

#include <boost/utility.hpp>
#include <boost/python.hpp>
#include <boost/python/class.hpp>
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <boost/python/args.hpp>

#include <string>
#include <sstream>
#include <map>
#include <set>

namespace bp = boost::python;
using namespace boost::python;
using namespace ObjCryst;

namespace {

} // namespace


BOOST_PYTHON_MODULE(_moldihedralangle)
{

    class_<MolDihedralAngle, bases<Restraint> > ("MolDihedralAngle", no_init)
        .def("GetMolecule", (Molecule& (MolDihedralAngle::*)()) 
            &MolDihedralAngle::GetMolecule, 
            return_internal_reference<>())
        .def("GetName", &MolDihedralAngle::GetName)
        .def("GetLogLikelihood", 
            (float (MolDihedralAngle::*)() const) 
            &MolDihedralAngle::GetLogLikelihood) 
        .def("GetLogLikelihood", 
            (float (MolDihedralAngle::*)(const bool, const bool) const) 
            &MolDihedralAngle::GetLogLikelihood) 
        .def("GetAngle", &MolDihedralAngle::GetAngle)
        .def("GetAngle0", &MolDihedralAngle::GetAngle0)
        .def("GetAngleDelta", &MolDihedralAngle::GetAngleDelta)
        .def("GetAngleSigma", &MolDihedralAngle::GetAngleSigma)
        .def("SetAngle0", &MolDihedralAngle::SetAngle0)
        .def("SetAngleDelta", &MolDihedralAngle::SetAngleDelta)
        .def("SetAngleSigma", &MolDihedralAngle::SetAngleSigma)
        .def("GetAtom1", (MolAtom& (MolDihedralAngle::*)())
            &MolDihedralAngle::GetAtom1,
            return_internal_reference<>())
        .def("GetAtom2", (MolAtom& (MolDihedralAngle::*)())
            &MolDihedralAngle::GetAtom2,
            return_internal_reference<>())
        .def("GetAtom3", (MolAtom& (MolDihedralAngle::*)())
            &MolDihedralAngle::GetAtom3,
            return_internal_reference<>())
        .def("GetAtom4", (MolAtom& (MolDihedralAngle::*)())
            &MolDihedralAngle::GetAtom4,
            return_internal_reference<>())
        .def("SetAtom1", &MolDihedralAngle::SetAtom1,
            with_custodian_and_ward<1,2>())
        .def("SetAtom2", &MolDihedralAngle::SetAtom2,
            with_custodian_and_ward<1,2>())
        .def("SetAtom3", &MolDihedralAngle::SetAtom3,
            with_custodian_and_ward<1,2>())
        .def("SetAtom4", &MolDihedralAngle::SetAtom4,
            with_custodian_and_ward<1,2>())
        // Python-only
        .add_property("Angle", &MolDihedralAngle::GetAngle)
        .add_property("Angle0", &MolDihedralAngle::GetAngle0,
            &MolDihedralAngle::SetAngle0)
        .add_property("AngleDelta", &MolDihedralAngle::GetAngleDelta,
            &MolDihedralAngle::SetAngleDelta)
        .add_property("AngleSigma", &MolDihedralAngle::GetAngleSigma,
            &MolDihedralAngle::SetAngleSigma)
        .add_property("angle", &MolDihedralAngle::GetAngle)
        .add_property("angle0", &MolDihedralAngle::GetAngle0,
            &MolDihedralAngle::SetAngle0)
        .add_property("delta", &MolDihedralAngle::GetAngleDelta,
            &MolDihedralAngle::SetAngleDelta)
        .add_property("sigma", &MolDihedralAngle::GetAngleSigma,
            &MolDihedralAngle::SetAngleSigma)
        ;
}