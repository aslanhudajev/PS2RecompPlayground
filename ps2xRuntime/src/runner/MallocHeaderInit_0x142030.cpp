#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MallocHeaderInit
// Address: 0x142030 - 0x142130
void MallocHeaderInit_0x142030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MallocHeaderInit_0x142030");
#endif

    ctx->pc = 0x142030u;

    // 0x142030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x142030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x142034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x142034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x142038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x142038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14203c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x142040: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x142040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142048: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x142048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14204c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142050: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x142050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142058: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x142058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14205c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x14205cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142064: 0xc050958  jal         func_142560
    ctx->pc = 0x142064u;
    SET_GPR_U32(ctx, 31, 0x14206Cu);
    ctx->pc = 0x142068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142064u;
            // 0x142068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14206Cu; }
        if (ctx->pc != 0x14206Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignetureCheck_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14206Cu; }
        if (ctx->pc != 0x14206Cu) { return; }
    }
    ctx->pc = 0x14206Cu;
    // 0x14206c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14206Cu;
    {
        const bool branch_taken_0x14206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14206Cu;
            // 0x142070: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14206c) {
            ctx->pc = 0x1420A0u;
            goto label_1420a0;
        }
    }
    ctx->pc = 0x142074u;
    // 0x142074: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142074u;
    SET_GPR_U32(ctx, 31, 0x14207Cu);
    ctx->pc = 0x142078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142074u;
            // 0x142078: 0x24840880  addiu       $a0, $a0, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14207Cu; }
        if (ctx->pc != 0x14207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14207Cu; }
        if (ctx->pc != 0x14207Cu) { return; }
    }
    ctx->pc = 0x14207Cu;
    // 0x14207c: 0x0  nop
    ctx->pc = 0x14207cu;
    // NOP
label_142080:
    // 0x142080: 0x0  nop
    ctx->pc = 0x142080u;
    // NOP
    // 0x142084: 0x0  nop
    ctx->pc = 0x142084u;
    // NOP
    // 0x142088: 0x0  nop
    ctx->pc = 0x142088u;
    // NOP
    // 0x14208c: 0x0  nop
    ctx->pc = 0x14208cu;
    // NOP
    // 0x142090: 0x0  nop
    ctx->pc = 0x142090u;
    // NOP
    // 0x142094: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x142094u;
    {
        const bool branch_taken_0x142094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142094) {
            ctx->pc = 0x142080u;
            goto label_142080;
        }
    }
    ctx->pc = 0x14209Cu;
    // 0x14209c: 0x0  nop
    ctx->pc = 0x14209cu;
    // NOP
label_1420a0:
    // 0x1420a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1420a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1420a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1420a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420a8: 0x24a50898  addiu       $a1, $a1, 0x898
    ctx->pc = 0x1420a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
    // 0x1420ac: 0xc04f53a  jal         func_13D4E8
    ctx->pc = 0x1420ACu;
    SET_GPR_U32(ctx, 31, 0x1420B4u);
    ctx->pc = 0x1420B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1420ACu;
            // 0x1420b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4E8u;
    if (runtime->hasFunction(0x13D4E8u)) {
        auto targetFn = runtime->lookupFunction(0x13D4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420B4u; }
        if (ctx->pc != 0x1420B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x13d4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420B4u; }
        if (ctx->pc != 0x1420B4u) { return; }
    }
    ctx->pc = 0x1420B4u;
    // 0x1420b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1420b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1420b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1420b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420bc: 0x24a508a0  addiu       $a1, $a1, 0x8A0
    ctx->pc = 0x1420bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2208));
    // 0x1420c0: 0xc04f53a  jal         func_13D4E8
    ctx->pc = 0x1420C0u;
    SET_GPR_U32(ctx, 31, 0x1420C8u);
    ctx->pc = 0x1420C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1420C0u;
            // 0x1420c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4E8u;
    if (runtime->hasFunction(0x13D4E8u)) {
        auto targetFn = runtime->lookupFunction(0x13D4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420C8u; }
        if (ctx->pc != 0x1420C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x13d4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420C8u; }
        if (ctx->pc != 0x1420C8u) { return; }
    }
    ctx->pc = 0x1420C8u;
    // 0x1420c8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1420c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1420cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1420ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420d0: 0xc04f53a  jal         func_13D4E8
    ctx->pc = 0x1420D0u;
    SET_GPR_U32(ctx, 31, 0x1420D8u);
    ctx->pc = 0x1420D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1420D0u;
            // 0x1420d4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4E8u;
    if (runtime->hasFunction(0x13D4E8u)) {
        auto targetFn = runtime->lookupFunction(0x13D4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420D8u; }
        if (ctx->pc != 0x1420D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x13d4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420D8u; }
        if (ctx->pc != 0x1420D8u) { return; }
    }
    ctx->pc = 0x1420D8u;
    // 0x1420d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1420d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420dc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1420dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1420e0: 0xc04f53a  jal         func_13D4E8
    ctx->pc = 0x1420E0u;
    SET_GPR_U32(ctx, 31, 0x1420E8u);
    ctx->pc = 0x1420E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1420E0u;
            // 0x1420e4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4E8u;
    if (runtime->hasFunction(0x13D4E8u)) {
        auto targetFn = runtime->lookupFunction(0x13D4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420E8u; }
        if (ctx->pc != 0x1420E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x13d4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1420E8u; }
        if (ctx->pc != 0x1420E8u) { return; }
    }
    ctx->pc = 0x1420E8u;
    // 0x1420e8: 0xa2400012  sb          $zero, 0x12($s2)
    ctx->pc = 0x1420e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1420ec: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x1420ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1420f0: 0xae530014  sw          $s3, 0x14($s2)
    ctx->pc = 0x1420f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 19));
    // 0x1420f4: 0xae330014  sw          $s3, 0x14($s1)
    ctx->pc = 0x1420f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 19));
    // 0x1420f8: 0xa2500013  sb          $s0, 0x13($s2)
    ctx->pc = 0x1420f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 19), (uint8_t)GPR_U32(ctx, 16));
    // 0x1420fc: 0xa2300013  sb          $s0, 0x13($s1)
    ctx->pc = 0x1420fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 16));
    // 0x142100: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x142100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
    // 0x142104: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x142104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x142108: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x142108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x14210c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x14210cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x142110: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x142110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x142114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14211c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14211cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142128: 0x3e00008  jr          $ra
    ctx->pc = 0x142128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142128u;
            // 0x14212c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142080u: goto label_142080;
            case 0x1420A0u: goto label_1420a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142130u;
}
