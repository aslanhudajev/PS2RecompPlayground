#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_StartCommand
// Address: 0x173d70 - 0x173de8
void SOUND_StartCommand_0x173d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_StartCommand_0x173d70");
#endif

    ctx->pc = 0x173d70u;

    // 0x173d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173d74: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x173d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x173d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173d7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x173d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d88: 0x8c24a050  lw          $a0, -0x5FB0($at)
    ctx->pc = 0x173d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942800)));
    // 0x173d8c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x173D8Cu;
    {
        const bool branch_taken_0x173d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x173d8c) {
            ctx->pc = 0x173DC0u;
            goto label_173dc0;
        }
    }
    ctx->pc = 0x173D94u;
    // 0x173d94: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173d98: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173D98u;
    SET_GPR_U32(ctx, 31, 0x173DA0u);
    ctx->pc = 0x173D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D98u;
            // 0x173d9c: 0x24841890  addiu       $a0, $a0, 0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DA0u; }
        if (ctx->pc != 0x173DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DA0u; }
        if (ctx->pc != 0x173DA0u) { return; }
    }
    ctx->pc = 0x173DA0u;
    // 0x173da0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x173da4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173da8: 0x8c25a050  lw          $a1, -0x5FB0($at)
    ctx->pc = 0x173da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942800)));
    // 0x173dac: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173DACu;
    SET_GPR_U32(ctx, 31, 0x173DB4u);
    ctx->pc = 0x173DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173DACu;
            // 0x173db0: 0x248418c0  addiu       $a0, $a0, 0x18C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DB4u; }
        if (ctx->pc != 0x173DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DB4u; }
        if (ctx->pc != 0x173DB4u) { return; }
    }
    ctx->pc = 0x173DB4u;
    // 0x173db4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173db8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173DB8u;
    SET_GPR_U32(ctx, 31, 0x173DC0u);
    ctx->pc = 0x173DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173DB8u;
            // 0x173dbc: 0x248418f0  addiu       $a0, $a0, 0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DC0u; }
        if (ctx->pc != 0x173DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DC0u; }
        if (ctx->pc != 0x173DC0u) { return; }
    }
    ctx->pc = 0x173DC0u;
label_173dc0:
    // 0x173dc0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x173dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x173dc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x173dc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x173dc8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x173dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x173dcc: 0xac23a050  sw          $v1, -0x5FB0($at)
    ctx->pc = 0x173dccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942800), GPR_U32(ctx, 3));
    // 0x173dd0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173dd4: 0xac200ab0  sw          $zero, 0xAB0($at)
    ctx->pc = 0x173dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 0));
    // 0x173dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173de0: 0x3e00008  jr          $ra
    ctx->pc = 0x173DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DE0u;
            // 0x173de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173DC0u: goto label_173dc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173DE8u;
}
