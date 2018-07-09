// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.4.6
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// d:\drama\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:451

#ifndef _TAO_IDL_S01_SUPERMARKETS_ICFMJI_H_
#define _TAO_IDL_S01_SUPERMARKETS_ICFMJI_H_

#include /**/ "ace/pre.h"

#include "S01_SupermarketC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/UB_String_SArguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


// TAO_IDL - Generated from
// d:\drama\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // d:\drama\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::S01_Supermarket::UpdateInf>
    : public
        Var_Size_SArg_Traits_T<
            ::S01_Supermarket::UpdateInf,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // d:\drama\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::S01_Supermarket::DefaultInf>
    : public
        Var_Size_SArg_Traits_T<
            ::S01_Supermarket::DefaultInf,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\drama\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:35

namespace POA_S01_Supermarket
{
  

// TAO_IDL - Generated from
// d:\drama\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_sh.cpp:66

} // module S01_Supermarket

#include /**/ "ace/post.h"

#endif /* ifndef */

