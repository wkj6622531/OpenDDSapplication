/* Generated by ..\..\..\bin\opendds_idl version 3.12 (ACE version 6.4.6) running on input file YH03.idl */
#include "YH03TypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/DCPS/BuiltInTopicUtils.h"
#include "dds/DCPS/ContentFilteredTopicImpl.h"
#include "dds/DCPS/DataReaderImpl_T.h"
#include "dds/DCPS/DataWriterImpl_T.h"
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/MultiTopicDataReader_T.h"
#include "dds/DCPS/PoolAllocator.h"
#include "dds/DCPS/PublicationInstance.h"
#include "dds/DCPS/PublisherImpl.h"
#include "dds/DCPS/Qos_Helper.h"
#include "dds/DCPS/RakeData.h"
#include "dds/DCPS/RakeResults_T.h"
#include "dds/DCPS/ReceivedDataElementList.h"
#include "dds/DCPS/Registered_Data_Types.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/debug.h"
#include "dds/DdsDcpsDomainC.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: YH03 */



/* Begin STRUCT: Observe */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const YH03::Observe& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.YH03_Observe_ID);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.YH03_Observe_name.in()) + 1;
  if ((size + padding) % 8) {
    padding += 8 - ((size + padding) % 8);
  }
  size += gen_max_marshaled_size(stru.YH03_Observe_pm2);
  if ((size + padding) % 8) {
    padding += 8 - ((size + padding) % 8);
  }
  size += gen_max_marshaled_size(stru.Yh03_Observe_tem);
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.LocalTime.in()) + 1;
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.ClockTime);
}

bool operator<<(Serializer& strm, const YH03::Observe& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.YH03_Observe_ID)
    && (strm << stru.YH03_Observe_name.in())
    && (strm << stru.YH03_Observe_pm2)
    && (strm << stru.Yh03_Observe_tem)
    && (strm << stru.LocalTime.in())
    && (strm << stru.ClockTime);
}

bool operator>>(Serializer& strm, YH03::Observe& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.YH03_Observe_ID)
    && (strm >> stru.YH03_Observe_name.out())
    && (strm >> stru.YH03_Observe_pm2)
    && (strm >> stru.Yh03_Observe_tem)
    && (strm >> stru.LocalTime.out())
    && (strm >> stru.ClockTime);
}

