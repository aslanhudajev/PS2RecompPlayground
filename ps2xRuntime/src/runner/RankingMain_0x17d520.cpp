#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RankingMain
// Address: 0x17d520 - 0x17e048
void RankingMain_0x17d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RankingMain_0x17d520");
#endif

    ctx->pc = 0x17d520u;

    // 0x17d520: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x17d524: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17d524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17d528: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17d52c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d530: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17d534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d538: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17d53c: 0x24632b30  addiu       $v1, $v1, 0x2B30
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11056));
    // 0x17d540: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17d544: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17d544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17d548: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17d54c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17d550: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17d554: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17d554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17d558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d55c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17d55cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17d560: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x17d560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x17d564: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x17d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d568: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x17d568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x17d56c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x17d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_17d570:
    // 0x17d570: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17d570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d574: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x17d574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d578: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x17d578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x17d57c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x17d57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d580: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x17d580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17d584: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x17d584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d588: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x17d588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d58c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17D58Cu;
    {
        const bool branch_taken_0x17d58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D58Cu;
            // 0x17d590: 0x24630005  addiu       $v1, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d58c) {
            ctx->pc = 0x17D570u;
            goto label_17d570;
        }
    }
    ctx->pc = 0x17D594u;
    // 0x17d594: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x17d598: 0x24422b30  addiu       $v0, $v0, 0x2B30
    ctx->pc = 0x17d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11056));
    // 0x17d59c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x17d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_17d5a0:
    // 0x17d5a0: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x17D5A0u;
    SET_GPR_U32(ctx, 31, 0x17D5A8u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5A8u; }
        if (ctx->pc != 0x17D5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5A8u; }
        if (ctx->pc != 0x17D5A8u) { return; }
    }
    ctx->pc = 0x17D5A8u;
    // 0x17d5a8: 0xc06069c  jal         func_181A70
    ctx->pc = 0x17D5A8u;
    SET_GPR_U32(ctx, 31, 0x17D5B0u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5B0u; }
        if (ctx->pc != 0x17D5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5B0u; }
        if (ctx->pc != 0x17D5B0u) { return; }
    }
    ctx->pc = 0x17D5B0u;
    // 0x17d5b0: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x17D5B0u;
    SET_GPR_U32(ctx, 31, 0x17D5B8u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5B8u; }
        if (ctx->pc != 0x17D5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5B8u; }
        if (ctx->pc != 0x17D5B8u) { return; }
    }
    ctx->pc = 0x17D5B8u;
    // 0x17d5b8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d5bc: 0x90223c90  lbu         $v0, 0x3C90($at)
    ctx->pc = 0x17d5bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17d5c0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D5C0u;
    {
        const bool branch_taken_0x17d5c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17d5c0) {
            ctx->pc = 0x17D5D8u;
            goto label_17d5d8;
        }
    }
    ctx->pc = 0x17D5C8u;
    // 0x17d5c8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17d5cc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d5d0: 0xa0223c90  sb          $v0, 0x3C90($at)
    ctx->pc = 0x17d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15504), (uint8_t)GPR_U32(ctx, 2));
    // 0x17d5d4: 0x0  nop
    ctx->pc = 0x17d5d4u;
    // NOP
label_17d5d8:
    // 0x17d5d8: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x17d5d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x17d5dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17d5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5e0: 0x2652a170  addiu       $s2, $s2, -0x5E90
    ctx->pc = 0x17d5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943088));
    // 0x17d5e4: 0x2411fff8  addiu       $s1, $zero, -0x8
    ctx->pc = 0x17d5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_17d5e8:
    // 0x17d5e8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d5ec: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17d5f0: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D5F0u;
    {
        const bool branch_taken_0x17d5f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5F0u;
            // 0x17d5f4: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5f0) {
            ctx->pc = 0x17D628u;
            goto label_17d628;
        }
    }
    ctx->pc = 0x17D5F8u;
    // 0x17d5f8: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17d5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17d5fc: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17d5fcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17d600: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d604: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17d604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17d608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d60c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17d60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17d610: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17d610u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d614: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D614u;
    SET_GPR_U32(ctx, 31, 0x17D61Cu);
    ctx->pc = 0x17D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D614u;
            // 0x17d618: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D61Cu; }
        if (ctx->pc != 0x17D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D61Cu; }
        if (ctx->pc != 0x17D61Cu) { return; }
    }
    ctx->pc = 0x17D61Cu;
    // 0x17d61c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17D61Cu;
    {
        const bool branch_taken_0x17d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d61c) {
            ctx->pc = 0x17D650u;
            goto label_17d650;
        }
    }
    ctx->pc = 0x17D624u;
    // 0x17d624: 0x0  nop
    ctx->pc = 0x17d624u;
    // NOP
label_17d628:
    // 0x17d628: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d62c: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17d62cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17d630: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17d630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17d634: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17d634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17d638: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d63c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d640: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17d640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17d644: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17d648: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D648u;
    SET_GPR_U32(ctx, 31, 0x17D650u);
    ctx->pc = 0x17D64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D648u;
            // 0x17d64c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D650u; }
        if (ctx->pc != 0x17D650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D650u; }
        if (ctx->pc != 0x17D650u) { return; }
    }
    ctx->pc = 0x17D650u;
label_17d650:
    // 0x17d650: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17d650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17d654: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x17d654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17d658: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17d658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17d65c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17D65Cu;
    {
        const bool branch_taken_0x17d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D65Cu;
            // 0x17d660: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d65c) {
            ctx->pc = 0x17D5E8u;
            goto label_17d5e8;
        }
    }
    ctx->pc = 0x17D664u;
    // 0x17d664: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17d668: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d66c: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x17d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x17d670: 0x24c61dd0  addiu       $a2, $a2, 0x1DD0
    ctx->pc = 0x17d670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7632));
    // 0x17d674: 0xc060a44  jal         func_182910
    ctx->pc = 0x17D674u;
    SET_GPR_U32(ctx, 31, 0x17D67Cu);
    ctx->pc = 0x17D678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D674u;
            // 0x17d678: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D67Cu; }
        if (ctx->pc != 0x17D67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D67Cu; }
        if (ctx->pc != 0x17D67Cu) { return; }
    }
    ctx->pc = 0x17D67Cu;
    // 0x17d67c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x17d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17d680: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x17d680u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x17d684: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d688: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17d688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d68c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17d68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d690: 0x26521610  addiu       $s2, $s2, 0x1610
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5648));
    // 0x17d694: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x17d694u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17d698:
    // 0x17d698: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D698u;
    {
        const bool branch_taken_0x17d698 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x17d698) {
            ctx->pc = 0x17D6B8u;
            goto label_17d6b8;
        }
    }
    ctx->pc = 0x17D6A0u;
    // 0x17d6a0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x17d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x17d6a4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x17d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x17d6a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D6A8u;
    {
        const bool branch_taken_0x17d6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17d6a8) {
            ctx->pc = 0x17D6B8u;
            goto label_17d6b8;
        }
    }
    ctx->pc = 0x17D6B0u;
    // 0x17d6b0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x17d6b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6b4: 0x0  nop
    ctx->pc = 0x17d6b4u;
    // NOP
