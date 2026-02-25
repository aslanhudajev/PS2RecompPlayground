#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_set_dictionary
// Address: 0x1f0764 - 0x1f07a8
void inflate_set_dictionary_0x1f0764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_set_dictionary_0x1f0764");
#endif

    ctx->pc = 0x1f0764u;

    // 0x1f0764: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f076c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0778: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f0778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f077c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x1F077Cu;
    SET_GPR_U32(ctx, 31, 0x1F0784u);
    ctx->pc = 0x1F0780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F077Cu;
            // 0x1f0780: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0784u; }
        if (ctx->pc != 0x1F0784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0784u; }
        if (ctx->pc != 0x1F0784u) { return; }
    }
    ctx->pc = 0x1F0784u;
    // 0x1f0784: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f0788: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1f0788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f078c: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x1f078cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x1f0790: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1f0790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1f0794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f079c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f079cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f07a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F07A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F07A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F07A0u;
            // 0x1f07a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F07A8u;
}
