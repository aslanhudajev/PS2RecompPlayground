#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PracticeMain
// Address: 0x17f8e0 - 0x17fdd0
void PracticeMain_0x17f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PracticeMain_0x17f8e0");
#endif

    ctx->pc = 0x17f8e0u;

    // 0x17f8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17f8e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17f8e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17f8ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17f8f0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x17f8f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f8f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f8f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f8fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f900: 0xc060410  jal         func_181040
    ctx->pc = 0x17F900u;
    SET_GPR_U32(ctx, 31, 0x17F908u);
    ctx->pc = 0x17F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F900u;
            // 0x17f904: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181040u;
    if (runtime->hasFunction(0x181040u)) {
        auto targetFn = runtime->lookupFunction(0x181040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F908u; }
        if (ctx->pc != 0x17F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        practice_paramInit_0x181040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F908u; }
        if (ctx->pc != 0x17F908u) { return; }
    }
    ctx->pc = 0x17F908u;
label_17f908:
    // 0x17f908: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x17F908u;
    SET_GPR_U32(ctx, 31, 0x17F910u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F910u; }
        if (ctx->pc != 0x17F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F910u; }
        if (ctx->pc != 0x17F910u) { return; }
    }
    ctx->pc = 0x17F910u;
    // 0x17f910: 0xc06069c  jal         func_181A70
    ctx->pc = 0x17F910u;
    SET_GPR_U32(ctx, 31, 0x17F918u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F918u; }
        if (ctx->pc != 0x17F918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F918u; }
        if (ctx->pc != 0x17F918u) { return; }
    }
    ctx->pc = 0x17F918u;
    // 0x17f918: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x17F918u;
    SET_GPR_U32(ctx, 31, 0x17F920u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F920u; }
        if (ctx->pc != 0x17F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F920u; }
        if (ctx->pc != 0x17F920u) { return; }
    }
    ctx->pc = 0x17F920u;
    // 0x17f920: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f924: 0x90223c90  lbu         $v0, 0x3C90($at)
    ctx->pc = 0x17f924u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17f928: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F928u;
    {
        const bool branch_taken_0x17f928 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17f928) {
            ctx->pc = 0x17F940u;
            goto label_17f940;
        }
    }
    ctx->pc = 0x17F930u;
    // 0x17f930: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17f934: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f938: 0xa0223c90  sb          $v0, 0x3C90($at)
    ctx->pc = 0x17f938u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15504), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f93c: 0x0  nop
    ctx->pc = 0x17f93cu;
    // NOP
label_17f940:
    // 0x17f940: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f944: 0x90223c70  lbu         $v0, 0x3C70($at)
    ctx->pc = 0x17f944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17f948: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x17f948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17f94c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F94Cu;
    {
        const bool branch_taken_0x17f94c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f94c) {
            ctx->pc = 0x17F960u;
            goto label_17f960;
        }
    }
    ctx->pc = 0x17F954u;
    // 0x17f954: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f958: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f95c: 0xa0223c70  sb          $v0, 0x3C70($at)
    ctx->pc = 0x17f95cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15472), (uint8_t)GPR_U32(ctx, 2));
label_17f960:
    // 0x17f960: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f964: 0x8c2323e8  lw          $v1, 0x23E8($at)
    ctx->pc = 0x17f964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9192)));
    // 0x17f968: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f96c: 0x8c222378  lw          $v0, 0x2378($at)
    ctx->pc = 0x17f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9080)));
    // 0x17f970: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f970u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f974: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F974u;
    {
        const bool branch_taken_0x17f974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F974u;
            // 0x17f978: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f974) {
            ctx->pc = 0x17F9B8u;
            goto label_17f9b8;
        }
    }
    ctx->pc = 0x17F97Cu;
    // 0x17f97c: 0xc05d110  jal         func_174440
    ctx->pc = 0x17F97Cu;
    SET_GPR_U32(ctx, 31, 0x17F984u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F984u; }
        if (ctx->pc != 0x17F984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F984u; }
        if (ctx->pc != 0x17F984u) { return; }
    }
    ctx->pc = 0x17F984u;
    // 0x17f984: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f988: 0x8c222800  lw          $v0, 0x2800($at)
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
    // 0x17f98c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f990: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f994: 0xac222800  sw          $v0, 0x2800($at)
    ctx->pc = 0x17f994u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10240), GPR_U32(ctx, 2));
    // 0x17f998: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f99c: 0x8c222800  lw          $v0, 0x2800($at)
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
    // 0x17f9a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F9A0u;
    {
        const bool branch_taken_0x17f9a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17F9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9A0u;
            // 0x17f9a4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9a0) {
            ctx->pc = 0x17F9B0u;
            goto label_17f9b0;
        }
    }
    ctx->pc = 0x17F9A8u;
    // 0x17f9a8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f9ac: 0xac222800  sw          $v0, 0x2800($at)
    ctx->pc = 0x17f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10240), GPR_U32(ctx, 2));
