// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fitplanet.proto

#ifndef PROTOBUF_fitplanet_2eproto__INCLUDED
#define PROTOBUF_fitplanet_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace machines {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_fitplanet_2eproto();
void protobuf_AssignDesc_fitplanet_2eproto();
void protobuf_ShutdownFile_fitplanet_2eproto();

class Machine;
class Machines;

// ===================================================================

class Machine : public ::google::protobuf::Message {
 public:
  Machine();
  virtual ~Machine();

  Machine(const Machine& from);

  inline Machine& operator=(const Machine& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Machine& default_instance();

  void Swap(Machine* other);

  // implements Message ----------------------------------------------

  inline Machine* New() const { return New(NULL); }

  Machine* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Machine& from);
  void MergeFrom(const Machine& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Machine* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string machine_name = 1;
  bool has_machine_name() const;
  void clear_machine_name();
  static const int kMachineNameFieldNumber = 1;
  const ::std::string& machine_name() const;
  void set_machine_name(const ::std::string& value);
  void set_machine_name(const char* value);
  void set_machine_name(const char* value, size_t size);
  ::std::string* mutable_machine_name();
  ::std::string* release_machine_name();
  void set_allocated_machine_name(::std::string* machine_name);

  // required string machine_type = 2;
  bool has_machine_type() const;
  void clear_machine_type();
  static const int kMachineTypeFieldNumber = 2;
  const ::std::string& machine_type() const;
  void set_machine_type(const ::std::string& value);
  void set_machine_type(const char* value);
  void set_machine_type(const char* value, size_t size);
  ::std::string* mutable_machine_type();
  ::std::string* release_machine_type();
  void set_allocated_machine_type(::std::string* machine_type);

  // @@protoc_insertion_point(class_scope:machines.Machine)
 private:
  inline void set_has_machine_name();
  inline void clear_has_machine_name();
  inline void set_has_machine_type();
  inline void clear_has_machine_type();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr machine_name_;
  ::google::protobuf::internal::ArenaStringPtr machine_type_;
  friend void  protobuf_AddDesc_fitplanet_2eproto();
  friend void protobuf_AssignDesc_fitplanet_2eproto();
  friend void protobuf_ShutdownFile_fitplanet_2eproto();

  void InitAsDefaultInstance();
  static Machine* default_instance_;
};
// -------------------------------------------------------------------

class Machines : public ::google::protobuf::Message {
 public:
  Machines();
  virtual ~Machines();

  Machines(const Machines& from);

  inline Machines& operator=(const Machines& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Machines& default_instance();

  void Swap(Machines* other);

  // implements Message ----------------------------------------------

  inline Machines* New() const { return New(NULL); }

  Machines* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Machines& from);
  void MergeFrom(const Machines& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Machines* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .machines.Machine machine = 1;
  int machine_size() const;
  void clear_machine();
  static const int kMachineFieldNumber = 1;
  const ::machines::Machine& machine(int index) const;
  ::machines::Machine* mutable_machine(int index);
  ::machines::Machine* add_machine();
  ::google::protobuf::RepeatedPtrField< ::machines::Machine >*
      mutable_machine();
  const ::google::protobuf::RepeatedPtrField< ::machines::Machine >&
      machine() const;

  // @@protoc_insertion_point(class_scope:machines.Machines)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::machines::Machine > machine_;
  friend void  protobuf_AddDesc_fitplanet_2eproto();
  friend void protobuf_AssignDesc_fitplanet_2eproto();
  friend void protobuf_ShutdownFile_fitplanet_2eproto();

  void InitAsDefaultInstance();
  static Machines* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Machine

// required string machine_name = 1;
inline bool Machine::has_machine_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Machine::set_has_machine_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Machine::clear_has_machine_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Machine::clear_machine_name() {
  machine_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_machine_name();
}
inline const ::std::string& Machine::machine_name() const {
  // @@protoc_insertion_point(field_get:machines.Machine.machine_name)
  return machine_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Machine::set_machine_name(const ::std::string& value) {
  set_has_machine_name();
  machine_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:machines.Machine.machine_name)
}
inline void Machine::set_machine_name(const char* value) {
  set_has_machine_name();
  machine_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:machines.Machine.machine_name)
}
inline void Machine::set_machine_name(const char* value, size_t size) {
  set_has_machine_name();
  machine_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:machines.Machine.machine_name)
}
inline ::std::string* Machine::mutable_machine_name() {
  set_has_machine_name();
  // @@protoc_insertion_point(field_mutable:machines.Machine.machine_name)
  return machine_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Machine::release_machine_name() {
  clear_has_machine_name();
  return machine_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Machine::set_allocated_machine_name(::std::string* machine_name) {
  if (machine_name != NULL) {
    set_has_machine_name();
  } else {
    clear_has_machine_name();
  }
  machine_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), machine_name);
  // @@protoc_insertion_point(field_set_allocated:machines.Machine.machine_name)
}

// required string machine_type = 2;
inline bool Machine::has_machine_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Machine::set_has_machine_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Machine::clear_has_machine_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Machine::clear_machine_type() {
  machine_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_machine_type();
}
inline const ::std::string& Machine::machine_type() const {
  // @@protoc_insertion_point(field_get:machines.Machine.machine_type)
  return machine_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Machine::set_machine_type(const ::std::string& value) {
  set_has_machine_type();
  machine_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:machines.Machine.machine_type)
}
inline void Machine::set_machine_type(const char* value) {
  set_has_machine_type();
  machine_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:machines.Machine.machine_type)
}
inline void Machine::set_machine_type(const char* value, size_t size) {
  set_has_machine_type();
  machine_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:machines.Machine.machine_type)
}
inline ::std::string* Machine::mutable_machine_type() {
  set_has_machine_type();
  // @@protoc_insertion_point(field_mutable:machines.Machine.machine_type)
  return machine_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Machine::release_machine_type() {
  clear_has_machine_type();
  return machine_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Machine::set_allocated_machine_type(::std::string* machine_type) {
  if (machine_type != NULL) {
    set_has_machine_type();
  } else {
    clear_has_machine_type();
  }
  machine_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), machine_type);
  // @@protoc_insertion_point(field_set_allocated:machines.Machine.machine_type)
}

// -------------------------------------------------------------------

// Machines

// repeated .machines.Machine machine = 1;
inline int Machines::machine_size() const {
  return machine_.size();
}
inline void Machines::clear_machine() {
  machine_.Clear();
}
inline const ::machines::Machine& Machines::machine(int index) const {
  // @@protoc_insertion_point(field_get:machines.Machines.machine)
  return machine_.Get(index);
}
inline ::machines::Machine* Machines::mutable_machine(int index) {
  // @@protoc_insertion_point(field_mutable:machines.Machines.machine)
  return machine_.Mutable(index);
}
inline ::machines::Machine* Machines::add_machine() {
  // @@protoc_insertion_point(field_add:machines.Machines.machine)
  return machine_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::machines::Machine >*
Machines::mutable_machine() {
  // @@protoc_insertion_point(field_mutable_list:machines.Machines.machine)
  return &machine_;
}
inline const ::google::protobuf::RepeatedPtrField< ::machines::Machine >&
Machines::machine() const {
  // @@protoc_insertion_point(field_list:machines.Machines.machine)
  return machine_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace machines

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_fitplanet_2eproto__INCLUDED
