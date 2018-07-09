/* Generated by ..\..\..\bin\opendds_idl version 3.12 (ACE version 6.4.6) running on input file S02_ChatRoom.idl */
#include "S02_ChatRoomTypeSupportImpl.h"

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


/* Begin MODULE: S02_ChatRoom */



/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const S02_ChatRoom::Message& stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  if ((size + padding) % 4) {
    padding += 4 - ((size + padding) % 4);
  }
  size += gen_max_marshaled_size(stru.MessageID);
  size += gen_max_marshaled_size(ACE_OutputCDR::from_char(stru.MessageType));
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.MessageInf.in()) + 1;
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.PublisherName.in()) + 1;
  find_size_ulong(size, padding);
  size += ACE_OS::strlen(stru.SendTime.in()) + 1;
  if ((size + padding) % 8) {
    padding += 8 - ((size + padding) % 8);
  }
  size += gen_max_marshaled_size(stru.Mtime);
}

bool operator<<(Serializer& strm, const S02_ChatRoom::Message& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm << stru.MessageID)
    && (strm << ACE_OutputCDR::from_char(stru.MessageType))
    && (strm << stru.MessageInf.in())
    && (strm << stru.PublisherName.in())
    && (strm << stru.SendTime.in())
    && (strm << stru.Mtime);
}

bool operator>>(Serializer& strm, S02_ChatRoom::Message& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return (strm >> stru.MessageID)
    && (strm >> ACE_InputCDR::to_char(stru.MessageType))
    && (strm >> stru.MessageInf.out())
    && (strm >> stru.PublisherName.out())
    && (strm >> stru.SendTime.out())
    && (strm >> stru.Mtime);
}

size_t gen_max_marshaled_size(const S02_ChatRoom::Message& stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

size_t gen_max_marshaled_size(KeyOnly<const S02_ChatRoom::Message> stru, bool align)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(align);
  return 0;
}

void gen_find_size(KeyOnly<const S02_ChatRoom::Message> stru, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(stru);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
}