label_17f9b0:
    // 0x17f9b0: 0xc060410  jal         func_181040
    ctx->pc = 0x17F9B0u;
    SET_GPR_U32(ctx, 31, 0x17F9B8u);
    ctx->pc = 0x181040u;
    if (runtime->hasFunction(0x181040u)) {
        auto targetFn = runtime->lookupFunction(0x181040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9B8u; }
        if (ctx->pc != 0x17F9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        practice_paramInit_0x181040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9B8u; }
        if (ctx->pc != 0x17F9B8u) { return; }
    }
    ctx->pc = 0x17F9B8u;
label_17f9b8:
    // 0x17f9b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f9bc: 0x8c2323e0  lw          $v1, 0x23E0($at)
    ctx->pc = 0x17f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9184)));
    // 0x17f9c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f9c4: 0x8c222370  lw          $v0, 0x2370($at)
    ctx->pc = 0x17f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9072)));
    // 0x17f9c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f9c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f9cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F9CCu;
    {
        const bool branch_taken_0x17f9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9CCu;
            // 0x17f9d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9cc) {
            ctx->pc = 0x17FA10u;
            goto label_17fa10;
        }
    }
    ctx->pc = 0x17F9D4u;
    // 0x17f9d4: 0xc05d110  jal         func_174440
    ctx->pc = 0x17F9D4u;
    SET_GPR_U32(ctx, 31, 0x17F9DCu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9DCu; }
        if (ctx->pc != 0x17F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9DCu; }
        if (ctx->pc != 0x17F9DCu) { return; }
    }
    ctx->pc = 0x17F9DCu;
    // 0x17f9dc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f9e0: 0x8c222800  lw          $v0, 0x2800($at)
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
    // 0x17f9e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f9e8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f9ec: 0xac222800  sw          $v0, 0x2800($at)
    ctx->pc = 0x17f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10240), GPR_U32(ctx, 2));
    // 0x17f9f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f9f4: 0x8c222800  lw          $v0, 0x2800($at)
    ctx->pc = 0x17f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
    // 0x17f9f8: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x17f9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x17f9fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F9FCu;
    {
        const bool branch_taken_0x17f9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9FCu;
            // 0x17fa00: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9fc) {
            ctx->pc = 0x17FA08u;
            goto label_17fa08;
        }
    }
    ctx->pc = 0x17FA04u;
    // 0x17fa04: 0xac202800  sw          $zero, 0x2800($at)
    ctx->pc = 0x17fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10240), GPR_U32(ctx, 0));
label_17fa08:
    // 0x17fa08: 0xc060410  jal         func_181040
    ctx->pc = 0x17FA08u;
    SET_GPR_U32(ctx, 31, 0x17FA10u);
    ctx->pc = 0x181040u;
    if (runtime->hasFunction(0x181040u)) {
        auto targetFn = runtime->lookupFunction(0x181040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA10u; }
        if (ctx->pc != 0x17FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        practice_paramInit_0x181040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA10u; }
        if (ctx->pc != 0x17FA10u) { return; }
    }
    ctx->pc = 0x17FA10u;
