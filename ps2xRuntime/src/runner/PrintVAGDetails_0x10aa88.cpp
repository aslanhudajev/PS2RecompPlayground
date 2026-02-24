#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PrintVAGDetails
// Address: 0x10aa88 - 0x10ad48
void PrintVAGDetails_0x10aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PrintVAGDetails_0x10aa88");
#endif

    ctx->pc = 0x10aa88u;

    // 0x10aa88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10aa8c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10aa90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10aa90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa94: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x10aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10aa98: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x10aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x10aa9c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10aaa0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10aaa4: 0x24843730  addiu       $a0, $a0, 0x3730
    ctx->pc = 0x10aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
    // 0x10aaa8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x10aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x10aaac: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10aaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10aab0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10aab4: 0x26370008  addiu       $s7, $s1, 0x8
    ctx->pc = 0x10aab4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10aab8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10aab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10aabc: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x10aabcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
    // 0x10aac0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10aac4: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x10aac4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x10aac8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10aacc: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x10aaccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x10aad0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10aad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10aad4: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x10aad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x10aad8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10aadc: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x10aae0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10aae4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10aae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aae8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AAE8u;
    SET_GPR_U32(ctx, 31, 0x10AAF0u);
    ctx->pc = 0x10AAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAE8u;
            // 0x10aaec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAF0u; }
        if (ctx->pc != 0x10AAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAF0u; }
        if (ctx->pc != 0x10AAF0u) { return; }
    }
    ctx->pc = 0x10AAF0u;
    // 0x10aaf0: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x10aaf0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10aaf4: 0x0  nop
    ctx->pc = 0x10aaf4u;
    // NOP
label_10aaf8:
    // 0x10aaf8: 0x26a45e90  addiu       $a0, $s5, 0x5E90
    ctx->pc = 0x10aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24208));
    // 0x10aafc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AAFCu;
    SET_GPR_U32(ctx, 31, 0x10AB04u);
    ctx->pc = 0x10AB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAFCu;
            // 0x10ab00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB04u; }
        if (ctx->pc != 0x10AB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB04u; }
        if (ctx->pc != 0x10AB04u) { return; }
    }
    ctx->pc = 0x10AB04u;
    // 0x10ab04: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x10ab04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x10ab08: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10AB08u;
    {
        const bool branch_taken_0x10ab08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ab08) {
            ctx->pc = 0x10AB0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB08u;
            // 0x10ab0c: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AAF8u;
            goto label_10aaf8;
        }
    }
    ctx->pc = 0x10AB10u;
    // 0x10ab10: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ab14: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10ab14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab18: 0x24843750  addiu       $a0, $a0, 0x3750
    ctx->pc = 0x10ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14160));
    // 0x10ab1c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AB1Cu;
    SET_GPR_U32(ctx, 31, 0x10AB24u);
    ctx->pc = 0x10AB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB1Cu;
            // 0x10ab20: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB24u; }
        if (ctx->pc != 0x10AB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB24u; }
        if (ctx->pc != 0x10AB24u) { return; }
    }
    ctx->pc = 0x10AB24u;
    // 0x10ab24: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ab28: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AB28u;
    SET_GPR_U32(ctx, 31, 0x10AB30u);
    ctx->pc = 0x10AB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB28u;
            // 0x10ab2c: 0x24843760  addiu       $a0, $a0, 0x3760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB30u; }
        if (ctx->pc != 0x10AB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB30u; }
        if (ctx->pc != 0x10AB30u) { return; }
    }
    ctx->pc = 0x10AB30u;
    // 0x10ab30: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ab34: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AB34u;
    SET_GPR_U32(ctx, 31, 0x10AB3Cu);
    ctx->pc = 0x10AB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB34u;
            // 0x10ab38: 0x24843770  addiu       $a0, $a0, 0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB3Cu; }
        if (ctx->pc != 0x10AB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB3Cu; }
        if (ctx->pc != 0x10AB3Cu) { return; }
    }
    ctx->pc = 0x10AB3Cu;
    // 0x10ab3c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x10ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x10ab40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab44: 0x24a55e88  addiu       $a1, $a1, 0x5E88
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24200));
    // 0x10ab48: 0xc04aefa  jal         func_12BBE8
    ctx->pc = 0x10AB48u;
    SET_GPR_U32(ctx, 31, 0x10AB50u);
    ctx->pc = 0x10AB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB48u;
            // 0x10ab4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BBE8u;
    if (runtime->hasFunction(0x12BBE8u)) {
        auto targetFn = runtime->lookupFunction(0x12BBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB50u; }
        if (ctx->pc != 0x10AB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x12bbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB50u; }
        if (ctx->pc != 0x10AB50u) { return; }
    }
    ctx->pc = 0x10AB50u;
    // 0x10ab50: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ab54: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x10ab54u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10ab58: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AB58u;
    SET_GPR_U32(ctx, 31, 0x10AB60u);
    ctx->pc = 0x10AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB58u;
            // 0x10ab5c: 0x24843780  addiu       $a0, $a0, 0x3780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB60u; }
        if (ctx->pc != 0x10AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB60u; }
        if (ctx->pc != 0x10AB60u) { return; }
    }
    ctx->pc = 0x10AB60u;
    // 0x10ab60: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ab64: 0x0  nop
    ctx->pc = 0x10ab64u;
    // NOP