bool operator<<(Serializer& strm, KeyOnly<const S02_ChatRoom::Message> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

bool operator>>(Serializer& strm, KeyOnly<S02_ChatRoom::Message> stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace S02_ChatRoom {
::DDS::DataWriter_ptr MessageTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Message> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}
::DDS::DataReader_ptr MessageTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Message> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}
#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr MessageTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Message> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Message, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& MessageTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Message>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
bool MessageTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key ();
}
const char* MessageTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}
MessageTypeSupport::_ptr_type MessageTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl<S02_ChatRoom::Message> : MetaStruct {
  typedef S02_ChatRoom::Message T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }
  size_t numDcpsKeys() const { return 0; }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  Value getValue(const void* stru, const char* field) const
  {
    const S02_ChatRoom::Message& typed = *static_cast<const S02_ChatRoom::Message*>(stru);
    if (std::strcmp(field, "MessageID") == 0) {
      return typed.MessageID;
    }
    if (std::strcmp(field, "MessageType") == 0) {
      return typed.MessageType;
    }
    if (std::strcmp(field, "MessageInf") == 0) {
      return typed.MessageInf.in();
    }
    if (std::strcmp(field, "PublisherName") == 0) {
      return typed.PublisherName.in();
    }
    if (std::strcmp(field, "SendTime") == 0) {
      return typed.SendTime.in();
    }
    if (std::strcmp(field, "Mtime") == 0) {
      return typed.Mtime;
    }
    ACE_UNUSED_ARG(typed);
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct S02_ChatRoom::Message)");
  }

  Value getValue(Serializer& ser, const char* field) const
  {
    if (std::strcmp(field, "MessageID") == 0) {
      ACE_CDR::Long val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'MessageID' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 4)) {
        throw std::runtime_error("Field 'MessageID' could not be skipped");
      }
    }
    if (std::strcmp(field, "MessageType") == 0) {
      ACE_CDR::Char val;
      if (!(ser >> ACE_InputCDR::to_char(val))) {
        throw std::runtime_error("Field 'MessageType' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 1)) {
        throw std::runtime_error("Field 'MessageType' could not be skipped");
      }
    }
    if (std::strcmp(field, "MessageInf") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'MessageInf' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'MessageInf' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'MessageInf' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "PublisherName") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'PublisherName' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'PublisherName' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'PublisherName' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "SendTime") == 0) {
      TAO::String_Manager val;
      if (!(ser >> val.out())) {
        throw std::runtime_error("Field 'SendTime' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(ser >> len)) {
        throw std::runtime_error("String 'SendTime' length could not be deserialized");
      }
      if (!ser.skip(len)) {
        throw std::runtime_error("String 'SendTime' contents could not be skipped");
      }
    }
    if (std::strcmp(field, "Mtime") == 0) {
      ACE_CDR::Double val;
      if (!(ser >> val)) {
        throw std::runtime_error("Field 'Mtime' could not be deserialized");
      }
      return val;
    } else {
      if (!ser.skip(1, 8)) {
        throw std::runtime_error("Field 'Mtime' could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not valid for struct S02_ChatRoom::Message");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "MessageID") == 0) {
      return make_field_cmp(&T::MessageID, next);
    }
    if (std::strcmp(field, "MessageType") == 0) {
      return make_field_cmp(&T::MessageType, next);
    }
    if (std::strcmp(field, "MessageInf") == 0) {
      return make_field_cmp(&T::MessageInf, next);
    }
    if (std::strcmp(field, "PublisherName") == 0) {
      return make_field_cmp(&T::PublisherName, next);
    }
    if (std::strcmp(field, "SendTime") == 0) {
      return make_field_cmp(&T::SendTime, next);
    }
    if (std::strcmp(field, "Mtime") == 0) {
      return make_field_cmp(&T::Mtime, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct S02_ChatRoom::Message)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"MessageID", "MessageType", "MessageInf", "PublisherName", "SendTime", "Mtime", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "MessageID") == 0) {
      return &static_cast<const T*>(stru)->MessageID;
    }
    if (std::strcmp(field, "MessageType") == 0) {
      return &static_cast<const T*>(stru)->MessageType;
    }
    if (std::strcmp(field, "MessageInf") == 0) {
      return &static_cast<const T*>(stru)->MessageInf;
    }
    if (std::strcmp(field, "PublisherName") == 0) {
      return &static_cast<const T*>(stru)->PublisherName;
    }
    if (std::strcmp(field, "SendTime") == 0) {
      return &static_cast<const T*>(stru)->SendTime;
    }
    if (std::strcmp(field, "Mtime") == 0) {
      return &static_cast<const T*>(stru)->Mtime;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct S02_ChatRoom::Message)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "MessageID") == 0) {
      static_cast<T*>(lhs)->MessageID = *static_cast<const CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "MessageType") == 0) {
      static_cast<T*>(lhs)->MessageType = *static_cast<const CORBA::Char*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "MessageInf") == 0) {
      static_cast<T*>(lhs)->MessageInf = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "PublisherName") == 0) {
      static_cast<T*>(lhs)->PublisherName = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "SendTime") == 0) {
      static_cast<T*>(lhs)->SendTime = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "Mtime") == 0) {
      static_cast<T*>(lhs)->Mtime = *static_cast<const CORBA::Double*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct S02_ChatRoom::Message)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "MessageID") == 0) {
      return static_cast<const T*>(lhs)->MessageID == static_cast<const T*>(rhs)->MessageID;
    }
    if (std::strcmp(field, "MessageType") == 0) {
      return static_cast<const T*>(lhs)->MessageType == static_cast<const T*>(rhs)->MessageType;
    }
    if (std::strcmp(field, "MessageInf") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->MessageInf.in(), static_cast<const T*>(rhs)->MessageInf.in());
    }
    if (std::strcmp(field, "PublisherName") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->PublisherName.in(), static_cast<const T*>(rhs)->PublisherName.in());
    }
    if (std::strcmp(field, "SendTime") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->SendTime.in(), static_cast<const T*>(rhs)->SendTime.in());
    }
    if (std::strcmp(field, "Mtime") == 0) {
      return static_cast<const T*>(lhs)->Mtime == static_cast<const T*>(rhs)->Mtime;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct S02_ChatRoom::Message)");
  }
};

template<>
const MetaStruct& getMetaStruct<S02_ChatRoom::Message>()
{
  static MetaStructImpl<S02_ChatRoom::Message> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser, S02_ChatRoom::Message*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl<S02_ChatRoom::Message>().getValue(ser, "");
  return true;
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: S02_ChatRoom */
