// University of Illinois/NCSA
// Open Source License
//
// Copyright (c) 2013-2015, Advanced Micro Devices, Inc.
// All rights reserved.
//
// Developed by:
//
//     HSA Team
//
//     Advanced Micro Devices, Inc
//
//     www.amd.com
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal with
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
// of the Software, and to permit persons to whom the Software is furnished to do
// so, subject to the following conditions:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimers.
//
//     * Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimers in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the names of the LLVM Team, University of Illinois at
//       Urbana-Champaign, nor the names of its contributors may be used to
//       endorse or promote products derived from this Software without specific
//       prior written permission.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS WITH THE
// SOFTWARE.
void AluModifier::initBrig() {
  brig()->allBits = 0;
}

void Code::initBrig() {
}

void Directive::initBrig() {
  Code::initBrig();
}

void DirectiveArgBlockEnd::initBrig() {
  initBrigBase(sizeof(BrigDirectiveArgBlockEnd), BRIG_KIND_DIRECTIVE_ARG_BLOCK_END);
  Directive::initBrig();
}

void DirectiveArgBlockStart::initBrig() {
  initBrigBase(sizeof(BrigDirectiveArgBlockStart), BRIG_KIND_DIRECTIVE_ARG_BLOCK_START);
  Directive::initBrig();
}

void DirectiveComment::initBrig() {
  initBrigBase(sizeof(BrigDirectiveComment), BRIG_KIND_DIRECTIVE_COMMENT);
  Directive::initBrig();
  brig()->name = 0;
}

void DirectiveControl::initBrig() {
  initBrigBase(sizeof(BrigDirectiveControl), BRIG_KIND_DIRECTIVE_CONTROL);
  Directive::initBrig();
  brig()->reserved = 0;
  brig()->operands = 0;
}

void DirectiveExecutable::initBrig() {
  Directive::initBrig();
  brig()->name = 0;
  brig()->outArgCount = 0;
  brig()->inArgCount = 0;
  brig()->firstInArg = 0;
  brig()->firstCodeBlockEntry = 0;
  brig()->nextModuleEntry = 0;
  modifier().initBrig();
  brig()->linkage = BRIG_LINKAGE_NONE;
  brig()->reserved = 0;
}

void DirectiveFunction::initBrig() {
  initBrigBase(sizeof(BrigDirectiveExecutable), BRIG_KIND_DIRECTIVE_FUNCTION);
  DirectiveExecutable::initBrig();
}

void DirectiveIndirectFunction::initBrig() {
  initBrigBase(sizeof(BrigDirectiveExecutable), BRIG_KIND_DIRECTIVE_INDIRECT_FUNCTION);
  DirectiveExecutable::initBrig();
}

void DirectiveKernel::initBrig() {
  initBrigBase(sizeof(BrigDirectiveExecutable), BRIG_KIND_DIRECTIVE_KERNEL);
  DirectiveExecutable::initBrig();
}

void DirectiveSignature::initBrig() {
  initBrigBase(sizeof(BrigDirectiveExecutable), BRIG_KIND_DIRECTIVE_SIGNATURE);
  DirectiveExecutable::initBrig();
}

void DirectiveExtension::initBrig() {
  initBrigBase(sizeof(BrigDirectiveExtension), BRIG_KIND_DIRECTIVE_EXTENSION);
  Directive::initBrig();
  brig()->name = 0;
}

void DirectiveFbarrier::initBrig() {
  initBrigBase(sizeof(BrigDirectiveFbarrier), BRIG_KIND_DIRECTIVE_FBARRIER);
  Directive::initBrig();
  brig()->name = 0;
  modifier().initBrig();
  brig()->linkage = BRIG_LINKAGE_NONE;
  brig()->reserved = 0;
}

void DirectiveLabel::initBrig() {
  initBrigBase(sizeof(BrigDirectiveLabel), BRIG_KIND_DIRECTIVE_LABEL);
  Directive::initBrig();
  brig()->name = 0;
}

void DirectiveLoc::initBrig() {
  initBrigBase(sizeof(BrigDirectiveLoc), BRIG_KIND_DIRECTIVE_LOC);
  Directive::initBrig();
  brig()->filename = 0;
  brig()->column = 1;
}

void DirectiveModule::initBrig() {
  initBrigBase(sizeof(BrigDirectiveModule), BRIG_KIND_DIRECTIVE_MODULE);
  Directive::initBrig();
  brig()->name = 0;
  brig()->profile = BRIG_PROFILE_FULL;
  brig()->machineModel = BRIG_MACHINE_LARGE;
  brig()->defaultFloatRound = BRIG_ROUND_NONE;
  brig()->reserved = 0;
}

void DirectiveNone::initBrig() {
  initBrigBase(sizeof(BrigDirectiveNone), BRIG_KIND_NONE);
  Directive::initBrig();
}