label_10ab68:
    // 0x10ab68: 0x26a45e90  addiu       $a0, $s5, 0x5E90
    ctx->pc = 0x10ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24208));
    // 0x10ab6c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AB6Cu;
    SET_GPR_U32(ctx, 31, 0x10AB74u);
    ctx->pc = 0x10AB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB6Cu;
            // 0x10ab70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB74u; }
        if (ctx->pc != 0x10AB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB74u; }
        if (ctx->pc != 0x10AB74u) { return; }
    }
    ctx->pc = 0x10AB74u;
    // 0x10ab74: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x10ab74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x10ab78: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10AB78u;
    {
        const bool branch_taken_0x10ab78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ab78) {
            ctx->pc = 0x10AB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB78u;
            // 0x10ab7c: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AB68u;
            goto label_10ab68;
        }
    }
    ctx->pc = 0x10AB80u;
    // 0x10ab80: 0x26845e98  addiu       $a0, $s4, 0x5E98
    ctx->pc = 0x10ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10ab84: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AB84u;
    SET_GPR_U32(ctx, 31, 0x10AB8Cu);
    ctx->pc = 0x10AB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB84u;
            // 0x10ab88: 0x27d05ea0  addiu       $s0, $fp, 0x5EA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 24224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB8Cu; }
        if (ctx->pc != 0x10AB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB8Cu; }
        if (ctx->pc != 0x10AB8Cu) { return; }
    }
    ctx->pc = 0x10AB8Cu;
    // 0x10ab8c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ab90: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AB90u;
    SET_GPR_U32(ctx, 31, 0x10AB98u);
    ctx->pc = 0x10AB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB90u;
            // 0x10ab94: 0x24843790  addiu       $a0, $a0, 0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB98u; }
        if (ctx->pc != 0x10AB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB98u; }
        if (ctx->pc != 0x10AB98u) { return; }
    }
    ctx->pc = 0x10AB98u;
    // 0x10ab98: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AB98u;
    {
        const bool branch_taken_0x10ab98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ab98) {
            ctx->pc = 0x10AB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB98u;
            // 0x10ab9c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ABB0u;
            goto label_10abb0;
        }
    }
    ctx->pc = 0x10ABA0u;
    // 0x10aba0: 0xc042ffc  jal         func_10BFF0
    ctx->pc = 0x10ABA0u;
    SET_GPR_U32(ctx, 31, 0x10ABA8u);
    ctx->pc = 0x10ABA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABA0u;
            // 0x10aba4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFF0u;
    if (runtime->hasFunction(0x10BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x10BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABA8u; }
        if (ctx->pc != 0x10ABA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABA8u; }
        if (ctx->pc != 0x10ABA8u) { return; }
    }
    ctx->pc = 0x10ABA8u;
    // 0x10aba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10ABA8u;
    {
        const bool branch_taken_0x10aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABA8u;
            // 0x10abac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aba8) {
            ctx->pc = 0x10ABB4u;
            goto label_10abb4;
        }
    }
    ctx->pc = 0x10ABB0u;
