// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ProtoData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ProtoData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ProtoData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ProtoData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ProtoData_2eproto;
namespace Proto {
namespace Data {
class DataMatrix;
struct DataMatrixDefaultTypeInternal;
extern DataMatrixDefaultTypeInternal _DataMatrix_default_instance_;
class DataRow;
struct DataRowDefaultTypeInternal;
extern DataRowDefaultTypeInternal _DataRow_default_instance_;
}  // namespace Data
}  // namespace Proto
PROTOBUF_NAMESPACE_OPEN
template<> ::Proto::Data::DataMatrix* Arena::CreateMaybeMessage<::Proto::Data::DataMatrix>(Arena*);
template<> ::Proto::Data::DataRow* Arena::CreateMaybeMessage<::Proto::Data::DataRow>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Proto {
namespace Data {

// ===================================================================

class DataRow final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Proto.Data.DataRow) */ {
 public:
  inline DataRow() : DataRow(nullptr) {}
  ~DataRow() override;
  explicit constexpr DataRow(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DataRow(const DataRow& from);
  DataRow(DataRow&& from) noexcept
    : DataRow() {
    *this = ::std::move(from);
  }

  inline DataRow& operator=(const DataRow& from) {
    CopyFrom(from);
    return *this;
  }
  inline DataRow& operator=(DataRow&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const DataRow& default_instance() {
    return *internal_default_instance();
  }
  static inline const DataRow* internal_default_instance() {
    return reinterpret_cast<const DataRow*>(
               &_DataRow_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DataRow& a, DataRow& b) {
    a.Swap(&b);
  }
  inline void Swap(DataRow* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DataRow* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DataRow* New() const final {
    return new DataRow();
  }

  DataRow* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DataRow>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DataRow& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const DataRow& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataRow* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Proto.Data.DataRow";
  }
  protected:
  explicit DataRow(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRowsFieldNumber = 1,
  };
  // repeated double Rows = 1;
  int rows_size() const;
  private:
  int _internal_rows_size() const;
  public:
  void clear_rows();
  private:
  double _internal_rows(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_rows() const;
  void _internal_add_rows(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_rows();
  public:
  double rows(int index) const;
  void set_rows(int index, double value);
  void add_rows(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      rows() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_rows();

  // @@protoc_insertion_point(class_scope:Proto.Data.DataRow)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > rows_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtoData_2eproto;
};
// -------------------------------------------------------------------

class DataMatrix final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Proto.Data.DataMatrix) */ {
 public:
  inline DataMatrix() : DataMatrix(nullptr) {}
  ~DataMatrix() override;
  explicit constexpr DataMatrix(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DataMatrix(const DataMatrix& from);
  DataMatrix(DataMatrix&& from) noexcept
    : DataMatrix() {
    *this = ::std::move(from);
  }

  inline DataMatrix& operator=(const DataMatrix& from) {
    CopyFrom(from);
    return *this;
  }
  inline DataMatrix& operator=(DataMatrix&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const DataMatrix& default_instance() {
    return *internal_default_instance();
  }
  static inline const DataMatrix* internal_default_instance() {
    return reinterpret_cast<const DataMatrix*>(
               &_DataMatrix_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(DataMatrix& a, DataMatrix& b) {
    a.Swap(&b);
  }
  inline void Swap(DataMatrix* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DataMatrix* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DataMatrix* New() const final {
    return new DataMatrix();
  }

  DataMatrix* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DataMatrix>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DataMatrix& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const DataMatrix& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataMatrix* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Proto.Data.DataMatrix";
  }
  protected:
  explicit DataMatrix(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMatrixFieldNumber = 1,
  };
  // repeated .Proto.Data.DataRow Matrix = 1;
  int matrix_size() const;
  private:
  int _internal_matrix_size() const;
  public:
  void clear_matrix();
  ::Proto::Data::DataRow* mutable_matrix(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Proto::Data::DataRow >*
      mutable_matrix();
  private:
  const ::Proto::Data::DataRow& _internal_matrix(int index) const;
  ::Proto::Data::DataRow* _internal_add_matrix();
  public:
  const ::Proto::Data::DataRow& matrix(int index) const;
  ::Proto::Data::DataRow* add_matrix();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Proto::Data::DataRow >&
      matrix() const;

  // @@protoc_insertion_point(class_scope:Proto.Data.DataMatrix)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Proto::Data::DataRow > matrix_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtoData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DataRow

// repeated double Rows = 1;
inline int DataRow::_internal_rows_size() const {
  return rows_.size();
}
inline int DataRow::rows_size() const {
  return _internal_rows_size();
}
inline void DataRow::clear_rows() {
  rows_.Clear();
}
inline double DataRow::_internal_rows(int index) const {
  return rows_.Get(index);
}
inline double DataRow::rows(int index) const {
  // @@protoc_insertion_point(field_get:Proto.Data.DataRow.Rows)
  return _internal_rows(index);
}
inline void DataRow::set_rows(int index, double value) {
  rows_.Set(index, value);
  // @@protoc_insertion_point(field_set:Proto.Data.DataRow.Rows)
}
inline void DataRow::_internal_add_rows(double value) {
  rows_.Add(value);
}
inline void DataRow::add_rows(double value) {
  _internal_add_rows(value);
  // @@protoc_insertion_point(field_add:Proto.Data.DataRow.Rows)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
DataRow::_internal_rows() const {
  return rows_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
DataRow::rows() const {
  // @@protoc_insertion_point(field_list:Proto.Data.DataRow.Rows)
  return _internal_rows();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
DataRow::_internal_mutable_rows() {
  return &rows_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
DataRow::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Proto.Data.DataRow.Rows)
  return _internal_mutable_rows();
}

// -------------------------------------------------------------------

// DataMatrix

// repeated .Proto.Data.DataRow Matrix = 1;
inline int DataMatrix::_internal_matrix_size() const {
  return matrix_.size();
}
inline int DataMatrix::matrix_size() const {
  return _internal_matrix_size();
}
inline void DataMatrix::clear_matrix() {
  matrix_.Clear();
}
inline ::Proto::Data::DataRow* DataMatrix::mutable_matrix(int index) {
  // @@protoc_insertion_point(field_mutable:Proto.Data.DataMatrix.Matrix)
  return matrix_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Proto::Data::DataRow >*
DataMatrix::mutable_matrix() {
  // @@protoc_insertion_point(field_mutable_list:Proto.Data.DataMatrix.Matrix)
  return &matrix_;
}
inline const ::Proto::Data::DataRow& DataMatrix::_internal_matrix(int index) const {
  return matrix_.Get(index);
}
inline const ::Proto::Data::DataRow& DataMatrix::matrix(int index) const {
  // @@protoc_insertion_point(field_get:Proto.Data.DataMatrix.Matrix)
  return _internal_matrix(index);
}
inline ::Proto::Data::DataRow* DataMatrix::_internal_add_matrix() {
  return matrix_.Add();
}
inline ::Proto::Data::DataRow* DataMatrix::add_matrix() {
  ::Proto::Data::DataRow* _add = _internal_add_matrix();
  // @@protoc_insertion_point(field_add:Proto.Data.DataMatrix.Matrix)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Proto::Data::DataRow >&
DataMatrix::matrix() const {
  // @@protoc_insertion_point(field_list:Proto.Data.DataMatrix.Matrix)
  return matrix_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Data
}  // namespace Proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ProtoData_2eproto