label_17d6b8:
    // 0x17d6b8: 0xc066160  jal         func_198580
    ctx->pc = 0x17D6B8u;
    SET_GPR_U32(ctx, 31, 0x17D6C0u);
    ctx->pc = 0x17D6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6B8u;
            // 0x17d6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198580u;
    if (runtime->hasFunction(0x198580u)) {
        auto targetFn = runtime->lookupFunction(0x198580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6C0u; }
        if (ctx->pc != 0x17D6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRankItemName_0x198580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6C0u; }
        if (ctx->pc != 0x17D6C0u) { return; }
    }
    ctx->pc = 0x17D6C0u;
    // 0x17d6c0: 0x8e48004c  lw          $t0, 0x4C($s2)
    ctx->pc = 0x17d6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x17d6c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17d6c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17d6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6cc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x17d6d0: 0x24a51fc0  addiu       $a1, $a1, 0x1FC0
    ctx->pc = 0x17d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8128));
    // 0x17d6d4: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x17D6D4u;
    SET_GPR_U32(ctx, 31, 0x17D6DCu);
    ctx->pc = 0x17D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6D4u;
            // 0x17d6d8: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6DCu; }
        if (ctx->pc != 0x17D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6DCu; }
        if (ctx->pc != 0x17D6DCu) { return; }
    }
    ctx->pc = 0x17D6DCu;
    // 0x17d6dc: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x17d6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17d6e0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17d6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d6e4: 0x2605fff7  addiu       $a1, $s0, -0x9
    ctx->pc = 0x17d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
    // 0x17d6e8: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x17d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x17d6ec: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x17d6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x17d6f0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x17d6f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6f4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17d6f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6f8: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D6F8u;
    SET_GPR_U32(ctx, 31, 0x17D700u);
    ctx->pc = 0x17D6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6F8u;
            // 0x17d6fc: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D700u; }
        if (ctx->pc != 0x17D700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D700u; }
        if (ctx->pc != 0x17D700u) { return; }
    }
    ctx->pc = 0x17D700u;
    // 0x17d700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17d704: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x17d704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17d708: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x17D708u;
    {
        const bool branch_taken_0x17d708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D708u;
            // 0x17d70c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d708) {
            ctx->pc = 0x17D698u;
            goto label_17d698;
        }
    }
    ctx->pc = 0x17D710u;
    // 0x17d710: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x17d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17d714: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x17d714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x17d718: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D718u;
    {
        const bool branch_taken_0x17d718 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d718) {
            ctx->pc = 0x17D730u;
            goto label_17d730;
        }
    }
    ctx->pc = 0x17D720u;
    // 0x17d720: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x17d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x17d724: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17D724u;
    {
        const bool branch_taken_0x17d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D724u;
            // 0x17d728: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d724) {
            ctx->pc = 0x17D790u;
            goto label_17d790;
        }
    }
    ctx->pc = 0x17D72Cu;
    // 0x17d72c: 0x0  nop
    ctx->pc = 0x17d72cu;
    // NOP
label_17d730:
    // 0x17d730: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x17d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x17d734: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x17d734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17d738: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D738u;
    {
        const bool branch_taken_0x17d738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d738) {
            ctx->pc = 0x17D790u;
            goto label_17d790;
        }
    }
    ctx->pc = 0x17D740u;
    // 0x17d740: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x17d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17d744: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17d744u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d748: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x17d74c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x17d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17d750: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17d750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17d754: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x17d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17d758: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17d758u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d75c: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x17d75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17d760: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D760u;
    {
        const bool branch_taken_0x17d760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d760) {
            ctx->pc = 0x17D790u;
            goto label_17d790;
        }
    }
    ctx->pc = 0x17D768u;
    // 0x17d768: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x17d768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x17d76c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d774: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x17d774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x17d778: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x17d778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17d77c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17d77cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17d780: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x17d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17d784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d788: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x17d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x17d78c: 0x0  nop
    ctx->pc = 0x17d78cu;
    // NOP
label_17d790:
    // 0x17d790: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x17d794: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x17d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x17d798: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x17d798u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x17d79c: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x17d79cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x17d7a0: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x17d7a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x17d7a4: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x17d7a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x17d7a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17d7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7ac: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x17d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x17d7b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17d7b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7b4: 0x26733460  addiu       $s3, $s3, 0x3460
    ctx->pc = 0x17d7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 13408));
    // 0x17d7b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17d7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d7bc: 0x263131e0  addiu       $s1, $s1, 0x31E0
    ctx->pc = 0x17d7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12768));
    // 0x17d7c0: 0x26d62b30  addiu       $s6, $s6, 0x2B30
    ctx->pc = 0x17d7c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 11056));
    // 0x17d7c4: 0x26f73190  addiu       $s7, $s7, 0x3190
    ctx->pc = 0x17d7c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12688));