label_10abb0:
    // 0x10abb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10abb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10abb4:
    // 0x10abb4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ABB4u;
    SET_GPR_U32(ctx, 31, 0x10ABBCu);
    ctx->pc = 0x10ABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABB4u;
            // 0x10abb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABBCu; }
        if (ctx->pc != 0x10ABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABBCu; }
        if (ctx->pc != 0x10ABBCu) { return; }
    }
    ctx->pc = 0x10ABBCu;
    // 0x10abbc: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x10abbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abc0: 0x26845e98  addiu       $a0, $s4, 0x5E98
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10abc4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ABC4u;
    SET_GPR_U32(ctx, 31, 0x10ABCCu);
    ctx->pc = 0x10ABC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABC4u;
            // 0x10abc8: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABCCu; }
        if (ctx->pc != 0x10ABCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABCCu; }
        if (ctx->pc != 0x10ABCCu) { return; }
    }
    ctx->pc = 0x10ABCCu;
    // 0x10abcc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10abccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10abd0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ABD0u;
    SET_GPR_U32(ctx, 31, 0x10ABD8u);
    ctx->pc = 0x10ABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABD0u;
            // 0x10abd4: 0x244437a0  addiu       $a0, $v0, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABD8u; }
        if (ctx->pc != 0x10ABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABD8u; }
        if (ctx->pc != 0x10ABD8u) { return; }
    }
    ctx->pc = 0x10ABD8u;
    // 0x10abd8: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10abdc: 0x0  nop
    ctx->pc = 0x10abdcu;
    // NOP
label_10abe0:
    // 0x10abe0: 0x26c45ea8  addiu       $a0, $s6, 0x5EA8
    ctx->pc = 0x10abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24232));
    // 0x10abe4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ABE4u;
    SET_GPR_U32(ctx, 31, 0x10ABECu);
    ctx->pc = 0x10ABE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABE4u;
            // 0x10abe8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABECu; }
        if (ctx->pc != 0x10ABECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABECu; }
        if (ctx->pc != 0x10ABECu) { return; }
    }
    ctx->pc = 0x10ABECu;
    // 0x10abec: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x10abecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x10abf0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10ABF0u;
    {
        const bool branch_taken_0x10abf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10abf0) {
            ctx->pc = 0x10ABF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABF0u;
            // 0x10abf4: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ABE0u;
            goto label_10abe0;
        }
    }
    ctx->pc = 0x10ABF8u;
    // 0x10abf8: 0x26845e98  addiu       $a0, $s4, 0x5E98
    ctx->pc = 0x10abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10abfc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ABFCu;
    SET_GPR_U32(ctx, 31, 0x10AC04u);
    ctx->pc = 0x10AC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABFCu;
            // 0x10ac00: 0x27d05ea0  addiu       $s0, $fp, 0x5EA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 24224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC04u; }
        if (ctx->pc != 0x10AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC04u; }
        if (ctx->pc != 0x10AC04u) { return; }
    }
    ctx->pc = 0x10AC04u;
    // 0x10ac04: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ac08: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AC08u;
    SET_GPR_U32(ctx, 31, 0x10AC10u);
    ctx->pc = 0x10AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC08u;
            // 0x10ac0c: 0x248437b0  addiu       $a0, $a0, 0x37B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC10u; }
        if (ctx->pc != 0x10AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC10u; }
        if (ctx->pc != 0x10AC10u) { return; }
    }
    ctx->pc = 0x10AC10u;
    // 0x10ac10: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AC10u;
    {
        const bool branch_taken_0x10ac10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ac10) {
            ctx->pc = 0x10AC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC10u;
            // 0x10ac14: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AC28u;
            goto label_10ac28;
        }
    }
    ctx->pc = 0x10AC18u;
    // 0x10ac18: 0xc042ffc  jal         func_10BFF0
    ctx->pc = 0x10AC18u;
    SET_GPR_U32(ctx, 31, 0x10AC20u);
    ctx->pc = 0x10AC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC18u;
            // 0x10ac1c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFF0u;
    if (runtime->hasFunction(0x10BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x10BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC20u; }
        if (ctx->pc != 0x10AC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC20u; }
        if (ctx->pc != 0x10AC20u) { return; }
    }
    ctx->pc = 0x10AC20u;
    // 0x10ac20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AC20u;
    {
        const bool branch_taken_0x10ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC20u;
            // 0x10ac24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac20) {
            ctx->pc = 0x10AC2Cu;
            goto label_10ac2c;
        }
    }
    ctx->pc = 0x10AC28u;
