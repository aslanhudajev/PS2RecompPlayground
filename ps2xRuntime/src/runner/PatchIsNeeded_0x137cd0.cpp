#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PatchIsNeeded
// Address: 0x137cd0 - 0x137d38
void PatchIsNeeded_0x137cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PatchIsNeeded_0x137cd0");
#endif

    ctx->pc = 0x137cd0u;

    // 0x137cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137cd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137cdc: 0xc04bb44  jal         func_12ED10
    ctx->pc = 0x137CDCu;
    SET_GPR_U32(ctx, 31, 0x137CE4u);
    ctx->pc = 0x137CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137CDCu;
            // 0x137ce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED10u;
    if (runtime->hasFunction(0x12ED10u)) {
        auto targetFn = runtime->lookupFunction(0x12ED10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CE4u; }
        if (ctx->pc != 0x137CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOsdConfigParam_0x12ed10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137CE4u; }
        if (ctx->pc != 0x137CE4u) { return; }
    }
    ctx->pc = 0x137CE4u;
    // 0x137ce4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ce8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x137ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x137cec: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x137cecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8191u)));
    // 0x137cf0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x137cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x137cf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x137cf4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x137cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cfc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x137cfcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8192u)));
    // 0x137d00: 0xc04bb40  jal         func_12ED00
    ctx->pc = 0x137D00u;
    SET_GPR_U32(ctx, 31, 0x137D08u);
    ctx->pc = 0x137D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D00u;
            // 0x137d04: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED00u;
    if (runtime->hasFunction(0x12ED00u)) {
        auto targetFn = runtime->lookupFunction(0x12ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D08u; }
        if (ctx->pc != 0x137D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOsdConfigParam_0x12ed00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D08u; }
        if (ctx->pc != 0x137D08u) { return; }
    }
    ctx->pc = 0x137D08u;
    // 0x137d08: 0xc04bb44  jal         func_12ED10
    ctx->pc = 0x137D08u;
    SET_GPR_U32(ctx, 31, 0x137D10u);
    ctx->pc = 0x137D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D08u;
            // 0x137d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED10u;
    if (runtime->hasFunction(0x12ED10u)) {
        auto targetFn = runtime->lookupFunction(0x12ED10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D10u; }
        if (ctx->pc != 0x137D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOsdConfigParam_0x12ed10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D10u; }
        if (ctx->pc != 0x137D10u) { return; }
    }
    ctx->pc = 0x137D10u;
    // 0x137d10: 0xc04bb40  jal         func_12ED00
    ctx->pc = 0x137D10u;
    SET_GPR_U32(ctx, 31, 0x137D18u);
    ctx->pc = 0x137D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D10u;
            // 0x137d14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED00u;
    if (runtime->hasFunction(0x12ED00u)) {
        auto targetFn = runtime->lookupFunction(0x12ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D18u; }
        if (ctx->pc != 0x137D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOsdConfigParam_0x12ed00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D18u; }
        if (ctx->pc != 0x137D18u) { return; }
    }
    ctx->pc = 0x137D18u;
    // 0x137d18: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x137d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x137d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137d20: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x137d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x137d24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137d28: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x137d28u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x137d2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x137d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x137d30: 0x3e00008  jr          $ra
    ctx->pc = 0x137D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D30u;
            // 0x137d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137D38u;
}
