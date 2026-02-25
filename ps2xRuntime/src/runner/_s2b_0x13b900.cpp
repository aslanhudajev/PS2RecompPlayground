#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _s2b
// Address: 0x13b900 - 0x13ba48
void _s2b_0x13b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_s2b_0x13b900");
#endif

    ctx->pc = 0x13b900u;

    // 0x13b900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13b904: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13b908: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x13b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x13b90c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x13b90cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b910: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x13b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x13b914: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x13b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x13b918: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13b91c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13b91cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b920: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x13b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13b924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13b928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b92c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13b930: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b934: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13b938: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13b938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b93c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13b940: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13b940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b944: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13B944u;
    {
        const bool branch_taken_0x13b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b944) {
            ctx->pc = 0x13B948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B944u;
            // 0x13b948: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B94Cu;
            goto label_13b94c;
        }
    }
    ctx->pc = 0x13B94Cu;
label_13b94c:
    // 0x13b94c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x13b94cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b950: 0x1812  mflo        $v1
    ctx->pc = 0x13b950u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x13b954: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x13b954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13b958: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13B958u;
    {
        const bool branch_taken_0x13b958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B958u;
            // 0x13b95c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b958) {
            ctx->pc = 0x13B98Cu;
            goto label_13b98c;
        }
    }
    ctx->pc = 0x13B960u;
    // 0x13b960: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x13b960u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x13b964: 0x0  nop
    ctx->pc = 0x13b964u;
    // NOP
label_13b968:
    // 0x13b968: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x13b968u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13b96c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13b970: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x13b970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13b974: 0x0  nop
    ctx->pc = 0x13b974u;
    // NOP
    // 0x13b978: 0x0  nop
    ctx->pc = 0x13b978u;
    // NOP
    // 0x13b97c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13B97Cu;
    {
        const bool branch_taken_0x13b97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b97c) {
            ctx->pc = 0x13B968u;
            goto label_13b968;
        }
    }
    ctx->pc = 0x13B984u;
    // 0x13b984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B984u;
    {
        const bool branch_taken_0x13b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B984u;
            // 0x13b988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b984) {
            ctx->pc = 0x13B994u;
            goto label_13b994;
        }
    }
    ctx->pc = 0x13B98Cu;
label_13b98c:
    // 0x13b98c: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x13b98cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x13b990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13b994:
    // 0x13b994: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x13B994u;
    SET_GPR_U32(ctx, 31, 0x13B99Cu);
    ctx->pc = 0x13B998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B994u;
            // 0x13b998: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B99Cu; }
        if (ctx->pc != 0x13B99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B99Cu; }
        if (ctx->pc != 0x13B99Cu) { return; }
    }
    ctx->pc = 0x13B99Cu;
    // 0x13b99c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b9a4: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x13b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x13b9a8: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x13B9A8u;
    {
        const bool branch_taken_0x13b9a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9A8u;
            // 0x13b9ac: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9a8) {
            ctx->pc = 0x13B9E8u;
            goto label_13b9e8;
        }
    }
    ctx->pc = 0x13B9B0u;
    // 0x13b9b0: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x13b9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x13b9b4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x13b9b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_13b9b8:
    // 0x13b9b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13b9c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13b9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13b9c4: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x13b9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x13b9c8: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x13B9C8u;
    SET_GPR_U32(ctx, 31, 0x13B9D0u);
    ctx->pc = 0x13B9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9C8u;
            // 0x13b9cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B9D0u; }
        if (ctx->pc != 0x13B9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B9D0u; }
        if (ctx->pc != 0x13B9D0u) { return; }
    }
    ctx->pc = 0x13B9D0u;
    // 0x13b9d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9d4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x13b9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x13b9d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13B9D8u;
    {
        const bool branch_taken_0x13b9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b9d8) {
            ctx->pc = 0x13B9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9D8u;
            // 0x13b9dc: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B9B8u;
            goto label_13b9b8;
        }
    }
    ctx->pc = 0x13B9E0u;
    // 0x13b9e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B9E0u;
    {
        const bool branch_taken_0x13b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9E0u;
            // 0x13b9e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9e0) {
            ctx->pc = 0x13B9ECu;
            goto label_13b9ec;
        }
    }
    ctx->pc = 0x13B9E8u;
label_13b9e8:
    // 0x13b9e8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x13b9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_13b9ec:
    // 0x13b9ec: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x13b9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x13b9f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13B9F0u;
    {
        const bool branch_taken_0x13b9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9F0u;
            // 0x13b9f4: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9f0) {
            ctx->pc = 0x13BA1Cu;
            goto label_13ba1c;
        }
    }
    ctx->pc = 0x13B9F8u;
label_13b9f8:
    // 0x13b9f8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x13b9f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b9fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13b9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba00: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13ba04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13ba04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13ba08: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x13ba08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x13ba0c: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x13BA0Cu;
    SET_GPR_U32(ctx, 31, 0x13BA14u);
    ctx->pc = 0x13BA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA0Cu;
            // 0x13ba10: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA14u; }
        if (ctx->pc != 0x13BA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA14u; }
        if (ctx->pc != 0x13BA14u) { return; }
    }
    ctx->pc = 0x13BA14u;
    // 0x13ba14: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13BA14u;
    {
        const bool branch_taken_0x13ba14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA14u;
            // 0x13ba18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba14) {
            ctx->pc = 0x13B9F8u;
            goto label_13b9f8;
        }
    }
    ctx->pc = 0x13BA1Cu;
label_13ba1c:
    // 0x13ba1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13ba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ba20: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13ba20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba24: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13ba24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ba28: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x13ba28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ba2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13ba2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ba30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13ba30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ba34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13ba34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ba38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13ba38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ba3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ba3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x13BA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA40u;
            // 0x13ba44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B94Cu: goto label_13b94c;
            case 0x13B968u: goto label_13b968;
            case 0x13B98Cu: goto label_13b98c;
            case 0x13B994u: goto label_13b994;
            case 0x13B9B8u: goto label_13b9b8;
            case 0x13B9E8u: goto label_13b9e8;
            case 0x13B9ECu: goto label_13b9ec;
            case 0x13B9F8u: goto label_13b9f8;
            case 0x13BA1Cu: goto label_13ba1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BA48u;
}
