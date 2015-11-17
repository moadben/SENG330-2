// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fitplanet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fitplanet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace machines {

namespace {

const ::google::protobuf::Descriptor* Machine_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Machine_reflection_ = NULL;
const ::google::protobuf::Descriptor* Machines_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Machines_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_fitplanet_2eproto() {
  protobuf_AddDesc_fitplanet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "fitplanet.proto");
  GOOGLE_CHECK(file != NULL);
  Machine_descriptor_ = file->message_type(0);
  static const int Machine_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, machine_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, machine_type_),
  };
  Machine_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Machine_descriptor_,
      Machine::default_instance_,
      Machine_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, _has_bits_[0]),
      -1,
      -1,
      sizeof(Machine),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machine, _internal_metadata_),
      -1);
  Machines_descriptor_ = file->message_type(1);
  static const int Machines_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machines, machine_),
  };
  Machines_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Machines_descriptor_,
      Machines::default_instance_,
      Machines_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machines, _has_bits_[0]),
      -1,
      -1,
      sizeof(Machines),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Machines, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_fitplanet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Machine_descriptor_, &Machine::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Machines_descriptor_, &Machines::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_fitplanet_2eproto() {
  delete Machine::default_instance_;
  delete Machine_reflection_;
  delete Machines::default_instance_;
  delete Machines_reflection_;
}

void protobuf_AddDesc_fitplanet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017fitplanet.proto\022\010machines\"5\n\007Machine\022\024"
    "\n\014machine_name\030\001 \002(\t\022\024\n\014machine_type\030\002 \002"
    "(\t\".\n\010Machines\022\"\n\007machine\030\001 \003(\0132\021.machin"
    "es.Machine", 130);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fitplanet.proto", &protobuf_RegisterTypes);
  Machine::default_instance_ = new Machine();
  Machines::default_instance_ = new Machines();
  Machine::default_instance_->InitAsDefaultInstance();
  Machines::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_fitplanet_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_fitplanet_2eproto {
  StaticDescriptorInitializer_fitplanet_2eproto() {
    protobuf_AddDesc_fitplanet_2eproto();
  }
} static_descriptor_initializer_fitplanet_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Machine::kMachineNameFieldNumber;
const int Machine::kMachineTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Machine::Machine()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:machines.Machine)
}

void Machine::InitAsDefaultInstance() {
}

Machine::Machine(const Machine& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:machines.Machine)
}

void Machine::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  machine_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  machine_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Machine::~Machine() {
  // @@protoc_insertion_point(destructor:machines.Machine)
  SharedDtor();
}

void Machine::SharedDtor() {
  machine_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  machine_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Machine::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Machine::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Machine_descriptor_;
}

const Machine& Machine::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fitplanet_2eproto();
  return *default_instance_;
}

Machine* Machine::default_instance_ = NULL;

Machine* Machine::New(::google::protobuf::Arena* arena) const {
  Machine* n = new Machine;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Machine::Clear() {
  if (_has_bits_[0 / 32] & 3u) {
    if (has_machine_name()) {
      machine_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_machine_type()) {
      machine_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Machine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:machines.Machine)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string machine_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_machine_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->machine_name().data(), this->machine_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "machines.Machine.machine_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_machine_type;
        break;
      }

      // required string machine_type = 2;
      case 2: {
        if (tag == 18) {
         parse_machine_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_machine_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->machine_type().data(), this->machine_type().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "machines.Machine.machine_type");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:machines.Machine)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:machines.Machine)
  return false;
#undef DO_
}

void Machine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:machines.Machine)
  // required string machine_name = 1;
  if (has_machine_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->machine_name().data(), this->machine_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "machines.Machine.machine_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->machine_name(), output);
  }

  // required string machine_type = 2;
  if (has_machine_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->machine_type().data(), this->machine_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "machines.Machine.machine_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->machine_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:machines.Machine)
}

::google::protobuf::uint8* Machine::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:machines.Machine)
  // required string machine_name = 1;
  if (has_machine_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->machine_name().data(), this->machine_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "machines.Machine.machine_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->machine_name(), target);
  }

  // required string machine_type = 2;
  if (has_machine_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->machine_type().data(), this->machine_type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "machines.Machine.machine_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->machine_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:machines.Machine)
  return target;
}