label_17d7c8:
    // 0x17d7c8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x17d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17d7cc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17d7d0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17d7d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d7d8: 0x2442a150  addiu       $v0, $v0, -0x5EB0
    ctx->pc = 0x17d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943056));
    // 0x17d7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d7e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d7e4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x17D7E4u;
    SET_GPR_U32(ctx, 31, 0x17D7ECu);
    ctx->pc = 0x17D7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7E4u;
            // 0x17d7e8: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D7ECu; }
        if (ctx->pc != 0x17D7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D7ECu; }
        if (ctx->pc != 0x17D7ECu) { return; }
    }
    ctx->pc = 0x17D7ECu;
    // 0x17d7ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17d7ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7f0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D7F0u;
    {
        const bool branch_taken_0x17d7f0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17D7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7F0u;
            // 0x17d7f4: 0x32060001  andi        $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7f0) {
            ctx->pc = 0x17D804u;
            goto label_17d804;
        }
    }
    ctx->pc = 0x17D7F8u;
    // 0x17d7f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D7F8u;
    {
        const bool branch_taken_0x17d7f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7F8u;
            // 0x17d7fc: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7f8) {
            ctx->pc = 0x17D808u;
            goto label_17d808;
        }
    }
    ctx->pc = 0x17D800u;
    // 0x17d800: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x17d800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_17d804:
    // 0x17d804: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x17d804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_17d808:
    // 0x17d808: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x17d808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17d80c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17d810: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x17d810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17d814: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17d814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17d818: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x17d818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x17d81c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x17d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17d820: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17d820u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x17d824: 0x4f040  sll         $fp, $a0, 1
    ctx->pc = 0x17d824u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17d828: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17d828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17d82c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d830: 0x24a20096  addiu       $v0, $a1, 0x96
    ctx->pc = 0x17d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 150));
    // 0x17d834: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x17d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17d838: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x17d83c: 0x2442ff73  addiu       $v0, $v0, -0x8D
    ctx->pc = 0x17d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967155));
    // 0x17d840: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17d840u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d848: 0x0  nop
    ctx->pc = 0x17d848u;
    // NOP
    // 0x17d84c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x17d84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17d850: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17D850u;
    SET_GPR_U32(ctx, 31, 0x17D858u);
    ctx->pc = 0x17D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D850u;
            // 0x17d854: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D858u; }
        if (ctx->pc != 0x17D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D858u; }
        if (ctx->pc != 0x17D858u) { return; }
    }
    ctx->pc = 0x17D858u;
    // 0x17d858: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x17d858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x17d85c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x17d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x17d860: 0xc0409de  jal         func_102778
    ctx->pc = 0x17D860u;
    SET_GPR_U32(ctx, 31, 0x17D868u);
    ctx->pc = 0x17D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D860u;
            // 0x17d864: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D868u; }
        if (ctx->pc != 0x17D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D868u; }
        if (ctx->pc != 0x17D868u) { return; }
    }
    ctx->pc = 0x17D868u;
    // 0x17d868: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x17d868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x17d86c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17d86cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17d870: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17d870u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17d874: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17d874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17d878: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17d878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17d87c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17d87cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17d880: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17d880u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17d884: 0xc040880  jal         func_102200
    ctx->pc = 0x17D884u;
    SET_GPR_U32(ctx, 31, 0x17D88Cu);
    ctx->pc = 0x17D888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D884u;
            // 0x17d888: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D88Cu; }
        if (ctx->pc != 0x17D88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D88Cu; }
        if (ctx->pc != 0x17D88Cu) { return; }
    }
    ctx->pc = 0x17D88Cu;
    // 0x17d88c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x17d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x17d890: 0xc0409de  jal         func_102778
    ctx->pc = 0x17D890u;
    SET_GPR_U32(ctx, 31, 0x17D898u);
    ctx->pc = 0x17D894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D890u;
            // 0x17d894: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D898u; }
        if (ctx->pc != 0x17D898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D898u; }
        if (ctx->pc != 0x17D898u) { return; }
    }
    ctx->pc = 0x17D898u;
    // 0x17d898: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x17d898u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17d89c: 0xc040850  jal         func_102140
    ctx->pc = 0x17D89Cu;
    SET_GPR_U32(ctx, 31, 0x17D8A4u);
    ctx->pc = 0x17D8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D89Cu;
            // 0x17d8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8A4u; }
        if (ctx->pc != 0x17D8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8A4u; }
        if (ctx->pc != 0x17D8A4u) { return; }
    }
    ctx->pc = 0x17D8A4u;
    // 0x17d8a4: 0x3c034062  lui         $v1, 0x4062
    ctx->pc = 0x17d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16482 << 16));
    // 0x17d8a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8ac: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x17d8acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49152u)));
    // 0x17d8b0: 0xc040850  jal         func_102140
    ctx->pc = 0x17D8B0u;
    SET_GPR_U32(ctx, 31, 0x17D8B8u);
    ctx->pc = 0x17D8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8B0u;
            // 0x17d8b4: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8B8u; }
        if (ctx->pc != 0x17D8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8B8u; }
        if (ctx->pc != 0x17D8B8u) { return; }
    }
    ctx->pc = 0x17D8B8u;
    // 0x17d8b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x17d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8bc: 0xc0409de  jal         func_102778
    ctx->pc = 0x17D8BCu;
    SET_GPR_U32(ctx, 31, 0x17D8C4u);
    ctx->pc = 0x17D8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8BCu;
            // 0x17d8c0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8C4u; }
        if (ctx->pc != 0x17D8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8C4u; }
        if (ctx->pc != 0x17D8C4u) { return; }
    }
    ctx->pc = 0x17D8C4u;
    // 0x17d8c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x17d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8c8: 0xc040850  jal         func_102140
    ctx->pc = 0x17D8C8u;
    SET_GPR_U32(ctx, 31, 0x17D8D0u);
    ctx->pc = 0x17D8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8C8u;
            // 0x17d8cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8D0u; }
        if (ctx->pc != 0x17D8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8D0u; }
        if (ctx->pc != 0x17D8D0u) { return; }
    }
    ctx->pc = 0x17D8D0u;
    // 0x17d8d0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17D8D0u;
    SET_GPR_U32(ctx, 31, 0x17D8D8u);
    ctx->pc = 0x17D8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8D0u;
            // 0x17d8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8D8u; }
        if (ctx->pc != 0x17D8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8D8u; }
        if (ctx->pc != 0x17D8D8u) { return; }
    }
    ctx->pc = 0x17D8D8u;
    // 0x17d8d8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17d8dc: 0xc0409de  jal         func_102778
    ctx->pc = 0x17D8DCu;
    SET_GPR_U32(ctx, 31, 0x17D8E4u);
    ctx->pc = 0x17D8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8DCu;
            // 0x17d8e0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8E4u; }
        if (ctx->pc != 0x17D8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8E4u; }
        if (ctx->pc != 0x17D8E4u) { return; }
    }
    ctx->pc = 0x17D8E4u;
    // 0x17d8e4: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x17d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x17d8e8: 0xc0409de  jal         func_102778
    ctx->pc = 0x17D8E8u;
    SET_GPR_U32(ctx, 31, 0x17D8F0u);
    ctx->pc = 0x17D8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8E8u;
            // 0x17d8ec: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8F0u; }
        if (ctx->pc != 0x17D8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8F0u; }
        if (ctx->pc != 0x17D8F0u) { return; }
    }
    ctx->pc = 0x17D8F0u;
    // 0x17d8f0: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x17d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x17d8f4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17d8f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17d8f8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17d8f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17d8fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17d8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17d900: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17d900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17d904: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17d904u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17d908: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17d908u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17d90c: 0xc040880  jal         func_102200
    ctx->pc = 0x17D90Cu;
    SET_GPR_U32(ctx, 31, 0x17D914u);
    ctx->pc = 0x17D910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D90Cu;
            // 0x17d910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D914u; }
        if (ctx->pc != 0x17D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D914u; }
        if (ctx->pc != 0x17D914u) { return; }
    }
    ctx->pc = 0x17D914u;
    // 0x17d914: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x17d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d918: 0xc040850  jal         func_102140
    ctx->pc = 0x17D918u;
    SET_GPR_U32(ctx, 31, 0x17D920u);
    ctx->pc = 0x17D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D918u;
            // 0x17d91c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D920u; }
        if (ctx->pc != 0x17D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D920u; }
        if (ctx->pc != 0x17D920u) { return; }
    }
    ctx->pc = 0x17D920u;
    // 0x17d920: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x17d920u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d924: 0xc0409de  jal         func_102778
    ctx->pc = 0x17D924u;
    SET_GPR_U32(ctx, 31, 0x17D92Cu);
    ctx->pc = 0x17D928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D924u;
            // 0x17d928: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D92Cu; }
        if (ctx->pc != 0x17D92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D92Cu; }
        if (ctx->pc != 0x17D92Cu) { return; }
    }
    ctx->pc = 0x17D92Cu;
    // 0x17d92c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x17d92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d930: 0xc040850  jal         func_102140
    ctx->pc = 0x17D930u;
    SET_GPR_U32(ctx, 31, 0x17D938u);
    ctx->pc = 0x17D934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D930u;
            // 0x17d934: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D938u; }
        if (ctx->pc != 0x17D938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D938u; }
        if (ctx->pc != 0x17D938u) { return; }
    }
    ctx->pc = 0x17D938u;
    // 0x17d938: 0x3c034061  lui         $v1, 0x4061
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16481 << 16));
    // 0x17d93c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d940: 0x3462a000  ori         $v0, $v1, 0xA000
    ctx->pc = 0x17d940u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)40960u)));
    // 0x17d944: 0xc040866  jal         func_102198
    ctx->pc = 0x17D944u;
    SET_GPR_U32(ctx, 31, 0x17D94Cu);
    ctx->pc = 0x17D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D944u;
            // 0x17d948: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D94Cu; }
        if (ctx->pc != 0x17D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D94Cu; }
        if (ctx->pc != 0x17D94Cu) { return; }
    }
    ctx->pc = 0x17D94Cu;
    // 0x17d94c: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17D94Cu;
    SET_GPR_U32(ctx, 31, 0x17D954u);
    ctx->pc = 0x17D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D94Cu;
            // 0x17d950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D954u; }
        if (ctx->pc != 0x17D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D954u; }
        if (ctx->pc != 0x17D954u) { return; }
    }
    ctx->pc = 0x17D954u;
    // 0x17d954: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x17d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17d958: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x17d958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x17d95c: 0x24843460  addiu       $a0, $a0, 0x3460
    ctx->pc = 0x17d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13408));
    // 0x17d960: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x17d960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x17d964: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17d964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17d968: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17d96c: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x17d96cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x17d970: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17d970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17d974: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17D974u;
    SET_GPR_U32(ctx, 31, 0x17D97Cu);
    ctx->pc = 0x17D978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D974u;
            // 0x17d978: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D97Cu; }
        if (ctx->pc != 0x17D97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D97Cu; }
        if (ctx->pc != 0x17D97Cu) { return; }
    }
    ctx->pc = 0x17D97Cu;
    // 0x17d97c: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x17d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17d980: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17d984: 0xc05f824  jal         func_17E090
    ctx->pc = 0x17D984u;
    SET_GPR_U32(ctx, 31, 0x17D98Cu);
    ctx->pc = 0x17D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D984u;
            // 0x17d988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E090u;
    if (runtime->hasFunction(0x17E090u)) {
        auto targetFn = runtime->lookupFunction(0x17E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D98Cu; }
        if (ctx->pc != 0x17D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x17e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D98Cu; }
        if (ctx->pc != 0x17D98Cu) { return; }
    }
    ctx->pc = 0x17D98Cu;
    // 0x17d98c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x17d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17d990: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17d994: 0x246331e0  addiu       $v1, $v1, 0x31E0
    ctx->pc = 0x17d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12768));
    // 0x17d998: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x17d998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17d99c: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x17d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x17d9a0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x17d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17d9a4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x17d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17d9a8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x17d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x17d9ac: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17d9b0: 0xc05f824  jal         func_17E090
    ctx->pc = 0x17D9B0u;
    SET_GPR_U32(ctx, 31, 0x17D9B8u);
    ctx->pc = 0x17D9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9B0u;
            // 0x17d9b4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E090u;
    if (runtime->hasFunction(0x17E090u)) {
        auto targetFn = runtime->lookupFunction(0x17E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9B8u; }
        if (ctx->pc != 0x17D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x17e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9B8u; }
        if (ctx->pc != 0x17D9B8u) { return; }
    }
    ctx->pc = 0x17D9B8u;
    // 0x17d9b8: 0x92c80000  lbu         $t0, 0x0($s6)
    ctx->pc = 0x17d9b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17d9bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17d9c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17d9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9c8: 0xc05f81c  jal         func_17E070
    ctx->pc = 0x17D9C8u;
    SET_GPR_U32(ctx, 31, 0x17D9D0u);
    ctx->pc = 0x17D9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9C8u;
            // 0x17d9cc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E070u;
    if (runtime->hasFunction(0x17E070u)) {
        auto targetFn = runtime->lookupFunction(0x17E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9D0u; }
        if (ctx->pc != 0x17D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x17e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D9D0u; }
        if (ctx->pc != 0x17D9D0u) { return; }
    }
    ctx->pc = 0x17D9D0u;
    // 0x17d9d0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17d9d4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x17d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x17d9d8: 0x24633460  addiu       $v1, $v1, 0x3460
    ctx->pc = 0x17d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13408));
    // 0x17d9dc: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x17d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x17d9e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17d9e4: 0x24843190  addiu       $a0, $a0, 0x3190
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12688));
    // 0x17d9e8: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x17d9ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17d9f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17d9f4: 0x246331e0  addiu       $v1, $v1, 0x31E0
    ctx->pc = 0x17d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12768));
    // 0x17d9f8: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x17d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x17d9fc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x17da00: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x17DA00u;
    SET_GPR_U32(ctx, 31, 0x17DA08u);
    ctx->pc = 0x17DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA00u;
            // 0x17da04: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA08u; }
        if (ctx->pc != 0x17DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA08u; }
        if (ctx->pc != 0x17DA08u) { return; }
    }
    ctx->pc = 0x17DA08u;
    // 0x17da08: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x17da08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x17da0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17da0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17da10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17da10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17da14: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x17da18: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x17da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17da1c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x17da20: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x17da20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x17da24: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x17da24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x17da28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x17da2c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x17da30: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x17da30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x17da34: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x17da34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17da38: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x17DA38u;
    {
        const bool branch_taken_0x17da38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA38u;
            // 0x17da3c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da38) {
            ctx->pc = 0x17D7C8u;
            goto label_17d7c8;
        }
    }
    ctx->pc = 0x17DA40u;
    // 0x17da40: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x17da40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x17da44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17da44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17da48: 0xc05f818  jal         func_17E060
    ctx->pc = 0x17DA48u;
    SET_GPR_U32(ctx, 31, 0x17DA50u);
    ctx->pc = 0x17DA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA48u;
            // 0x17da4c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA50u; }
        if (ctx->pc != 0x17DA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA50u; }
        if (ctx->pc != 0x17DA50u) { return; }
    }
    ctx->pc = 0x17DA50u;
    // 0x17da50: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x17da54: 0xc05f814  jal         func_17E050
    ctx->pc = 0x17DA54u;
    SET_GPR_U32(ctx, 31, 0x17DA5Cu);
    ctx->pc = 0x17DA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA54u;
            // 0x17da58: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA5Cu; }
        if (ctx->pc != 0x17DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA5Cu; }
        if (ctx->pc != 0x17DA5Cu) { return; }
    }
    ctx->pc = 0x17DA5Cu;
    // 0x17da5c: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x17DA5Cu;
    SET_GPR_U32(ctx, 31, 0x17DA64u);
    ctx->pc = 0x17DA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA5Cu;
            // 0x17da60: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA64u; }
        if (ctx->pc != 0x17DA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA64u; }
        if (ctx->pc != 0x17DA64u) { return; }
    }
    ctx->pc = 0x17DA64u;
    // 0x17da64: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x17da68: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x17da6c: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x17da70: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x17da74: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x17da74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x17da78: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x17da7c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17da7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da80: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x17da80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x17da84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17da84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da88: 0x269439b0  addiu       $s4, $s4, 0x39B0
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14768));
    // 0x17da8c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17da8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17da90: 0x26523730  addiu       $s2, $s2, 0x3730
    ctx->pc = 0x17da90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 14128));
    // 0x17da94: 0x26312b30  addiu       $s1, $s1, 0x2B30
    ctx->pc = 0x17da94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11056));
    // 0x17da98: 0x26d636e0  addiu       $s6, $s6, 0x36E0
    ctx->pc = 0x17da98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 14048));
    // 0x17da9c: 0x0  nop
    ctx->pc = 0x17da9cu;
    // NOP