label_17fa10:
    // 0x17fa10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17fa14: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17fa18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17fa1c: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17fa20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17fa20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17fa24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FA24u;
    {
        const bool branch_taken_0x17fa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA24u;
            // 0x17fa28: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa24) {
            ctx->pc = 0x17FA48u;
            goto label_17fa48;
        }
    }
    ctx->pc = 0x17FA2Cu;
    // 0x17fa2c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17fa30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17fa34: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17fa38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17fa38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17fa3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17FA3Cu;
    {
        const bool branch_taken_0x17fa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fa3c) {
            ctx->pc = 0x17FAB0u;
            goto label_17fab0;
        }
    }
    ctx->pc = 0x17FA44u;
    // 0x17fa44: 0x0  nop
    ctx->pc = 0x17fa44u;
    // NOP
label_17fa48:
    // 0x17fa48: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fa4c: 0x8c232800  lw          $v1, 0x2800($at)
    ctx->pc = 0x17fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
    // 0x17fa50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17fa54: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FA54u;
    {
        const bool branch_taken_0x17fa54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA54u;
            // 0x17fa58: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa54) {
            ctx->pc = 0x17FA70u;
            goto label_17fa70;
        }
    }
    ctx->pc = 0x17FA5Cu;
    // 0x17fa5c: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FA5Cu;
    SET_GPR_U32(ctx, 31, 0x17FA64u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA64u; }
        if (ctx->pc != 0x17FA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA64u; }
        if (ctx->pc != 0x17FA64u) { return; }
    }
    ctx->pc = 0x17FA64u;
    // 0x17fa64: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17fa64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17FA68u;
    {
        const bool branch_taken_0x17fa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA68u;
            // 0x17fa6c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa68) {
            ctx->pc = 0x17FAB0u;
            goto label_17fab0;
        }
    }
    ctx->pc = 0x17FA70u;
label_17fa70:
    // 0x17fa70: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x17fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x17fa74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17fa78: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x17fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x17fa7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fa80: 0x8c420224  lw          $v0, 0x224($v0)
    ctx->pc = 0x17fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x17fa84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FA84u;
    {
        const bool branch_taken_0x17fa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA84u;
            // 0x17fa88: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa84) {
            ctx->pc = 0x17FAA8u;
            goto label_17faa8;
        }
    }
    ctx->pc = 0x17FA8Cu;
    // 0x17fa8c: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FA8Cu;
    SET_GPR_U32(ctx, 31, 0x17FA94u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA94u; }
        if (ctx->pc != 0x17FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA94u; }
        if (ctx->pc != 0x17FA94u) { return; }
    }
    ctx->pc = 0x17FA94u;
    // 0x17fa94: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fa98: 0x8c342800  lw          $s4, 0x2800($at)
    ctx->pc = 0x17fa98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
    // 0x17fa9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17FA9Cu;
    {
        const bool branch_taken_0x17fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA9Cu;
            // 0x17faa0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa9c) {
            ctx->pc = 0x17FAB0u;
            goto label_17fab0;
        }
    }
    ctx->pc = 0x17FAA4u;
    // 0x17faa4: 0x0  nop
    ctx->pc = 0x17faa4u;
    // NOP
label_17faa8:
    // 0x17faa8: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FAA8u;
    SET_GPR_U32(ctx, 31, 0x17FAB0u);
    ctx->pc = 0x17FAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAA8u;
            // 0x17faac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAB0u; }
        if (ctx->pc != 0x17FAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAB0u; }
        if (ctx->pc != 0x17FAB0u) { return; }
    }
    ctx->pc = 0x17FAB0u;
label_17fab0:
    // 0x17fab0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17fab4: 0x8c232410  lw          $v1, 0x2410($at)
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x17fab8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17fabc: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x17fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x17fac0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17fac0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17fac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FAC4u;
    {
        const bool branch_taken_0x17fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAC4u;
            // 0x17fac8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fac4) {
            ctx->pc = 0x17FAE0u;
            goto label_17fae0;
        }
    }
    ctx->pc = 0x17FACCu;
    // 0x17facc: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FACCu;
    SET_GPR_U32(ctx, 31, 0x17FAD4u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAD4u; }
        if (ctx->pc != 0x17FAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAD4u; }
        if (ctx->pc != 0x17FAD4u) { return; }
    }
    ctx->pc = 0x17FAD4u;
    // 0x17fad4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17fad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fad8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x17fad8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17fadc: 0x0  nop
    ctx->pc = 0x17fadcu;
    // NOP