label_10ac28:
    // 0x10ac28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ac2c:
    // 0x10ac2c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AC2Cu;
    SET_GPR_U32(ctx, 31, 0x10AC34u);
    ctx->pc = 0x10AC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC2Cu;
            // 0x10ac30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC34u; }
        if (ctx->pc != 0x10AC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC34u; }
        if (ctx->pc != 0x10AC34u) { return; }
    }
    ctx->pc = 0x10AC34u;
    // 0x10ac34: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x10ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x10ac38: 0x26845e98  addiu       $a0, $s4, 0x5E98
    ctx->pc = 0x10ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10ac3c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AC3Cu;
    SET_GPR_U32(ctx, 31, 0x10AC44u);
    ctx->pc = 0x10AC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC3Cu;
            // 0x10ac40: 0x247237d0  addiu       $s2, $v1, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC44u; }
        if (ctx->pc != 0x10AC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC44u; }
        if (ctx->pc != 0x10AC44u) { return; }
    }
    ctx->pc = 0x10AC44u;
    // 0x10ac44: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ac48: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AC48u;
    SET_GPR_U32(ctx, 31, 0x10AC50u);
    ctx->pc = 0x10AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC48u;
            // 0x10ac4c: 0x248437c0  addiu       $a0, $a0, 0x37C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC50u; }
        if (ctx->pc != 0x10AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC50u; }
        if (ctx->pc != 0x10AC50u) { return; }
    }
    ctx->pc = 0x10AC50u;
    // 0x10ac50: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AC50u;
    {
        const bool branch_taken_0x10ac50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ac50) {
            ctx->pc = 0x10AC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC50u;
            // 0x10ac54: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AC64u;
            goto label_10ac64;
        }
    }
    ctx->pc = 0x10AC58u;
    // 0x10ac58: 0xc042ffc  jal         func_10BFF0
    ctx->pc = 0x10AC58u;
    SET_GPR_U32(ctx, 31, 0x10AC60u);
    ctx->pc = 0x10AC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC58u;
            // 0x10ac5c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFF0u;
    if (runtime->hasFunction(0x10BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x10BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC60u; }
        if (ctx->pc != 0x10AC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC60u; }
        if (ctx->pc != 0x10AC60u) { return; }
    }
    ctx->pc = 0x10AC60u;
    // 0x10ac60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ac60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ac64:
    // 0x10ac64: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AC64u;
    {
        const bool branch_taken_0x10ac64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ac64) {
            ctx->pc = 0x10AC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC64u;
            // 0x10ac68: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AC7Cu;
            goto label_10ac7c;
        }
    }
    ctx->pc = 0x10AC6Cu;
    // 0x10ac6c: 0xc042ffc  jal         func_10BFF0
    ctx->pc = 0x10AC6Cu;
    SET_GPR_U32(ctx, 31, 0x10AC74u);
    ctx->pc = 0x10AC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC6Cu;
            // 0x10ac70: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFF0u;
    if (runtime->hasFunction(0x10BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x10BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC74u; }
        if (ctx->pc != 0x10AC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC74u; }
        if (ctx->pc != 0x10AC74u) { return; }
    }
    ctx->pc = 0x10AC74u;
    // 0x10ac74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AC74u;
    {
        const bool branch_taken_0x10ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC74u;
            // 0x10ac78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac74) {
            ctx->pc = 0x10AC80u;
            goto label_10ac80;
        }
    }
    ctx->pc = 0x10AC7Cu;
label_10ac7c:
    // 0x10ac7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ac80:
    // 0x10ac80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac84: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x10ac84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac88: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AC88u;
    SET_GPR_U32(ctx, 31, 0x10AC90u);
    ctx->pc = 0x10AC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC88u;
            // 0x10ac8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC90u; }
        if (ctx->pc != 0x10AC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC90u; }
        if (ctx->pc != 0x10AC90u) { return; }
    }
    ctx->pc = 0x10AC90u;
    // 0x10ac90: 0x26845e98  addiu       $a0, $s4, 0x5E98
    ctx->pc = 0x10ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10ac94: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AC94u;
    SET_GPR_U32(ctx, 31, 0x10AC9Cu);
    ctx->pc = 0x10AC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC94u;
            // 0x10ac98: 0x2612000c  addiu       $s2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC9Cu; }
        if (ctx->pc != 0x10AC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC9Cu; }
        if (ctx->pc != 0x10AC9Cu) { return; }
    }
    ctx->pc = 0x10AC9Cu;
    // 0x10ac9c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10aca0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ACA0u;
    SET_GPR_U32(ctx, 31, 0x10ACA8u);
    ctx->pc = 0x10ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACA0u;
            // 0x10aca4: 0x244437a0  addiu       $a0, $v0, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACA8u; }
        if (ctx->pc != 0x10ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACA8u; }
        if (ctx->pc != 0x10ACA8u) { return; }
    }
    ctx->pc = 0x10ACA8u;
    // 0x10aca8: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x10aca8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10acac: 0x0  nop
    ctx->pc = 0x10acacu;
    // NOP