label_17daa0:
    // 0x17daa0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17daa4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x17daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x17daa8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17daac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17daacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17dab0: 0x2442a138  addiu       $v0, $v0, -0x5EC8
    ctx->pc = 0x17dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943032));
    // 0x17dab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dab8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dabc: 0xc05c00c  jal         func_170030
    ctx->pc = 0x17DABCu;
    SET_GPR_U32(ctx, 31, 0x17DAC4u);
    ctx->pc = 0x17DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DABCu;
            // 0x17dac0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAC4u; }
        if (ctx->pc != 0x17DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAC4u; }
        if (ctx->pc != 0x17DAC4u) { return; }
    }
    ctx->pc = 0x17DAC4u;
    // 0x17dac4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17dac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dacc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17dad0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17dad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dad4: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x17dad8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17dad8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x17dadc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17dadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17dae0: 0x24a20074  addiu       $v0, $a1, 0x74
    ctx->pc = 0x17dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 116));
    // 0x17dae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17dae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dae8: 0x0  nop
    ctx->pc = 0x17dae8u;
    // NOP
    // 0x17daec: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x17daecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17daf0: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x17daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x17daf4: 0x2442ff78  addiu       $v0, $v0, -0x88
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967160));
    // 0x17daf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17daf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dafc: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17DAFCu;
    SET_GPR_U32(ctx, 31, 0x17DB04u);
    ctx->pc = 0x17DB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAFCu;
            // 0x17db00: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB04u; }
        if (ctx->pc != 0x17DB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB04u; }
        if (ctx->pc != 0x17DB04u) { return; }
    }
    ctx->pc = 0x17DB04u;
    // 0x17db04: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17db08: 0xc0409de  jal         func_102778
    ctx->pc = 0x17DB08u;
    SET_GPR_U32(ctx, 31, 0x17DB10u);
    ctx->pc = 0x17DB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB08u;
            // 0x17db0c: 0x13f100  sll         $fp, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB10u; }
        if (ctx->pc != 0x17DB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB10u; }
        if (ctx->pc != 0x17DB10u) { return; }
    }
    ctx->pc = 0x17DB10u;
    // 0x17db10: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x17db14: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17db14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17db18: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17db18u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17db1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17db20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17db24: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17db24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17db28: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17db28u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17db2c: 0xc040880  jal         func_102200
    ctx->pc = 0x17DB2Cu;
    SET_GPR_U32(ctx, 31, 0x17DB34u);
    ctx->pc = 0x17DB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB2Cu;
            // 0x17db30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB34u; }
        if (ctx->pc != 0x17DB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB34u; }
        if (ctx->pc != 0x17DB34u) { return; }
    }
    ctx->pc = 0x17DB34u;
    // 0x17db34: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x17db34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x17db38: 0xc0409de  jal         func_102778
    ctx->pc = 0x17DB38u;
    SET_GPR_U32(ctx, 31, 0x17DB40u);
    ctx->pc = 0x17DB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB38u;
            // 0x17db3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB40u; }
        if (ctx->pc != 0x17DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB40u; }
        if (ctx->pc != 0x17DB40u) { return; }
    }
    ctx->pc = 0x17DB40u;
    // 0x17db40: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x17db40u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17db44: 0xc040850  jal         func_102140
    ctx->pc = 0x17DB44u;
    SET_GPR_U32(ctx, 31, 0x17DB4Cu);
    ctx->pc = 0x17DB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB44u;
            // 0x17db48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB4Cu; }
        if (ctx->pc != 0x17DB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB4Cu; }
        if (ctx->pc != 0x17DB4Cu) { return; }
    }
    ctx->pc = 0x17DB4Cu;
    // 0x17db4c: 0x3c03405d  lui         $v1, 0x405D
    ctx->pc = 0x17db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16477 << 16));
    // 0x17db50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17db50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db54: 0xc040850  jal         func_102140
    ctx->pc = 0x17DB54u;
    SET_GPR_U32(ctx, 31, 0x17DB5Cu);
    ctx->pc = 0x17DB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB54u;
            // 0x17db58: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB5Cu; }
        if (ctx->pc != 0x17DB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB5Cu; }
        if (ctx->pc != 0x17DB5Cu) { return; }
    }
    ctx->pc = 0x17DB5Cu;
    // 0x17db5c: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17DB5Cu;
    SET_GPR_U32(ctx, 31, 0x17DB64u);
    ctx->pc = 0x17DB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB5Cu;
            // 0x17db60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB64u; }
        if (ctx->pc != 0x17DB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB64u; }
        if (ctx->pc != 0x17DB64u) { return; }
    }
    ctx->pc = 0x17DB64u;
    // 0x17db64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17db64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17db68: 0xc0409de  jal         func_102778
    ctx->pc = 0x17DB68u;
    SET_GPR_U32(ctx, 31, 0x17DB70u);
    ctx->pc = 0x17DB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB68u;
            // 0x17db6c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB70u; }
        if (ctx->pc != 0x17DB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB70u; }
        if (ctx->pc != 0x17DB70u) { return; }
    }
    ctx->pc = 0x17DB70u;
    // 0x17db70: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x17db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x17db74: 0xc0409de  jal         func_102778
    ctx->pc = 0x17DB74u;
    SET_GPR_U32(ctx, 31, 0x17DB7Cu);
    ctx->pc = 0x17DB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB74u;
            // 0x17db78: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB7Cu; }
        if (ctx->pc != 0x17DB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB7Cu; }
        if (ctx->pc != 0x17DB7Cu) { return; }
    }
    ctx->pc = 0x17DB7Cu;
    // 0x17db7c: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x17db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x17db80: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17db80u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17db84: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17db84u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17db88: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17db88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17db8c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17db8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17db90: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17db90u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17db94: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17db94u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17db98: 0xc040880  jal         func_102200
    ctx->pc = 0x17DB98u;
    SET_GPR_U32(ctx, 31, 0x17DBA0u);
    ctx->pc = 0x17DB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB98u;
            // 0x17db9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBA0u; }
        if (ctx->pc != 0x17DBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBA0u; }
        if (ctx->pc != 0x17DBA0u) { return; }
    }
    ctx->pc = 0x17DBA0u;
    // 0x17dba0: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x17dba0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17dba4: 0xc040850  jal         func_102140
    ctx->pc = 0x17DBA4u;
    SET_GPR_U32(ctx, 31, 0x17DBACu);
    ctx->pc = 0x17DBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBA4u;
            // 0x17dba8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBACu; }
        if (ctx->pc != 0x17DBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBACu; }
        if (ctx->pc != 0x17DBACu) { return; }
    }
    ctx->pc = 0x17DBACu;
    // 0x17dbac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x17dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x17dbb0: 0xc0409de  jal         func_102778
    ctx->pc = 0x17DBB0u;
    SET_GPR_U32(ctx, 31, 0x17DBB8u);
    ctx->pc = 0x17DBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBB0u;
            // 0x17dbb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBB8u; }
        if (ctx->pc != 0x17DBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBB8u; }
        if (ctx->pc != 0x17DBB8u) { return; }
    }
    ctx->pc = 0x17DBB8u;
    // 0x17dbb8: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x17dbb8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17dbbc: 0xc040850  jal         func_102140
    ctx->pc = 0x17DBBCu;
    SET_GPR_U32(ctx, 31, 0x17DBC4u);
    ctx->pc = 0x17DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBBCu;
            // 0x17dbc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBC4u; }
        if (ctx->pc != 0x17DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBC4u; }
        if (ctx->pc != 0x17DBC4u) { return; }
    }
    ctx->pc = 0x17DBC4u;
    // 0x17dbc4: 0x3c034061  lui         $v1, 0x4061
    ctx->pc = 0x17dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16481 << 16));
    // 0x17dbc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbcc: 0xc040866  jal         func_102198
    ctx->pc = 0x17DBCCu;
    SET_GPR_U32(ctx, 31, 0x17DBD4u);
    ctx->pc = 0x17DBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBCCu;
            // 0x17dbd0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBD4u; }
        if (ctx->pc != 0x17DBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBD4u; }
        if (ctx->pc != 0x17DBD4u) { return; }
    }
    ctx->pc = 0x17DBD4u;
    // 0x17dbd4: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17DBD4u;
    SET_GPR_U32(ctx, 31, 0x17DBDCu);
    ctx->pc = 0x17DBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBD4u;
            // 0x17dbd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBDCu; }
        if (ctx->pc != 0x17DBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBDCu; }
        if (ctx->pc != 0x17DBDCu) { return; }
    }
    ctx->pc = 0x17DBDCu;
    // 0x17dbdc: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x17dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x17dbe0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17dbe4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17dbe4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x17dbe8: 0x246339b0  addiu       $v1, $v1, 0x39B0
    ctx->pc = 0x17dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14768));
    // 0x17dbec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17dbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17dbf0: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x17dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x17dbf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17dbf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17dbf8: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17DBF8u;
    SET_GPR_U32(ctx, 31, 0x17DC00u);
    ctx->pc = 0x17DBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBF8u;
            // 0x17dbfc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC00u; }
        if (ctx->pc != 0x17DC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC00u; }
        if (ctx->pc != 0x17DC00u) { return; }
    }
    ctx->pc = 0x17DC00u;
    // 0x17dc00: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17dc04: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17dc08: 0xc05f824  jal         func_17E090
    ctx->pc = 0x17DC08u;
    SET_GPR_U32(ctx, 31, 0x17DC10u);
    ctx->pc = 0x17DC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC08u;
            // 0x17dc0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E090u;
    if (runtime->hasFunction(0x17E090u)) {
        auto targetFn = runtime->lookupFunction(0x17E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC10u; }
        if (ctx->pc != 0x17DC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x17e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC10u; }
        if (ctx->pc != 0x17DC10u) { return; }
    }
    ctx->pc = 0x17DC10u;
    // 0x17dc10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x17dc14: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x17dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17dc18: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
    // 0x17dc1c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x17dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17dc20: 0x5e2021  addu        $a0, $v0, $fp
    ctx->pc = 0x17dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17dc24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17dc28: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17dc2c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x17dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17dc30: 0xc05f824  jal         func_17E090
    ctx->pc = 0x17DC30u;
    SET_GPR_U32(ctx, 31, 0x17DC38u);
    ctx->pc = 0x17DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC30u;
            // 0x17dc34: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E090u;
    if (runtime->hasFunction(0x17E090u)) {
        auto targetFn = runtime->lookupFunction(0x17E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC38u; }
        if (ctx->pc != 0x17DC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x17e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC38u; }
        if (ctx->pc != 0x17DC38u) { return; }
    }
    ctx->pc = 0x17DC38u;
    // 0x17dc38: 0x92280000  lbu         $t0, 0x0($s1)
    ctx->pc = 0x17dc38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dc3c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17dc40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17dc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17dc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc48: 0xc05f81c  jal         func_17E070
    ctx->pc = 0x17DC48u;
    SET_GPR_U32(ctx, 31, 0x17DC50u);
    ctx->pc = 0x17DC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC48u;
            // 0x17dc4c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E070u;
    if (runtime->hasFunction(0x17E070u)) {
        auto targetFn = runtime->lookupFunction(0x17E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC50u; }
        if (ctx->pc != 0x17DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x17e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC50u; }
        if (ctx->pc != 0x17DC50u) { return; }
    }
    ctx->pc = 0x17DC50u;
    // 0x17dc50: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17dc54: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x17dc58: 0x246339b0  addiu       $v1, $v1, 0x39B0
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14768));
    // 0x17dc5c: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x17dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x17dc60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17dc64: 0x248436e0  addiu       $a0, $a0, 0x36E0
    ctx->pc = 0x17dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14048));
    // 0x17dc68: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x17dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x17dc6c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17dc70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17dc74: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x17dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
    // 0x17dc78: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x17dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x17dc7c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x17dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x17dc80: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x17DC80u;
    SET_GPR_U32(ctx, 31, 0x17DC88u);
    ctx->pc = 0x17DC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DC80u;
            // 0x17dc84: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC88u; }
        if (ctx->pc != 0x17DC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC88u; }
        if (ctx->pc != 0x17DC88u) { return; }
    }
    ctx->pc = 0x17DC88u;
    // 0x17dc88: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x17dc8c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x17dc8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x17dc90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17dc94: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x17dc94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17dc98: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17dc9c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x17dc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x17dca0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x17dca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x17dca4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x17dca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x17dca8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17dca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17dcac: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x17dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x17dcb0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x17dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x17dcb4: 0x2ae20014  slti        $v0, $s7, 0x14
    ctx->pc = 0x17dcb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17dcb8: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x17DCB8u;
    {
        const bool branch_taken_0x17dcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCB8u;
            // 0x17dcbc: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dcb8) {
            ctx->pc = 0x17DAA0u;
            goto label_17daa0;
        }
    }
    ctx->pc = 0x17DCC0u;
    // 0x17dcc0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x17dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x17dcc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dcc8: 0xc05f818  jal         func_17E060
    ctx->pc = 0x17DCC8u;
    SET_GPR_U32(ctx, 31, 0x17DCD0u);
    ctx->pc = 0x17DCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCC8u;
            // 0x17dccc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCD0u; }
        if (ctx->pc != 0x17DCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCD0u; }
        if (ctx->pc != 0x17DCD0u) { return; }
    }
    ctx->pc = 0x17DCD0u;
    // 0x17dcd0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x17dcd4: 0xc05f814  jal         func_17E050
    ctx->pc = 0x17DCD4u;
    SET_GPR_U32(ctx, 31, 0x17DCDCu);
    ctx->pc = 0x17DCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCD4u;
            // 0x17dcd8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCDCu; }
        if (ctx->pc != 0x17DCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCDCu; }
        if (ctx->pc != 0x17DCDCu) { return; }
    }
    ctx->pc = 0x17DCDCu;
    // 0x17dcdc: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x17DCDCu;
    SET_GPR_U32(ctx, 31, 0x17DCE4u);
    ctx->pc = 0x17DCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCDCu;
            // 0x17dce0: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCE4u; }
        if (ctx->pc != 0x17DCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCE4u; }
        if (ctx->pc != 0x17DCE4u) { return; }
    }
    ctx->pc = 0x17DCE4u;
    // 0x17dce4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x17dce8: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x17dce8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x17dcec: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x17dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x17dcf0: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x17dcf0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x17dcf4: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x17dcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x17dcf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17dcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcfc: 0x241eff6e  addiu       $fp, $zero, -0x92
    ctx->pc = 0x17dcfcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967150));
    // 0x17dd00: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x17dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x17dd04: 0x2415ff7e  addiu       $s5, $zero, -0x82
    ctx->pc = 0x17dd04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967166));
    // 0x17dd08: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17dd08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dd0c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x17dd0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dd10: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x17dd10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17dd14: 0x26521610  addiu       $s2, $s2, 0x1610
    ctx->pc = 0x17dd14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5648));
    // 0x17dd18: 0x26f72b50  addiu       $s7, $s7, 0x2B50
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 11088));
    // 0x17dd1c: 0x26312b30  addiu       $s1, $s1, 0x2B30
    ctx->pc = 0x17dd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11056));