int Machine::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_machine_name()) {
    // required string machine_name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->machine_name());
  }

  if (has_machine_type()) {
    // required string machine_type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->machine_type());
  }

  return total_size;
}
int Machine::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string machine_name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->machine_name());

    // required string machine_type = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->machine_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Machine::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Machine* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Machine>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Machine::MergeFrom(const Machine& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_machine_name()) {
      set_has_machine_name();
      machine_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.machine_name_);
    }
    if (from.has_machine_type()) {
      set_has_machine_type();
      machine_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.machine_type_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Machine::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Machine::CopyFrom(const Machine& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Machine::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Machine::Swap(Machine* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Machine::InternalSwap(Machine* other) {
  machine_name_.Swap(&other->machine_name_);
  machine_type_.Swap(&other->machine_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Machine::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Machine_descriptor_;
  metadata.reflection = Machine_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Machine

// required string machine_name = 1;
bool Machine::has_machine_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Machine::set_has_machine_name() {
  _has_bits_[0] |= 0x00000001u;
}
void Machine::clear_has_machine_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void Machine::clear_machine_name() {
  machine_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_machine_name();
}
 const ::std::string& Machine::machine_name() const {
  // @@protoc_insertion_point(field_get:machines.Machine.machine_name)
  return machine_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_machine_name(const ::std::string& value) {
  set_has_machine_name();
  machine_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:machines.Machine.machine_name)
}
 void Machine::set_machine_name(const char* value) {
  set_has_machine_name();
  machine_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:machines.Machine.machine_name)
}
 void Machine::set_machine_name(const char* value, size_t size) {
  set_has_machine_name();
  machine_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:machines.Machine.machine_name)
}
 ::std::string* Machine::mutable_machine_name() {
  set_has_machine_name();
  // @@protoc_insertion_point(field_mutable:machines.Machine.machine_name)
  return machine_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Machine::release_machine_name() {
  clear_has_machine_name();
  return machine_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_allocated_machine_name(::std::string* machine_name) {
  if (machine_name != NULL) {
    set_has_machine_name();
  } else {
    clear_has_machine_name();
  }
  machine_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), machine_name);
  // @@protoc_insertion_point(field_set_allocated:machines.Machine.machine_name)
}

// required string machine_type = 2;
bool Machine::has_machine_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Machine::set_has_machine_type() {
  _has_bits_[0] |= 0x00000002u;
}
void Machine::clear_has_machine_type() {
  _has_bits_[0] &= ~0x00000002u;
}
void Machine::clear_machine_type() {
  machine_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_machine_type();
}
 const ::std::string& Machine::machine_type() const {
  // @@protoc_insertion_point(field_get:machines.Machine.machine_type)
  return machine_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_machine_type(const ::std::string& value) {
  set_has_machine_type();
  machine_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:machines.Machine.machine_type)
}
 void Machine::set_machine_type(const char* value) {
  set_has_machine_type();
  machine_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:machines.Machine.machine_type)
}
 void Machine::set_machine_type(const char* value, size_t size) {
  set_has_machine_type();
  machine_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:machines.Machine.machine_type)
}
 ::std::string* Machine::mutable_machine_type() {
  set_has_machine_type();
  // @@protoc_insertion_point(field_mutable:machines.Machine.machine_type)
  return machine_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Machine::release_machine_type() {
  clear_has_machine_type();
  return machine_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Machine::set_allocated_machine_type(::std::string* machine_type) {
  if (machine_type != NULL) {
    set_has_machine_type();
  } else {
    clear_has_machine_type();
  }
  machine_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), machine_type);
  // @@protoc_insertion_point(field_set_allocated:machines.Machine.machine_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Machines::kMachineFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Machines::Machines()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:machines.Machines)
}

void Machines::InitAsDefaultInstance() {
}

Machines::Machines(const Machines& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:machines.Machines)
}

void Machines::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Machines::~Machines() {
  // @@protoc_insertion_point(destructor:machines.Machines)
  SharedDtor();
}

void Machines::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Machines::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Machines::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Machines_descriptor_;
}

const Machines& Machines::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fitplanet_2eproto();
  return *default_instance_;
}

Machines* Machines::default_instance_ = NULL;

Machines* Machines::New(::google::protobuf::Arena* arena) const {
  Machines* n = new Machines;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Machines::Clear() {
  machine_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Machines::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:machines.Machines)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .machines.Machine machine = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_machine:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_machine()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_machine;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:machines.Machines)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:machines.Machines)
  return false;
#undef DO_
}

void Machines::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:machines.Machines)
  // repeated .machines.Machine machine = 1;
  for (unsigned int i = 0, n = this->machine_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->machine(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:machines.Machines)
}

::google::protobuf::uint8* Machines::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:machines.Machines)
  // repeated .machines.Machine machine = 1;
  for (unsigned int i = 0, n = this->machine_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->machine(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:machines.Machines)
  return target;
}

int Machines::ByteSize() const {
  int total_size = 0;

  // repeated .machines.Machine machine = 1;
  total_size += 1 * this->machine_size();
  for (int i = 0; i < this->machine_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->machine(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Machines::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Machines* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Machines>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Machines::MergeFrom(const Machines& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  machine_.MergeFrom(from.machine_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Machines::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Machines::CopyFrom(const Machines& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Machines::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->machine())) return false;
  return true;
}

void Machines::Swap(Machines* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Machines::InternalSwap(Machines* other) {
  machine_.UnsafeArenaSwap(&other->machine_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Machines::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Machines_descriptor_;
  metadata.reflection = Machines_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Machines

// repeated .machines.Machine machine = 1;
int Machines::machine_size() const {
  return machine_.size();
}
void Machines::clear_machine() {
  machine_.Clear();
}
const ::machines::Machine& Machines::machine(int index) const {
  // @@protoc_insertion_point(field_get:machines.Machines.machine)
  return machine_.Get(index);
}
::machines::Machine* Machines::mutable_machine(int index) {
  // @@protoc_insertion_point(field_mutable:machines.Machines.machine)
  return machine_.Mutable(index);
}
::machines::Machine* Machines::add_machine() {
  // @@protoc_insertion_point(field_add:machines.Machines.machine)
  return machine_.Add();
}
::google::protobuf::RepeatedPtrField< ::machines::Machine >*
Machines::mutable_machine() {
  // @@protoc_insertion_point(field_mutable_list:machines.Machines.machine)
  return &machine_;
}
const ::google::protobuf::RepeatedPtrField< ::machines::Machine >&
Machines::machine() const {
  // @@protoc_insertion_point(field_list:machines.Machines.machine)
  return machine_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace machines

// @@protoc_insertion_point(global_scope)
