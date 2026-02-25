#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PowerOffCB
// Address: 0x103c28 - 0x103ca0
void PowerOffCB_0x103c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PowerOffCB_0x103c28");
#endif

    ctx->pc = 0x103c28u;

    // 0x103c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103c2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103c30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103c34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x103c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103c38: 0x3c110021  lui         $s1, 0x21
    ctx->pc = 0x103c38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
    // 0x103c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103c40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103c44: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x103C44u;
    SET_GPR_U32(ctx, 31, 0x103C4Cu);
    ctx->pc = 0x103C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103C44u;
            // 0x103c48: 0xae32da24  sw          $s2, -0x25DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294957604), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C4Cu; }
        if (ctx->pc != 0x103C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C4Cu; }
        if (ctx->pc != 0x103C4Cu) { return; }
    }
    ctx->pc = 0x103C4Cu;
    // 0x103c4c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x103c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x103c50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x103c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x103c54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c58: 0x24a53bd0  addiu       $a1, $a1, 0x3BD0
    ctx->pc = 0x103c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15312));
    // 0x103c5c: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x103c5cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)18u)));
    // 0x103c60: 0xc04c430  jal         func_1310C0
    ctx->pc = 0x103C60u;
    SET_GPR_U32(ctx, 31, 0x103C68u);
    ctx->pc = 0x103C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103C60u;
            // 0x103c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (runtime->hasFunction(0x1310C0u)) {
        auto targetFn = runtime->lookupFunction(0x1310C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C68u; }
        if (ctx->pc != 0x103C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAddCmdHandler_0x1310c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C68u; }
        if (ctx->pc != 0x103C68u) { return; }
    }
    ctx->pc = 0x103C68u;
    // 0x103c68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103C68u;
    {
        const bool branch_taken_0x103c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103C68u;
            // 0x103c6c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c68) {
            ctx->pc = 0x103C7Cu;
            goto label_103c7c;
        }
    }
    ctx->pc = 0x103C70u;
    // 0x103c70: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x103C70u;
    SET_GPR_U32(ctx, 31, 0x103C78u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C78u; }
        if (ctx->pc != 0x103C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C78u; }
        if (ctx->pc != 0x103C78u) { return; }
    }
    ctx->pc = 0x103C78u;
    // 0x103c78: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x103c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_103c7c:
    // 0x103c7c: 0xae20da24  sw          $zero, -0x25DC($s1)
    ctx->pc = 0x103c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294957604), GPR_U32(ctx, 0));
    // 0x103c80: 0xac52da40  sw          $s2, -0x25C0($v0)
    ctx->pc = 0x103c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 18));
    // 0x103c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x103c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103c8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103c90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c98: 0x3e00008  jr          $ra
    ctx->pc = 0x103C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103C98u;
            // 0x103c9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103C7Cu: goto label_103c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103CA0u;
}