label_17dd20:
    // 0x17dd20: 0x3c02c310  lui         $v0, 0xC310
    ctx->pc = 0x17dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49936 << 16));
    // 0x17dd24: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x17dd24u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dd28: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x17dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17dd2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17dd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17dd30: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x17dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x17dd34: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17dd34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x17dd38: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17dd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17dd3c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17DD3Cu;
    SET_GPR_U32(ctx, 31, 0x17DD44u);
    ctx->pc = 0x17DD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD3Cu;
            // 0x17dd40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD44u; }
        if (ctx->pc != 0x17DD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD44u; }
        if (ctx->pc != 0x17DD44u) { return; }
    }
    ctx->pc = 0x17DD44u;
    // 0x17dd44: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x17dd44u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dd48: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x17dd4c: 0x3c03c310  lui         $v1, 0xC310
    ctx->pc = 0x17dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49936 << 16));
    // 0x17dd50: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x17dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x17dd54: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x17dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x17dd58: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17dd5c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x17dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x17dd60: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17dd60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x17dd64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17dd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17dd68: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17dd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17dd6c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17DD6Cu;
    SET_GPR_U32(ctx, 31, 0x17DD74u);
    ctx->pc = 0x17DD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD6Cu;
            // 0x17dd70: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD74u; }
        if (ctx->pc != 0x17DD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD74u; }
        if (ctx->pc != 0x17DD74u) { return; }
    }
    ctx->pc = 0x17DD74u;
    // 0x17dd74: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DD74u;
    {
        const bool branch_taken_0x17dd74 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD74u;
            // 0x17dd78: 0x32060001  andi        $a2, $s0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd74) {
            ctx->pc = 0x17DD88u;
            goto label_17dd88;
        }
    }
    ctx->pc = 0x17DD7Cu;
    // 0x17dd7c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DD7Cu;
    {
        const bool branch_taken_0x17dd7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DD7Cu;
            // 0x17dd80: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd7c) {
            ctx->pc = 0x17DD8Cu;
            goto label_17dd8c;
        }
    }
    ctx->pc = 0x17DD84u;
    // 0x17dd84: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x17dd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_17dd88:
    // 0x17dd88: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x17dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_17dd8c:
    // 0x17dd8c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x17dd90: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x17dd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17dd94: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x17dd98: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x17dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x17dd9c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dda0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17dda4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x17dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17dda8: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x17dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x17ddac: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17ddb0: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x17ddb0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x17ddb4: 0x24a200a0  addiu       $v0, $a1, 0xA0
    ctx->pc = 0x17ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x17ddb8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x17ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x17ddbc: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x17ddbcu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ddc0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17ddc4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17ddc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17ddc8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x17ddc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x17ddcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ddd0: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17DDD0u;
    SET_GPR_U32(ctx, 31, 0x17DDD8u);
    ctx->pc = 0x17DDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DDD0u;
            // 0x17ddd4: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDD8u; }
        if (ctx->pc != 0x17DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDD8u; }
        if (ctx->pc != 0x17DDD8u) { return; }
    }
    ctx->pc = 0x17DDD8u;
    // 0x17ddd8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17dddc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x17dddcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dde0: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x17dde4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x17dde4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x17dde8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17dde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ddec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x17ddf0: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x17ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x17ddf4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ddf8: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x17ddfc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17ddfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x17de00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17de00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17de04: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x17DE04u;
    SET_GPR_U32(ctx, 31, 0x17DE0Cu);
    ctx->pc = 0x17DE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE04u;
            // 0x17de08: 0x46800b20  cvt.s.w     $f12, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE0Cu; }
        if (ctx->pc != 0x17DE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE0Cu; }
        if (ctx->pc != 0x17DE0Cu) { return; }
    }
    ctx->pc = 0x17DE0Cu;
    // 0x17de0c: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x17de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17de10: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x17de10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17de14: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17de14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17de18: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x17de18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x17de1c: 0x2442a120  addiu       $v0, $v0, -0x5EE0
    ctx->pc = 0x17de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x17de20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17de20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de24: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17de24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17de28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17de2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17de30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17de30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17de34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17de38: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x17de38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17de3c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x17de3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x17de40: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x17de40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17de44: 0xc05f81c  jal         func_17E070
    ctx->pc = 0x17DE44u;
    SET_GPR_U32(ctx, 31, 0x17DE4Cu);
    ctx->pc = 0x17DE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE44u;
            // 0x17de48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E070u;
    if (runtime->hasFunction(0x17E070u)) {
        auto targetFn = runtime->lookupFunction(0x17E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE4Cu; }
        if (ctx->pc != 0x17DE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x17e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE4Cu; }
        if (ctx->pc != 0x17DE4Cu) { return; }
    }
    ctx->pc = 0x17DE4Cu;
    // 0x17de4c: 0x8e470044  lw          $a3, 0x44($s2)
    ctx->pc = 0x17de4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17de50: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17de54: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17de54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17de58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x17de58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17de5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17de60: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x17de60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x17de64: 0x24632b50  addiu       $v1, $v1, 0x2B50
    ctx->pc = 0x17de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11088));
    // 0x17de68: 0x24c6a150  addiu       $a2, $a2, -0x5EB0
    ctx->pc = 0x17de68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943056));
    // 0x17de6c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17de70: 0x24a5a120  addiu       $a1, $a1, -0x5EE0
    ctx->pc = 0x17de70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943008));
    // 0x17de74: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x17de74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17de78: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17de7c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x17de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x17de80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17de84: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x17de84u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x17de88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17de88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17de8c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17de90: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x17de90u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x17de94: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x17de94u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17de98: 0xc05f81c  jal         func_17E070
    ctx->pc = 0x17DE98u;
    SET_GPR_U32(ctx, 31, 0x17DEA0u);
    ctx->pc = 0x17DE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DE98u;
            // 0x17de9c: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E070u;
    if (runtime->hasFunction(0x17E070u)) {
        auto targetFn = runtime->lookupFunction(0x17E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEA0u; }
        if (ctx->pc != 0x17DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x17e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEA0u; }
        if (ctx->pc != 0x17DEA0u) { return; }
    }
    ctx->pc = 0x17DEA0u;
    // 0x17dea0: 0x8e470044  lw          $a3, 0x44($s2)
    ctx->pc = 0x17dea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17dea4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17dea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17dea8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17deac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17deacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x17deb0: 0x24c6a150  addiu       $a2, $a2, -0x5EB0
    ctx->pc = 0x17deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943056));
    // 0x17deb4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x17deb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17deb8: 0x24a5a120  addiu       $a1, $a1, -0x5EE0
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943008));
    // 0x17debc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x17debcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17dec0: 0x24422b50  addiu       $v0, $v0, 0x2B50
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11088));
    // 0x17dec4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x17dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17dec8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x17dec8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17decc: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x17deccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x17ded0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17ded4: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x17ded4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)21846u)));
    // 0x17ded8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17dedc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x17dedcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x17dee0: 0x0  nop
    ctx->pc = 0x17dee0u;
    // NOP
    // 0x17dee4: 0x0  nop
    ctx->pc = 0x17dee4u;
    // NOP
    // 0x17dee8: 0x1010  mfhi        $v0
    ctx->pc = 0x17dee8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x17deec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x17deecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x17def0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17def0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17def4: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17def8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17defc: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x17defcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17df00: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x17df00u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x17df04: 0x90e70002  lbu         $a3, 0x2($a3)
    ctx->pc = 0x17df04u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x17df08: 0xc05f81c  jal         func_17E070
    ctx->pc = 0x17DF08u;
    SET_GPR_U32(ctx, 31, 0x17DF10u);
    ctx->pc = 0x17DF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF08u;
            // 0x17df0c: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E070u;
    if (runtime->hasFunction(0x17E070u)) {
        auto targetFn = runtime->lookupFunction(0x17E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF10u; }
        if (ctx->pc != 0x17DF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x17e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF10u; }
        if (ctx->pc != 0x17DF10u) { return; }
    }
    ctx->pc = 0x17DF10u;
    // 0x17df10: 0x8e470044  lw          $a3, 0x44($s2)
    ctx->pc = 0x17df10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17df14: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17df14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17df18: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17df1c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x17df1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17df20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17df20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17df24: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x17df24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x17df28: 0x24632b50  addiu       $v1, $v1, 0x2B50
    ctx->pc = 0x17df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11088));
    // 0x17df2c: 0x24c6a150  addiu       $a2, $a2, -0x5EB0
    ctx->pc = 0x17df2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943056));
    // 0x17df30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17df34: 0x24a5a120  addiu       $a1, $a1, -0x5EE0
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943008));
    // 0x17df38: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x17df38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17df3c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17df40: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17df44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17df44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17df48: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x17df48u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x17df4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17df50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17df54: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x17df54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x17df58: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x17df58u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17df5c: 0xc05f81c  jal         func_17E070
    ctx->pc = 0x17DF5Cu;
    SET_GPR_U32(ctx, 31, 0x17DF64u);
    ctx->pc = 0x17DF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF5Cu;
            // 0x17df60: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E070u;
    if (runtime->hasFunction(0x17E070u)) {
        auto targetFn = runtime->lookupFunction(0x17E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF64u; }
        if (ctx->pc != 0x17DF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x17e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF64u; }
        if (ctx->pc != 0x17DF64u) { return; }
    }
    ctx->pc = 0x17DF64u;
    // 0x17df64: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17df68: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x17df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x17df6c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x17df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x17df70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17df74: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17df74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17df78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17df78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17df7c: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x17df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x17df80: 0xc05f818  jal         func_17E060
    ctx->pc = 0x17DF80u;
    SET_GPR_U32(ctx, 31, 0x17DF88u);
    ctx->pc = 0x17DF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF80u;
            // 0x17df84: 0xac570000  sw          $s7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF88u; }
        if (ctx->pc != 0x17DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF88u; }
        if (ctx->pc != 0x17DF88u) { return; }
    }
    ctx->pc = 0x17DF88u;
    // 0x17df88: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x17df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x17df8c: 0xc05f814  jal         func_17E050
    ctx->pc = 0x17DF8Cu;
    SET_GPR_U32(ctx, 31, 0x17DF94u);
    ctx->pc = 0x17DF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF8Cu;
            // 0x17df90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF94u; }
        if (ctx->pc != 0x17DF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF94u; }
        if (ctx->pc != 0x17DF94u) { return; }
    }
    ctx->pc = 0x17DF94u;
    // 0x17df94: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x17DF94u;
    SET_GPR_U32(ctx, 31, 0x17DF9Cu);
    ctx->pc = 0x17DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF94u;
            // 0x17df98: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF9Cu; }
        if (ctx->pc != 0x17DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF9Cu; }
        if (ctx->pc != 0x17DF9Cu) { return; }
    }
    ctx->pc = 0x17DF9Cu;
    // 0x17df9c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x17df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17dfa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17dfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dfa4: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x17dfa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x17dfa8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x17dfa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17dfac: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17dfacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17dfb0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x17dfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x17dfb4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x17dfb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x17dfb8: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x17dfb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x17dfbc: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x17dfbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x17dfc0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17dfc4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x17dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x17dfc8: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x17dfc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17dfcc: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x17DFCCu;
    {
        const bool branch_taken_0x17dfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFCCu;
            // 0x17dfd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfcc) {
            ctx->pc = 0x17DD20u;
            goto label_17dd20;
        }
    }
    ctx->pc = 0x17DFD4u;
    // 0x17dfd4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17dfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17dfd8: 0x8c232410  lw          $v1, 0x2410($at)
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x17dfdc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17dfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17dfe0: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x17dfe4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17dfe4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17dfe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DFE8u;
    {
        const bool branch_taken_0x17dfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFE8u;
            // 0x17dfec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfe8) {
            ctx->pc = 0x17E000u;
            goto label_17e000;
        }
    }
    ctx->pc = 0x17DFF0u;
    // 0x17dff0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17DFF0u;
    SET_GPR_U32(ctx, 31, 0x17DFF8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFF8u; }
        if (ctx->pc != 0x17DFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFF8u; }
        if (ctx->pc != 0x17DFF8u) { return; }
    }
    ctx->pc = 0x17DFF8u;
    // 0x17dff8: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x17dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x17dffc: 0x0  nop
    ctx->pc = 0x17dffcu;
    // NOP