size_t gen_max_marshaled_size(const YH03::Observe& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const YH03::Observe> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const YH03::Observe> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const YH03::Observe> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<YH03::Observe> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace YH03 {
::DDS::DataWriter_ptr ObserveTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Observe> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr ObserveTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Observe> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr ObserveTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Observe> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Observe, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& ObserveTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Observe>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool ObserveTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* ObserveTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
ObserveTypeSupport::_ptr_type ObserveTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<YH03::Observe> : MetaStruct {
  typedef YH03::Observe T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }
  size_t numDcpsKeys() const { return 0; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const YH03::Observe& typed = *static_cast<const YH03::Observe*>(stru);
    if (std::strcmp(field, "YH03_Observe_ID") == 0) {
      return typed.YH03_Observe_ID;
    }
    if (std::strcmp(field, "YH03_Observe_name") == 0) {
      return typed.YH03_Observe_name.in();
    }
    if (std::strcmp(field, "YH03_Observe_pm2") == 0) {
      return typed.YH03_Observe_pm2;
    }
    if (std::strcmp(field, "Yh03_Observe_tem") == 0) {
      return typed.Yh03_Observe_tem;
    }
    if (std::strcmp(field, "LocalTime") == 0) {
      return typed.LocalTime.in();
    }
    if (std::strcmp(field, "ClockTime") == 0) {
      return typed.ClockTime;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct YH03::Observe)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "YH03_Observe_ID") == 0) {
      ACE_CDR::Long val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'YH03_Observe_ID' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'YH03_Observe_ID' could not be skipped");
      }
    }
    if (std::strcmp(field, "YH03_Observe_name") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'YH03_Observe_name' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'YH03_Observe_name' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'YH03_Observe_name' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "YH03_Observe_pm2") == 0) {
      ACE_CDR::Double val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'YH03_Observe_pm2' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 8)) {
        throw std::runtime_error("Field 'YH03_Observe_pm2' could not be skipped");
      }
    }
    if (std::strcmp(field, "Yh03_Observe_tem") == 0) {
      ACE_CDR::Double val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'Yh03_Observe_tem' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 8)) {
        throw std::runtime_error("Field 'Yh03_Observe_tem' could not be skipped");
      }
    }
    if (std::strcmp(field, "LocalTime") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'LocalTime' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'LocalTime' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'LocalTime' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "ClockTime") == 0) {
      ACE_CDR::Long val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'ClockTime' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'ClockTime' could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct YH03::Observe");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "YH03_Observe_ID") == 0) {
      return make_field_cmp(&T::YH03_Observe_ID, next);
    }
    if (std::strcmp(field, "YH03_Observe_name") == 0) {
      return make_field_cmp(&T::YH03_Observe_name, next);
    }
    if (std::strcmp(field, "YH03_Observe_pm2") == 0) {
      return make_field_cmp(&T::YH03_Observe_pm2, next);
    }
    if (std::strcmp(field, "Yh03_Observe_tem") == 0) {
      return make_field_cmp(&T::Yh03_Observe_tem, next);
    }
    if (std::strcmp(field, "LocalTime") == 0) {
      return make_field_cmp(&T::LocalTime, next);
    }
    if (std::strcmp(field, "ClockTime") == 0) {
      return make_field_cmp(&T::ClockTime, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct YH03::Observe)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"YH03_Observe_ID", "YH03_Observe_name", "YH03_Observe_pm2", "Yh03_Observe_tem", "LocalTime", "ClockTime", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "YH03_Observe_ID") == 0) {
      return &static_cast<const T*>(stru)->YH03_Observe_ID;
    }
    if (std::strcmp(field, "YH03_Observe_name") == 0) {
      return &static_cast<const T*>(stru)->YH03_Observe_name;
    }
    if (std::strcmp(field, "YH03_Observe_pm2") == 0) {
      return &static_cast<const T*>(stru)->YH03_Observe_pm2;
    }
    if (std::strcmp(field, "Yh03_Observe_tem") == 0) {
      return &static_cast<const T*>(stru)->Yh03_Observe_tem;
    }
    if (std::strcmp(field, "LocalTime") == 0) {
      return &static_cast<const T*>(stru)->LocalTime;
    }
    if (std::strcmp(field, "ClockTime") == 0) {
      return &static_cast<const T*>(stru)->ClockTime;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct YH03::Observe)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "YH03_Observe_ID") == 0) {
      static_cast<T*>(lhs)->YH03_Observe_ID = *static_cast<const CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "YH03_Observe_name") == 0) {
      static_cast<T*>(lhs)->YH03_Observe_name = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "YH03_Observe_pm2") == 0) {
      static_cast<T*>(lhs)->YH03_Observe_pm2 = *static_cast<const CORBA::Double*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "Yh03_Observe_tem") == 0) {
      static_cast<T*>(lhs)->Yh03_Observe_tem = *static_cast<const CORBA::Double*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "LocalTime") == 0) {
      static_cast<T*>(lhs)->LocalTime = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "ClockTime") == 0) {
      static_cast<T*>(lhs)->ClockTime = *static_cast<const CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct YH03::Observe)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "YH03_Observe_ID") == 0) {
      return static_cast<const T*>(lhs)->YH03_Observe_ID == static_cast<const T*>(rhs)->YH03_Observe_ID;
    }
    if (std::strcmp(field, "YH03_Observe_name") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->YH03_Observe_name.in(), static_cast<const T*>(rhs)->YH03_Observe_name.in());
    }
    if (std::strcmp(field, "YH03_Observe_pm2") == 0) {
      return static_cast<const T*>(lhs)->YH03_Observe_pm2 == static_cast<const T*>(rhs)->YH03_Observe_pm2;
    }
    if (std::strcmp(field, "Yh03_Observe_tem") == 0) {
      return static_cast<const T*>(lhs)->Yh03_Observe_tem == static_cast<const T*>(rhs)->Yh03_Observe_tem;
    }
    if (std::strcmp(field, "LocalTime") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->LocalTime.in(), static_cast<const T*>(rhs)->LocalTime.in());
    }
    if (std::strcmp(field, "ClockTime") == 0) {
      return static_cast<const T*>(lhs)->ClockTime == static_cast<const T*>(rhs)->ClockTime;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct YH03::Observe)");
  }
};

template<>
const MetaStruct& getMetaStruct<YH03::Observe>()
{
  static MetaStructImpl<YH03::Observe> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, YH03::Observe*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<YH03::Observe>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Observe */

/* End MODULE: YH03 */
