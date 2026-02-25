#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MsgDisp
// Address: 0x186700 - 0x186790
void MsgDisp_0x186700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MsgDisp_0x186700");
#endif

    ctx->pc = 0x186700u;

    // 0x186700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x186704: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18670c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186710: 0x8c22be80  lw          $v0, -0x4180($at)
    ctx->pc = 0x186710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950528)));
    // 0x186714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186718: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186718u;
    {
        const bool branch_taken_0x186718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x186718) {
            ctx->pc = 0x186730u;
            goto label_186730;
        }
    }
    ctx->pc = 0x186720u;
    // 0x186720: 0xc0619e8  jal         func_1867A0
    ctx->pc = 0x186720u;
    SET_GPR_U32(ctx, 31, 0x186728u);
    ctx->pc = 0x1867A0u;
    if (runtime->hasFunction(0x1867A0u)) {
        auto targetFn = runtime->lookupFunction(0x1867A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186728u; }
        if (ctx->pc != 0x186728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgLoading_0x1867a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186728u; }
        if (ctx->pc != 0x186728u) { return; }
    }
    ctx->pc = 0x186728u;
    // 0x186728: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18672c: 0xac30be80  sw          $s0, -0x4180($at)
    ctx->pc = 0x18672cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950528), GPR_U32(ctx, 16));
label_186730:
    // 0x186730: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x186730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x186734: 0x2442bec0  addiu       $v0, $v0, -0x4140
    ctx->pc = 0x186734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950592));
    // 0x186738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18673c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x18673cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x186740: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x186740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x186744: 0x2442bea0  addiu       $v0, $v0, -0x4160
    ctx->pc = 0x186744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950560));
    // 0x186748: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x186748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x18674c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x18674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x186750: 0x2442be88  addiu       $v0, $v0, -0x4178
    ctx->pc = 0x186750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950536));
    // 0x186754: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x186754u;
    SET_GPR_U32(ctx, 31, 0x18675Cu);
    ctx->pc = 0x186758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186754u;
            // 0x186758: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18675Cu; }
        if (ctx->pc != 0x18675Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18675Cu; }
        if (ctx->pc != 0x18675Cu) { return; }
    }
    ctx->pc = 0x18675Cu;
    // 0x18675c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x186760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186764: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x186764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x186768: 0xc0619b8  jal         func_1866E0
    ctx->pc = 0x186768u;
    SET_GPR_U32(ctx, 31, 0x186770u);
    ctx->pc = 0x18676Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186768u;
            // 0x18676c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866E0u;
    if (runtime->hasFunction(0x1866E0u)) {
        auto targetFn = runtime->lookupFunction(0x1866E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186770u; }
        if (ctx->pc != 0x186770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1866e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186770u; }
        if (ctx->pc != 0x186770u) { return; }
    }
    ctx->pc = 0x186770u;
    // 0x186770: 0xc0619b4  jal         func_1866D0
    ctx->pc = 0x186770u;
    SET_GPR_U32(ctx, 31, 0x186778u);
    ctx->pc = 0x1866D0u;
    if (runtime->hasFunction(0x1866D0u)) {
        auto targetFn = runtime->lookupFunction(0x1866D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186778u; }
        if (ctx->pc != 0x186778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1866d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186778u; }
        if (ctx->pc != 0x186778u) { return; }
    }
    ctx->pc = 0x186778u;
    // 0x186778: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x186778u;
    SET_GPR_U32(ctx, 31, 0x186780u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186780u; }
        if (ctx->pc != 0x186780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186780u; }
        if (ctx->pc != 0x186780u) { return; }
    }
    ctx->pc = 0x186780u;
    // 0x186780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186788: 0x3e00008  jr          $ra
    ctx->pc = 0x186788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186788u;
            // 0x18678c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186730u: goto label_186730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186790u;
}