label_17e000:
    // 0x17e000: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x17E000u;
    SET_GPR_U32(ctx, 31, 0x17E008u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E008u; }
        if (ctx->pc != 0x17E008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E008u; }
        if (ctx->pc != 0x17E008u) { return; }
    }
    ctx->pc = 0x17E008u;
    // 0x17e008: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x17e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x17e00c: 0x1460fd64  bnez        $v1, . + 4 + (-0x29C << 2)
    ctx->pc = 0x17E00Cu;
    {
        const bool branch_taken_0x17e00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e00c) {
            ctx->pc = 0x17D5A0u;
            goto label_17d5a0;
        }
    }
    ctx->pc = 0x17E014u;
    // 0x17e014: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17e014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17e018: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e01c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17e01cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17e020: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17e020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e024: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17e024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e028: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17e028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e02c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17e02cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e030: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17e030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e034: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e03c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e040: 0x3e00008  jr          $ra
    ctx->pc = 0x17E040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E040u;
            // 0x17e044: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D570u: goto label_17d570;
            case 0x17D5A0u: goto label_17d5a0;
            case 0x17D5D8u: goto label_17d5d8;
            case 0x17D5E8u: goto label_17d5e8;
            case 0x17D628u: goto label_17d628;
            case 0x17D650u: goto label_17d650;
            case 0x17D698u: goto label_17d698;
            case 0x17D6B8u: goto label_17d6b8;
            case 0x17D730u: goto label_17d730;
            case 0x17D790u: goto label_17d790;
            case 0x17D7C8u: goto label_17d7c8;
            case 0x17D804u: goto label_17d804;
            case 0x17D808u: goto label_17d808;
            case 0x17DAA0u: goto label_17daa0;
            case 0x17DD20u: goto label_17dd20;
            case 0x17DD88u: goto label_17dd88;
            case 0x17DD8Cu: goto label_17dd8c;
            case 0x17E000u: goto label_17e000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E048u;
}
