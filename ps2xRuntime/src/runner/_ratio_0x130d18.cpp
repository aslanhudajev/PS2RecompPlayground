#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ratio
// Address: 0x130d18 - 0x130dd8
void _ratio_0x130d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ratio_0x130d18");
#endif

    ctx->pc = 0x130d18u;

    // 0x130d18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130d1c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x130d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x130d20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x130d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x130d24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x130d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d2c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x130d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x130d30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x130d34: 0xc04c286  jal         func_130A18
    ctx->pc = 0x130D34u;
    SET_GPR_U32(ctx, 31, 0x130D3Cu);
    ctx->pc = 0x130D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130D34u;
            // 0x130d38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A18u;
    if (runtime->hasFunction(0x130A18u)) {
        auto targetFn = runtime->lookupFunction(0x130A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D3Cu; }
        if (ctx->pc != 0x130D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x130a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D3Cu; }
        if (ctx->pc != 0x130D3Cu) { return; }
    }
    ctx->pc = 0x130D3Cu;
    // 0x130d3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d44: 0xc04c286  jal         func_130A18
    ctx->pc = 0x130D44u;
    SET_GPR_U32(ctx, 31, 0x130D4Cu);
    ctx->pc = 0x130D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130D44u;
            // 0x130d48: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A18u;
    if (runtime->hasFunction(0x130A18u)) {
        auto targetFn = runtime->lookupFunction(0x130A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D4Cu; }
        if (ctx->pc != 0x130D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x130a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D4Cu; }
        if (ctx->pc != 0x130D4Cu) { return; }
    }
    ctx->pc = 0x130D4Cu;
    // 0x130d4c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x130d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x130d50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x130d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d54: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x130d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x130d58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x130d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130d5c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x130d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x130d60: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x130d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130d64: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x130d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x130d68: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x130d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x130d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130d70: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130D70u;
    {
        const bool branch_taken_0x130d70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x130D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D70u;
            // 0x130d74: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d70) {
            ctx->pc = 0x130D98u;
            goto label_130d98;
        }
    }
    ctx->pc = 0x130D78u;
    // 0x130d78: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x130d78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x130d7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130d80: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x130d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x130d84: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x130d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x130d88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x130d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130d8c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x130d8cu;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
    // 0x130d90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x130D90u;
    {
        const bool branch_taken_0x130d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D90u;
            // 0x130d94: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d90) {
            ctx->pc = 0x130DB4u;
            goto label_130db4;
        }
    }
    ctx->pc = 0x130D98u;
label_130d98:
    // 0x130d98: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x130d98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x130d9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x130d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130da0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x130da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x130da4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x130da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x130da8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x130da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130dac: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x130dacu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x130db0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x130db0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
label_130db4:
    // 0x130db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130db8: 0xc04a3e2  jal         func_128F88
    ctx->pc = 0x130DB8u;
    SET_GPR_U32(ctx, 31, 0x130DC0u);
    ctx->pc = 0x130DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130DB8u;
            // 0x130dbc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F88u;
    if (runtime->hasFunction(0x128F88u)) {
        auto targetFn = runtime->lookupFunction(0x128F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DC0u; }
        if (ctx->pc != 0x130DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DC0u; }
        if (ctx->pc != 0x130DC0u) { return; }
    }
    ctx->pc = 0x130DC0u;
    // 0x130dc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130dc4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x130dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130dc8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x130dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130dcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x130dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x130DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130DD0u;
            // 0x130dd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130D98u: goto label_130d98;
            case 0x130DB4u: goto label_130db4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130DD8u;
}