label_17fae0:
    // 0x17fae0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17fae4: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17fae8: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x17fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x17faec: 0x24c61db8  addiu       $a2, $a2, 0x1DB8
    ctx->pc = 0x17faecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7608));
    // 0x17faf0: 0xc060a44  jal         func_182910
    ctx->pc = 0x17FAF0u;
    SET_GPR_U32(ctx, 31, 0x17FAF8u);
    ctx->pc = 0x17FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAF0u;
            // 0x17faf4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAF8u; }
        if (ctx->pc != 0x17FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAF8u; }
        if (ctx->pc != 0x17FAF8u) { return; }
    }
    ctx->pc = 0x17FAF8u;
    // 0x17faf8: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x17faf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x17fafc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17fafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb00: 0x2631a170  addiu       $s1, $s1, -0x5E90
    ctx->pc = 0x17fb00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943088));
    // 0x17fb04: 0x2410fff8  addiu       $s0, $zero, -0x8
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_17fb08:
    // 0x17fb08: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fb0c: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17fb10: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17FB10u;
    {
        const bool branch_taken_0x17fb10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB10u;
            // 0x17fb14: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb10) {
            ctx->pc = 0x17FB48u;
            goto label_17fb48;
        }
    }
    ctx->pc = 0x17FB18u;
    // 0x17fb18: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17fb1c: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17fb1cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17fb20: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17fb24: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x17fb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17fb28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb2c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17fb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17fb30: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fb30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb34: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FB34u;
    SET_GPR_U32(ctx, 31, 0x17FB3Cu);
    ctx->pc = 0x17FB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB34u;
            // 0x17fb38: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB3Cu; }
        if (ctx->pc != 0x17FB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB3Cu; }
        if (ctx->pc != 0x17FB3Cu) { return; }
    }
    ctx->pc = 0x17FB3Cu;
    // 0x17fb3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17FB3Cu;
    {
        const bool branch_taken_0x17fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fb3c) {
            ctx->pc = 0x17FB70u;
            goto label_17fb70;
        }
    }
    ctx->pc = 0x17FB44u;
    // 0x17fb44: 0x0  nop
    ctx->pc = 0x17fb44u;
    // NOP
label_17fb48:
    // 0x17fb48: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fb4c: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17fb4cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17fb50: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17fb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17fb54: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x17fb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17fb58: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17fb5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb60: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17fb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17fb64: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17fb68: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FB68u;
    SET_GPR_U32(ctx, 31, 0x17FB70u);
    ctx->pc = 0x17FB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB68u;
            // 0x17fb6c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB70u; }
        if (ctx->pc != 0x17FB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB70u; }
        if (ctx->pc != 0x17FB70u) { return; }
    }
    ctx->pc = 0x17FB70u;
label_17fb70:
    // 0x17fb70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17fb74: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x17fb74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17fb78: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17fb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x17fb7c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17FB7Cu;
    {
        const bool branch_taken_0x17fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB7Cu;
            // 0x17fb80: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb7c) {
            ctx->pc = 0x17FB08u;
            goto label_17fb08;
        }
    }
    ctx->pc = 0x17FB84u;
    // 0x17fb84: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x17fb84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x17fb88: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x17fb88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x17fb8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17fb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb90: 0x26731610  addiu       $s3, $s3, 0x1610
    ctx->pc = 0x17fb90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5648));
    // 0x17fb94: 0x2652a250  addiu       $s2, $s2, -0x5DB0
    ctx->pc = 0x17fb94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943312));
    // 0x17fb98: 0x2411fff7  addiu       $s1, $zero, -0x9
    ctx->pc = 0x17fb98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17fb9c: 0x0  nop
    ctx->pc = 0x17fb9cu;
    // NOP
