#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dispClear
// Address: 0x11b1d0 - 0x11b2c4
void dispClear_0x11b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dispClear_0x11b1d0");
#endif

    ctx->pc = 0x11b1d0u;

    // 0x11b1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b1d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x11b1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b1d8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11b1dc: 0x3c080fff  lui         $t0, 0xFFF
    ctx->pc = 0x11b1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4095 << 16));
    // 0x11b1e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11b1e4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x11b1e4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)65535u)));
    // 0x11b1e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b1ec: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x11b1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x11b1f0: 0x2610d980  addiu       $s0, $s0, -0x2680
    ctx->pc = 0x11b1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957440));
    // 0x11b1f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11b1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1f8: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11b1fc: 0x2088024  and         $s0, $s0, $t0
    ctx->pc = 0x11b1fcu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 8)));
    // 0x11b200: 0x8c890030  lw          $t1, 0x30($a0)
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11b204: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11b204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11b208: 0x24c4001f  addiu       $a0, $a2, 0x1F
    ctx->pc = 0x11b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x11b20c: 0x24c2003e  addiu       $v0, $a2, 0x3E
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 62));
    // 0x11b210: 0xe4382a  slt         $a3, $a3, $a0
    ctx->pc = 0x11b210u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11b214: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x11b214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11b218: 0x87100b  movn        $v0, $a0, $a3
    ctx->pc = 0x11b218u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x11b21c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11b220: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x11b220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x11b224: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x11b224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x11b228: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x11b22c: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x11b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x11b230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b234: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x11b234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x11b238: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11b238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11b23c: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x11b23cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x11b240: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x11b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x11b244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11b244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b248: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11b248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b24c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b250: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11b250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11b254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b258: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b25c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b260: 0xc046d24  jal         func_11B490
    ctx->pc = 0x11B260u;
    SET_GPR_U32(ctx, 31, 0x11B268u);
    ctx->pc = 0x11B264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B260u;
            // 0x11b264: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B490u;
    if (runtime->hasFunction(0x11B490u)) {
        auto targetFn = runtime->lookupFunction(0x11B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B268u; }
        if (ctx->pc != 0x11B268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B268u; }
        if (ctx->pc != 0x11B268u) { return; }
    }
    ctx->pc = 0x11B268u;
    // 0x11b268: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b26c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b270: 0xc046ce2  jal         func_11B388
    ctx->pc = 0x11B270u;
    SET_GPR_U32(ctx, 31, 0x11B278u);
    ctx->pc = 0x11B274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B270u;
            // 0x11b274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B388u;
    if (runtime->hasFunction(0x11B388u)) {
        auto targetFn = runtime->lookupFunction(0x11B388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B278u; }
        if (ctx->pc != 0x11B278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setFlatRect_0x11b388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B278u; }
        if (ctx->pc != 0x11B278u) { return; }
    }
    ctx->pc = 0x11B278u;
    // 0x11b278: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11b278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11b27c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11b280: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x11b280u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)40976u)));
    // 0x11b284: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x11b284u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)40992u)));
    // 0x11b288: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x11b288u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x11b28c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11b290: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11b290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11b294: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x11b294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11b298: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11b298u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)40960u)));
    // 0x11b29c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x11b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x11b2a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11b2a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x11b2a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2a8: 0xc043322  jal         func_10CC88
    ctx->pc = 0x11B2A8u;
    SET_GPR_U32(ctx, 31, 0x11B2B0u);
    ctx->pc = 0x11B2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2A8u;
            // 0x11b2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B2B0u; }
        if (ctx->pc != 0x11B2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B2B0u; }
        if (ctx->pc != 0x11B2B0u) { return; }
    }
    ctx->pc = 0x11B2B0u;
    // 0x11b2b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b2b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11b2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b2b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11b2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B2BCu;
            // 0x11b2c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B2C4u;
}