void DirectivePragma::initBrig() {
  initBrigBase(sizeof(BrigDirectivePragma), BRIG_KIND_DIRECTIVE_PRAGMA);
  Directive::initBrig();
  brig()->operands = 0;
}

void DirectiveVariable::initBrig() {
  initBrigBase(sizeof(BrigDirectiveVariable), BRIG_KIND_DIRECTIVE_VARIABLE);
  Directive::initBrig();
  brig()->name = 0;
  brig()->init = 0;
  brig()->segment = BRIG_SEGMENT_NONE;
  brig()->align = BRIG_ALIGNMENT_NONE;
  dim().initBrig();
  modifier().initBrig();
  brig()->linkage = BRIG_LINKAGE_NONE;
  brig()->allocation = BRIG_ALLOCATION_NONE;
  brig()->reserved = 0;
}

void Inst::initBrig() {
  Code::initBrig();
  brig()->operands = 0;
}

void InstAddr::initBrig() {
  initBrigBase(sizeof(BrigInstAddr), BRIG_KIND_INST_ADDR);
  Inst::initBrig();
  brig()->segment = BRIG_SEGMENT_NONE;
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void InstAtomic::initBrig() {
  initBrigBase(sizeof(BrigInstAtomic), BRIG_KIND_INST_ATOMIC);
  Inst::initBrig();
  brig()->segment = BRIG_SEGMENT_NONE;
  brig()->memoryOrder = BRIG_MEMORY_ORDER_RELAXED;
  brig()->memoryScope = BRIG_MEMORY_SCOPE_SYSTEM;
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void InstBasic::initBrig() {
  initBrigBase(sizeof(BrigInstBasic), BRIG_KIND_INST_BASIC);
  Inst::initBrig();
}

void InstBr::initBrig() {
  initBrigBase(sizeof(BrigInstBr), BRIG_KIND_INST_BR);
  Inst::initBrig();
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void InstCmp::initBrig() {
  initBrigBase(sizeof(BrigInstCmp), BRIG_KIND_INST_CMP);
  Inst::initBrig();
  modifier().initBrig();
  brig()->pack = BRIG_PACK_NONE;
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void InstCvt::initBrig() {
  initBrigBase(sizeof(BrigInstCvt), BRIG_KIND_INST_CVT);
  Inst::initBrig();
  modifier().initBrig();
  brig()->round = BRIG_ROUND_NONE;
}

void InstImage::initBrig() {
  initBrigBase(sizeof(BrigInstImage), BRIG_KIND_INST_IMAGE);
  Inst::initBrig();
  brig()->geometry = BRIG_GEOMETRY_UNKNOWN;
  brig()->reserved = 0;
}

void InstLane::initBrig() {
  initBrigBase(sizeof(BrigInstLane), BRIG_KIND_INST_LANE);
  Inst::initBrig();
  brig()->reserved = 0;
}

void InstMem::initBrig() {
  initBrigBase(sizeof(BrigInstMem), BRIG_KIND_INST_MEM);
  Inst::initBrig();
  brig()->segment = BRIG_SEGMENT_NONE;
  brig()->align = BRIG_ALIGNMENT_NONE;
  modifier().initBrig();
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void InstMemFence::initBrig() {
  initBrigBase(sizeof(BrigInstMemFence), BRIG_KIND_INST_MEM_FENCE);
  Inst::initBrig();
  brig()->memoryOrder = BRIG_MEMORY_ORDER_RELAXED;
  brig()->globalSegmentMemoryScope = BRIG_MEMORY_SCOPE_SYSTEM;
  brig()->groupSegmentMemoryScope = BRIG_MEMORY_SCOPE_SYSTEM;
  brig()->imageSegmentMemoryScope = BRIG_MEMORY_SCOPE_SYSTEM;
}

void InstMod::initBrig() {
  initBrigBase(sizeof(BrigInstMod), BRIG_KIND_INST_MOD);
  Inst::initBrig();
  modifier().initBrig();
  brig()->round = BRIG_ROUND_NONE;
  brig()->pack = BRIG_PACK_NONE;
  brig()->reserved = 0;
}

void InstQueryImage::initBrig() {
  initBrigBase(sizeof(BrigInstQueryImage), BRIG_KIND_INST_QUERY_IMAGE);
  Inst::initBrig();
  brig()->geometry = BRIG_GEOMETRY_UNKNOWN;
}

void InstQuerySampler::initBrig() {
  initBrigBase(sizeof(BrigInstQuerySampler), BRIG_KIND_INST_QUERY_SAMPLER);
  Inst::initBrig();
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void InstQueue::initBrig() {
  initBrigBase(sizeof(BrigInstQueue), BRIG_KIND_INST_QUEUE);
  Inst::initBrig();
  brig()->segment = BRIG_SEGMENT_NONE;
  brig()->memoryOrder = BRIG_MEMORY_ORDER_RELAXED;
  brig()->reserved = 0;
}

void InstSeg::initBrig() {
  initBrigBase(sizeof(BrigInstSeg), BRIG_KIND_INST_SEG);
  Inst::initBrig();
  brig()->segment = BRIG_SEGMENT_NONE;
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void InstSegCvt::initBrig() {
  initBrigBase(sizeof(BrigInstSegCvt), BRIG_KIND_INST_SEG_CVT);
  Inst::initBrig();
  brig()->segment = BRIG_SEGMENT_NONE;
  modifier().initBrig();
}

void InstSignal::initBrig() {
  initBrigBase(sizeof(BrigInstSignal), BRIG_KIND_INST_SIGNAL);
  Inst::initBrig();
  brig()->memoryOrder = BRIG_MEMORY_ORDER_RELAXED;
}

void InstSourceType::initBrig() {
  initBrigBase(sizeof(BrigInstSourceType), BRIG_KIND_INST_SOURCE_TYPE);
  Inst::initBrig();
  brig()->reserved = 0;
}

void ExecutableModifier::initBrig() {
  brig()->allBits = 0;
}

void MemoryModifier::initBrig() {
  brig()->allBits = 0;
}

void Operand::initBrig() {
}

void OperandAddress::initBrig() {
  initBrigBase(sizeof(BrigOperandAddress), BRIG_KIND_OPERAND_ADDRESS);
  Operand::initBrig();
  brig()->symbol = 0;
  brig()->reg = 0;
  offset().initBrig();
}

void OperandAlign::initBrig() {
  initBrigBase(sizeof(BrigOperandAlign), BRIG_KIND_OPERAND_ALIGN);
  Operand::initBrig();
  brig()->align = BRIG_ALIGNMENT_NONE;
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void OperandCodeList::initBrig() {
  initBrigBase(sizeof(BrigOperandCodeList), BRIG_KIND_OPERAND_CODE_LIST);
  Operand::initBrig();
  brig()->elements = 0;
}

void OperandCodeRef::initBrig() {
  initBrigBase(sizeof(BrigOperandCodeRef), BRIG_KIND_OPERAND_CODE_REF);
  Operand::initBrig();
  brig()->ref = 0;
}

void OperandConstantBytes::initBrig() {
  initBrigBase(sizeof(BrigOperandConstantBytes), BRIG_KIND_OPERAND_CONSTANT_BYTES);
  Operand::initBrig();
  brig()->type = 0;
  brig()->reserved = 0;
  brig()->bytes = 0;
}

void OperandConstantImage::initBrig() {
  initBrigBase(sizeof(BrigOperandConstantImage), BRIG_KIND_OPERAND_CONSTANT_IMAGE);
  Operand::initBrig();
  brig()->geometry = BRIG_GEOMETRY_UNKNOWN;
  brig()->channelOrder = BRIG_CHANNEL_ORDER_UNKNOWN;
  brig()->channelType = BRIG_CHANNEL_TYPE_UNKNOWN;
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
  width().initBrig();
  height().initBrig();
  depth().initBrig();
  array().initBrig();
}

void OperandConstantOperandList::initBrig() {
  initBrigBase(sizeof(BrigOperandConstantOperandList), BRIG_KIND_OPERAND_CONSTANT_OPERAND_LIST);
  Operand::initBrig();
  brig()->reserved = 0;
  brig()->elements = 0;
}

void OperandConstantSampler::initBrig() {
  initBrigBase(sizeof(BrigOperandConstantSampler), BRIG_KIND_OPERAND_CONSTANT_SAMPLER);
  Operand::initBrig();
  brig()->addressing = BRIG_ADDRESSING_CLAMP_TO_EDGE;
  for (int i=0;i<3;i++) {
    brig()->reserved[i] = 0;
  }
}

void OperandOperandList::initBrig() {
  initBrigBase(sizeof(BrigOperandOperandList), BRIG_KIND_OPERAND_OPERAND_LIST);
  Operand::initBrig();
  brig()->elements = 0;
}

void OperandRegister::initBrig() {
  initBrigBase(sizeof(BrigOperandRegister), BRIG_KIND_OPERAND_REGISTER);
  Operand::initBrig();
}

void OperandString::initBrig() {
  initBrigBase(sizeof(BrigOperandString), BRIG_KIND_OPERAND_STRING);
  Operand::initBrig();
  brig()->string = 0;
}

void OperandWavesize::initBrig() {
  initBrigBase(sizeof(BrigOperandWavesize), BRIG_KIND_OPERAND_WAVESIZE);
  Operand::initBrig();
}

void SegCvtModifier::initBrig() {
  brig()->allBits = 0;
}

void UInt64::initBrig() {
  brig()->lo = 0;
  brig()->hi = 0;
}

void VariableModifier::initBrig() {
  brig()->allBits = 0;
}