label_17fba0:
    // 0x17fba0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fba4: 0x8c222800  lw          $v0, 0x2800($at)
    ctx->pc = 0x17fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
    // 0x17fba8: 0x1602003b  bne         $s0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x17FBA8u;
    {
        const bool branch_taken_0x17fba8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17fba8) {
            ctx->pc = 0x17FC98u;
            goto label_17fc98;
        }
    }
    ctx->pc = 0x17FBB0u;
    // 0x17fbb0: 0x8e620224  lw          $v0, 0x224($s3)
    ctx->pc = 0x17fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x17fbb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17FBB4u;
    {
        const bool branch_taken_0x17fbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBB4u;
            // 0x17fbb8: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbb4) {
            ctx->pc = 0x17FBE8u;
            goto label_17fbe8;
        }
    }
    ctx->pc = 0x17FBBCu;
    // 0x17fbbc: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17fbbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17fbc0: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fbc0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fbc4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fbc8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fbcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbd0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fbd4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fbd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbd8: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FBD8u;
    SET_GPR_U32(ctx, 31, 0x17FBE0u);
    ctx->pc = 0x17FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBD8u;
            // 0x17fbdc: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBE0u; }
        if (ctx->pc != 0x17FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBE0u; }
        if (ctx->pc != 0x17FBE0u) { return; }
    }
    ctx->pc = 0x17FBE0u;
    // 0x17fbe0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x17FBE0u;
    {
        const bool branch_taken_0x17fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fbe0) {
            ctx->pc = 0x17FD78u;
            goto label_17fd78;
        }
    }
    ctx->pc = 0x17FBE8u;
label_17fbe8:
    // 0x17fbe8: 0x2a010008  slti        $at, $s0, 0x8
    ctx->pc = 0x17fbe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17fbec: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x17FBECu;
    {
        const bool branch_taken_0x17fbec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBECu;
            // 0x17fbf0: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbec) {
            ctx->pc = 0x17FC28u;
            goto label_17fc28;
        }
    }
    ctx->pc = 0x17FBF4u;
    // 0x17fbf4: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17fbf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17fbf8: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fbf8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fbfc: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fc00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc04: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fc08: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fc08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc0c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x17fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17fc10: 0x8c26a27c  lw          $a2, -0x5D84($at)
    ctx->pc = 0x17fc10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943356)));
    // 0x17fc14: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FC14u;
    SET_GPR_U32(ctx, 31, 0x17FC1Cu);
    ctx->pc = 0x17FC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC14u;
            // 0x17fc18: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC1Cu; }
        if (ctx->pc != 0x17FC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC1Cu; }
        if (ctx->pc != 0x17FC1Cu) { return; }
    }
    ctx->pc = 0x17FC1Cu;
    // 0x17fc1c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x17FC1Cu;
    {
        const bool branch_taken_0x17fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fc1c) {
            ctx->pc = 0x17FD78u;
            goto label_17fd78;
        }
    }
    ctx->pc = 0x17FC24u;
    // 0x17fc24: 0x0  nop
    ctx->pc = 0x17fc24u;
    // NOP
label_17fc28:
    // 0x17fc28: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17fc2c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17FC2Cu;
    {
        const bool branch_taken_0x17fc2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC2Cu;
            // 0x17fc30: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc2c) {
            ctx->pc = 0x17FC60u;
            goto label_17fc60;
        }
    }
    ctx->pc = 0x17FC34u;
    // 0x17fc34: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17fc34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17fc38: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fc38u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fc3c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fc40: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17fc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fc44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc48: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fc4c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fc4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc50: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FC50u;
    SET_GPR_U32(ctx, 31, 0x17FC58u);
    ctx->pc = 0x17FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC50u;
            // 0x17fc54: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC58u; }
        if (ctx->pc != 0x17FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC58u; }
        if (ctx->pc != 0x17FC58u) { return; }
    }
    ctx->pc = 0x17FC58u;
    // 0x17fc58: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x17FC58u;
    {
        const bool branch_taken_0x17fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fc58) {
            ctx->pc = 0x17FD78u;
            goto label_17fd78;
        }
    }
    ctx->pc = 0x17FC60u;