label_10acb0:
    // 0x10acb0: 0x26c45ea8  addiu       $a0, $s6, 0x5EA8
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24232));
    // 0x10acb4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ACB4u;
    SET_GPR_U32(ctx, 31, 0x10ACBCu);
    ctx->pc = 0x10ACB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACB4u;
            // 0x10acb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACBCu; }
        if (ctx->pc != 0x10ACBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACBCu; }
        if (ctx->pc != 0x10ACBCu) { return; }
    }
    ctx->pc = 0x10ACBCu;
    // 0x10acbc: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x10acbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x10acc0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10ACC0u;
    {
        const bool branch_taken_0x10acc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10acc0) {
            ctx->pc = 0x10ACC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACC0u;
            // 0x10acc4: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ACB0u;
            goto label_10acb0;
        }
    }
    ctx->pc = 0x10ACC8u;
    // 0x10acc8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ACC8u;
    SET_GPR_U32(ctx, 31, 0x10ACD0u);
    ctx->pc = 0x10ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACC8u;
            // 0x10accc: 0x26845e98  addiu       $a0, $s4, 0x5E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACD0u; }
        if (ctx->pc != 0x10ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACD0u; }
        if (ctx->pc != 0x10ACD0u) { return; }
    }
    ctx->pc = 0x10ACD0u;
    // 0x10acd0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10acd4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ACD4u;
    SET_GPR_U32(ctx, 31, 0x10ACDCu);
    ctx->pc = 0x10ACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACD4u;
            // 0x10acd8: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACDCu; }
        if (ctx->pc != 0x10ACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACDCu; }
        if (ctx->pc != 0x10ACDCu) { return; }
    }
    ctx->pc = 0x10ACDCu;
    // 0x10acdc: 0x82230020  lb          $v1, 0x20($s1)
    ctx->pc = 0x10acdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10ace0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10ACE0u;
    {
        const bool branch_taken_0x10ace0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACE0u;
            // 0x10ace4: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ace0) {
            ctx->pc = 0x10AD14u;
            goto label_10ad14;
        }
    }
    ctx->pc = 0x10ACE8u;
    // 0x10ace8: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x10ace8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x10acec: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x10acecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_10acf0:
    // 0x10acf0: 0x26a45e90  addiu       $a0, $s5, 0x5E90
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24208));
    // 0x10acf4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ACF4u;
    SET_GPR_U32(ctx, 31, 0x10ACFCu);
    ctx->pc = 0x10ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACF4u;
            // 0x10acf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACFCu; }
        if (ctx->pc != 0x10ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACFCu; }
        if (ctx->pc != 0x10ACFCu) { return; }
    }
    ctx->pc = 0x10ACFCu;
    // 0x10acfc: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x10acfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10ad00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AD00u;
    {
        const bool branch_taken_0x10ad00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD00u;
            // 0x10ad04: 0x26845e98  addiu       $a0, $s4, 0x5E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad00) {
            ctx->pc = 0x10AD18u;
            goto label_10ad18;
        }
    }
    ctx->pc = 0x10AD08u;
    // 0x10ad08: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x10ad08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ad0c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10AD0Cu;
    {
        const bool branch_taken_0x10ad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ad0c) {
            ctx->pc = 0x10AD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD0Cu;
            // 0x10ad10: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AD14u;
label_10ad14:
    // 0x10ad14: 0x26845e98  addiu       $a0, $s4, 0x5E98
    ctx->pc = 0x10ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24216));
label_10ad18:
    // 0x10ad18: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10ad18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10ad1c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10ad1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10ad20: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10ad24: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10ad24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10ad28: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10ad28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ad2c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10ad2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ad30: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10ad30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ad34: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10ad34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ad38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10ad38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ad3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10ad3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ad40: 0x804ace4  j           func_12B390
    ctx->pc = 0x10AD40u;
    ctx->pc = 0x10AD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD40u;
            // 0x10ad44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10AD48u;
}
