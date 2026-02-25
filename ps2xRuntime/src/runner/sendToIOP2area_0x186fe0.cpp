#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sendToIOP2area
// Address: 0x186fe0 - 0x187140
void sendToIOP2area_0x186fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sendToIOP2area_0x186fe0");
#endif

    ctx->pc = 0x186fe0u;

    // 0x186fe0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x186fe4: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x186fe8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x186fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x186fec: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x186fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x186ff0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x186ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x186ff4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x186ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x186ff8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x186ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x186ffc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x186ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x187000: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x187000u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187004: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187008: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x187008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18700c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187010: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x187010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187018: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x187018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18701c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187020: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x187020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187028: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x187028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18702c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x18702Cu;
    {
        const bool branch_taken_0x18702c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18702Cu;
            // 0x187030: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18702c) {
            ctx->pc = 0x187060u;
            goto label_187060;
        }
    }
    ctx->pc = 0x187034u;
    // 0x187034: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x187034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187038: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x187038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x18703c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18703Cu;
    {
        const bool branch_taken_0x18703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18703c) {
            ctx->pc = 0x187058u;
            goto label_187058;
        }
    }
    ctx->pc = 0x187044u;
    // 0x187044: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187048: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x187048u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18704c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18704Cu;
    {
        const bool branch_taken_0x18704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18704Cu;
            // 0x187050: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18704c) {
            ctx->pc = 0x187060u;
            goto label_187060;
        }
    }
    ctx->pc = 0x187054u;
    // 0x187054: 0x0  nop
    ctx->pc = 0x187054u;
    // NOP
label_187058:
    // 0x187058: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x187058u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18705c: 0x0  nop
    ctx->pc = 0x18705cu;
    // NOP
label_187060:
    // 0x187060: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x187060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x187064: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x187064u;
    {
        const bool branch_taken_0x187064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187064u;
            // 0x187068: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187064) {
            ctx->pc = 0x1870A8u;
            goto label_1870a8;
        }
    }
    ctx->pc = 0x18706Cu;
    // 0x18706c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18706cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187070: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x187070u;
    SET_GPR_U32(ctx, 31, 0x187078u);
    ctx->pc = 0x187074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187070u;
            // 0x187074: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187078u; }
        if (ctx->pc != 0x187078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187078u; }
        if (ctx->pc != 0x187078u) { return; }
    }
    ctx->pc = 0x187078u;
    // 0x187078: 0x2752821  addu        $a1, $s3, $s5
    ctx->pc = 0x187078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x18707c: 0x2553023  subu        $a2, $s2, $s5
    ctx->pc = 0x18707cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x187080: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x187080u;
    SET_GPR_U32(ctx, 31, 0x187088u);
    ctx->pc = 0x187084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187080u;
            // 0x187084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187088u; }
        if (ctx->pc != 0x187088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187088u; }
        if (ctx->pc != 0x187088u) { return; }
    }
    ctx->pc = 0x187088u;
    // 0x187088: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x187088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x18708c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187090: 0x552023  subu        $a0, $v0, $s5
    ctx->pc = 0x187090u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x187094: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x187094u;
    SET_GPR_U32(ctx, 31, 0x18709Cu);
    ctx->pc = 0x187098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187094u;
            // 0x187098: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18709Cu; }
        if (ctx->pc != 0x18709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18709Cu; }
        if (ctx->pc != 0x18709Cu) { return; }
    }
    ctx->pc = 0x18709Cu;
    // 0x18709c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18709Cu;
    {
        const bool branch_taken_0x18709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18709c) {
            ctx->pc = 0x187110u;
            goto label_187110;
        }
    }
    ctx->pc = 0x1870A4u;
    // 0x1870a4: 0x0  nop
    ctx->pc = 0x1870a4u;
    // NOP
label_1870a8:
    // 0x1870a8: 0x2b2b823  subu        $s7, $s5, $s2
    ctx->pc = 0x1870a8u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1870ac: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x1870acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1870b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1870B0u;
    {
        const bool branch_taken_0x1870b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1870B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870B0u;
            // 0x1870b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870b0) {
            ctx->pc = 0x1870F0u;
            goto label_1870f0;
        }
    }
    ctx->pc = 0x1870B8u;
    // 0x1870b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1870b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870bc: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x1870BCu;
    SET_GPR_U32(ctx, 31, 0x1870C4u);
    ctx->pc = 0x1870C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870BCu;
            // 0x1870c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870C4u; }
        if (ctx->pc != 0x1870C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870C4u; }
        if (ctx->pc != 0x1870C4u) { return; }
    }
    ctx->pc = 0x1870C4u;
    // 0x1870c4: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x1870c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1870c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1870c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870cc: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x1870CCu;
    SET_GPR_U32(ctx, 31, 0x1870D4u);
    ctx->pc = 0x1870D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870CCu;
            // 0x1870d0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870D4u; }
        if (ctx->pc != 0x1870D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870D4u; }
        if (ctx->pc != 0x1870D4u) { return; }
    }
    ctx->pc = 0x1870D4u;
    // 0x1870d4: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x1870d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1870d8: 0x2173023  subu        $a2, $s0, $s7
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1870dc: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x1870dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1870e0: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x1870E0u;
    SET_GPR_U32(ctx, 31, 0x1870E8u);
    ctx->pc = 0x1870E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870E0u;
            // 0x1870e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870E8u; }
        if (ctx->pc != 0x1870E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870E8u; }
        if (ctx->pc != 0x1870E8u) { return; }
    }
    ctx->pc = 0x1870E8u;
    // 0x1870e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1870E8u;
    {
        const bool branch_taken_0x1870e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1870e8) {
            ctx->pc = 0x187110u;
            goto label_187110;
        }
    }
    ctx->pc = 0x1870F0u;
label_1870f0:
    // 0x1870f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1870f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1870f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870f8: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x1870F8u;
    SET_GPR_U32(ctx, 31, 0x187100u);
    ctx->pc = 0x1870FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870F8u;
            // 0x1870fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187100u; }
        if (ctx->pc != 0x187100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187100u; }
        if (ctx->pc != 0x187100u) { return; }
    }
    ctx->pc = 0x187100u;
    // 0x187100: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x187104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187108: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x187108u;
    SET_GPR_U32(ctx, 31, 0x187110u);
    ctx->pc = 0x18710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187108u;
            // 0x18710c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187110u; }
        if (ctx->pc != 0x187110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187110u; }
        if (ctx->pc != 0x187110u) { return; }
    }
    ctx->pc = 0x187110u;
label_187110:
    // 0x187110: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x187110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x187114: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x187114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187118: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x187118u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18711c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18711cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187120: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x187120u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187124: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187128: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18712c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18712cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187138: 0x3e00008  jr          $ra
    ctx->pc = 0x187138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187138u;
            // 0x18713c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187058u: goto label_187058;
            case 0x187060u: goto label_187060;
            case 0x1870A8u: goto label_1870a8;
            case 0x1870F0u: goto label_1870f0;
            case 0x187110u: goto label_187110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187140u;
}