label_17fc60:
    // 0x17fc60: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fc64: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fc64u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fc68: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17fc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17fc6c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fc70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc74: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fc78: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fc78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc7c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x17fc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17fc80: 0x8c26a280  lw          $a2, -0x5D80($at)
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943360)));
    // 0x17fc84: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FC84u;
    SET_GPR_U32(ctx, 31, 0x17FC8Cu);
    ctx->pc = 0x17FC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC84u;
            // 0x17fc88: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC8Cu; }
        if (ctx->pc != 0x17FC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC8Cu; }
        if (ctx->pc != 0x17FC8Cu) { return; }
    }
    ctx->pc = 0x17FC8Cu;
    // 0x17fc8c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x17FC8Cu;
    {
        const bool branch_taken_0x17fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fc8c) {
            ctx->pc = 0x17FD78u;
            goto label_17fd78;
        }
    }
    ctx->pc = 0x17FC94u;
    // 0x17fc94: 0x0  nop
    ctx->pc = 0x17fc94u;
    // NOP
label_17fc98:
    // 0x17fc98: 0x8e620224  lw          $v0, 0x224($s3)
    ctx->pc = 0x17fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x17fc9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17FC9Cu;
    {
        const bool branch_taken_0x17fc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC9Cu;
            // 0x17fca0: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc9c) {
            ctx->pc = 0x17FCD0u;
            goto label_17fcd0;
        }
    }
    ctx->pc = 0x17FCA4u;
    // 0x17fca4: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17fca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17fca8: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fca8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fcac: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fcb0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17fcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fcb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcb8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fcbc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fcbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcc0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FCC0u;
    SET_GPR_U32(ctx, 31, 0x17FCC8u);
    ctx->pc = 0x17FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCC0u;
            // 0x17fcc4: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCC8u; }
        if (ctx->pc != 0x17FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCC8u; }
        if (ctx->pc != 0x17FCC8u) { return; }
    }
    ctx->pc = 0x17FCC8u;
    // 0x17fcc8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x17FCC8u;
    {
        const bool branch_taken_0x17fcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fcc8) {
            ctx->pc = 0x17FD78u;
            goto label_17fd78;
        }
    }
    ctx->pc = 0x17FCD0u;
label_17fcd0:
    // 0x17fcd0: 0x2a010008  slti        $at, $s0, 0x8
    ctx->pc = 0x17fcd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17fcd4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x17FCD4u;
    {
        const bool branch_taken_0x17fcd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCD4u;
            // 0x17fcd8: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcd4) {
            ctx->pc = 0x17FD10u;
            goto label_17fd10;
        }
    }
    ctx->pc = 0x17FCDCu;
    // 0x17fcdc: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17fce0: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fce0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fce4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcec: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fcf0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fcf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcf4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x17fcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17fcf8: 0x8c26a27c  lw          $a2, -0x5D84($at)
    ctx->pc = 0x17fcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943356)));
    // 0x17fcfc: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FCFCu;
    SET_GPR_U32(ctx, 31, 0x17FD04u);
    ctx->pc = 0x17FD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCFCu;
            // 0x17fd00: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD04u; }
        if (ctx->pc != 0x17FD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD04u; }
        if (ctx->pc != 0x17FD04u) { return; }
    }
    ctx->pc = 0x17FD04u;
    // 0x17fd04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17FD04u;
    {
        const bool branch_taken_0x17fd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fd04) {
            ctx->pc = 0x17FD78u;
            goto label_17fd78;
        }
    }
    ctx->pc = 0x17FD0Cu;
    // 0x17fd0c: 0x0  nop
    ctx->pc = 0x17fd0cu;
    // NOP
label_17fd10:
    // 0x17fd10: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17fd14: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17FD14u;
    {
        const bool branch_taken_0x17fd14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD14u;
            // 0x17fd18: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd14) {
            ctx->pc = 0x17FD48u;
            goto label_17fd48;
        }
    }
    ctx->pc = 0x17FD1Cu;
    // 0x17fd1c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17fd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17fd20: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fd20u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fd24: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fd28: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17fd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fd2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd30: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fd34: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17fd34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd38: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FD38u;
    SET_GPR_U32(ctx, 31, 0x17FD40u);
    ctx->pc = 0x17FD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD38u;
            // 0x17fd3c: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD40u; }
        if (ctx->pc != 0x17FD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD40u; }
        if (ctx->pc != 0x17FD40u) { return; }
    }
    ctx->pc = 0x17FD40u;
    // 0x17fd40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17FD40u;
    {
        const bool branch_taken_0x17fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fd40) {
            ctx->pc = 0x17FD78u;
            goto label_17fd78;
        }
    }
    ctx->pc = 0x17FD48u;
