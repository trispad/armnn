//
// Copyright © 2020 Arm Ltd and Contributors. All rights reserved.
// SPDX-License-Identifier: MIT
//

// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_CLCONTEXTSCHEMA_ARMNN_H_
#define FLATBUFFERS_GENERATED_CLCONTEXTSCHEMA_ARMNN_H_

#include "flatbuffers/flatbuffers.h"

namespace armnn {

struct ClContext;
struct ClContextBuilder;

struct Program;
struct ProgramBuilder;

struct ClContext FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ClContextBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PROGRAMS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<armnn::Program>> *programs() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<armnn::Program>> *>(VT_PROGRAMS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_PROGRAMS) &&
           verifier.VerifyVector(programs()) &&
           verifier.VerifyVectorOfTables(programs()) &&
           verifier.EndTable();
  }
};

struct ClContextBuilder {
  typedef ClContext Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_programs(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<armnn::Program>>> programs) {
    fbb_.AddOffset(ClContext::VT_PROGRAMS, programs);
  }
  explicit ClContextBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ClContextBuilder &operator=(const ClContextBuilder &);
  flatbuffers::Offset<ClContext> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ClContext>(end);
    return o;
  }
};

inline flatbuffers::Offset<ClContext> CreateClContext(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<armnn::Program>>> programs = 0) {
  ClContextBuilder builder_(_fbb);
  builder_.add_programs(programs);
  return builder_.Finish();
}

inline flatbuffers::Offset<ClContext> CreateClContextDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<armnn::Program>> *programs = nullptr) {
  auto programs__ = programs ? _fbb.CreateVector<flatbuffers::Offset<armnn::Program>>(*programs) : 0;
  return armnn::CreateClContext(
      _fbb,
      programs__);
}

struct Program FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ProgramBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_BINARY = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<uint8_t> *binary() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BINARY);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_BINARY) &&
           verifier.VerifyVector(binary()) &&
           verifier.EndTable();
  }
};

struct ProgramBuilder {
  typedef Program Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Program::VT_NAME, name);
  }
  void add_binary(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> binary) {
    fbb_.AddOffset(Program::VT_BINARY, binary);
  }
  explicit ProgramBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ProgramBuilder &operator=(const ProgramBuilder &);
  flatbuffers::Offset<Program> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Program>(end);
    return o;
  }
};

inline flatbuffers::Offset<Program> CreateProgram(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> binary = 0) {
  ProgramBuilder builder_(_fbb);
  builder_.add_binary(binary);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Program> CreateProgramDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<uint8_t> *binary = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto binary__ = binary ? _fbb.CreateVector<uint8_t>(*binary) : 0;
  return armnn::CreateProgram(
      _fbb,
      name__,
      binary__);
}

inline const armnn::ClContext *GetClContext(const void *buf) {
  return flatbuffers::GetRoot<armnn::ClContext>(buf);
}

inline const armnn::ClContext *GetSizePrefixedClContext(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<armnn::ClContext>(buf);
}

inline const char *ClContextIdentifier() {
  return "ARMN";
}

inline bool ClContextBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ClContextIdentifier());
}

inline bool VerifyClContextBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<armnn::ClContext>(ClContextIdentifier());
}

inline bool VerifySizePrefixedClContextBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<armnn::ClContext>(ClContextIdentifier());
}

inline const char *ClContextExtension() {
  return "armnn";
}

inline void FinishClContextBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<armnn::ClContext> root) {
  fbb.Finish(root, ClContextIdentifier());
}

inline void FinishSizePrefixedClContextBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<armnn::ClContext> root) {
  fbb.FinishSizePrefixed(root, ClContextIdentifier());
}

}  // namespace armnn

#endif  // FLATBUFFERS_GENERATED_CLCONTEXTSCHEMA_ARMNN_H_