label_17fd48:
    // 0x17fd48: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fd4c: 0x902b3c70  lbu         $t3, 0x3C70($at)
    ctx->pc = 0x17fd4cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x17fd50: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17fd50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17fd54: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17fd58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd5c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17fd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17fd60: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17fd60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17fd64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x17fd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17fd68: 0x8c26a280  lw          $a2, -0x5D80($at)
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943360)));
    // 0x17fd6c: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17FD6Cu;
    SET_GPR_U32(ctx, 31, 0x17FD74u);
    ctx->pc = 0x17FD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD6Cu;
            // 0x17fd70: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD74u; }
        if (ctx->pc != 0x17FD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD74u; }
        if (ctx->pc != 0x17FD74u) { return; }
    }
    ctx->pc = 0x17FD74u;
    // 0x17fd74: 0x0  nop
    ctx->pc = 0x17fd74u;
    // NOP
label_17fd78:
    // 0x17fd78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17fd78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17fd7c: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x17fd7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x17fd80: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x17fd80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x17fd84: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17fd84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17fd88: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x17FD88u;
    {
        const bool branch_taken_0x17fd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD88u;
            // 0x17fd8c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd88) {
            ctx->pc = 0x17FBA0u;
            goto label_17fba0;
        }
    }
    ctx->pc = 0x17FD90u;
    // 0x17fd90: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fd94: 0xc0601c0  jal         func_180700
    ctx->pc = 0x17FD94u;
    SET_GPR_U32(ctx, 31, 0x17FD9Cu);
    ctx->pc = 0x17FD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD94u;
            // 0x17fd98: 0x8c242800  lw          $a0, 0x2800($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180700u;
    if (runtime->hasFunction(0x180700u)) {
        auto targetFn = runtime->lookupFunction(0x180700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD9Cu; }
        if (ctx->pc != 0x17FD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        barDraw4_0x180700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD9Cu; }
        if (ctx->pc != 0x17FD9Cu) { return; }
    }
    ctx->pc = 0x17FD9Cu;
    // 0x17fd9c: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x17FD9Cu;
    SET_GPR_U32(ctx, 31, 0x17FDA4u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDA4u; }
        if (ctx->pc != 0x17FDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDA4u; }
        if (ctx->pc != 0x17FDA4u) { return; }
    }
    ctx->pc = 0x17FDA4u;
    // 0x17fda4: 0x16a0fed8  bnez        $s5, . + 4 + (-0x128 << 2)
    ctx->pc = 0x17FDA4u;
    {
        const bool branch_taken_0x17fda4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDA4u;
            // 0x17fda8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fda4) {
            ctx->pc = 0x17F908u;
            goto label_17f908;
        }
    }
    ctx->pc = 0x17FDACu;
    // 0x17fdac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17fdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fdb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17fdb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fdb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17fdb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fdb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fdbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17fdbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fdc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fdc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fdc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x17FDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDC8u;
            // 0x17fdcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F908u: goto label_17f908;
            case 0x17F940u: goto label_17f940;
            case 0x17F960u: goto label_17f960;
            case 0x17F9B0u: goto label_17f9b0;
            case 0x17F9B8u: goto label_17f9b8;
            case 0x17FA08u: goto label_17fa08;
            case 0x17FA10u: goto label_17fa10;
            case 0x17FA48u: goto label_17fa48;
            case 0x17FA70u: goto label_17fa70;
            case 0x17FAA8u: goto label_17faa8;
            case 0x17FAB0u: goto label_17fab0;
            case 0x17FAE0u: goto label_17fae0;
            case 0x17FB08u: goto label_17fb08;
            case 0x17FB48u: goto label_17fb48;
            case 0x17FB70u: goto label_17fb70;
            case 0x17FBA0u: goto label_17fba0;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FC28u: goto label_17fc28;
            case 0x17FC60u: goto label_17fc60;
            case 0x17FC98u: goto label_17fc98;
            case 0x17FCD0u: goto label_17fcd0;
            case 0x17FD10u: goto label_17fd10;
            case 0x17FD48u: goto label_17fd48;
            case 0x17FD78u: goto label_17fd78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FDD0u;
}
