#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: changeInputVolume
// Address: 0x186ea0 - 0x186ee8
void changeInputVolume_0x186ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("changeInputVolume_0x186ea0");
#endif

    ctx->pc = 0x186ea0u;

    // 0x186ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186ea4: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x186ea4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x186ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186eac: 0x24060f80  addiu       $a2, $zero, 0xF80
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3968));
    // 0x186eb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186ebc: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x186EBCu;
    SET_GPR_U32(ctx, 31, 0x186EC4u);
    ctx->pc = 0x186EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186EBCu;
            // 0x186ec0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186EC4u; }
        if (ctx->pc != 0x186EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186EC4u; }
        if (ctx->pc != 0x186EC4u) { return; }
    }
    ctx->pc = 0x186EC4u;
    // 0x186ec4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x186ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186ecc: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x186eccu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x186ed0: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x186ED0u;
    SET_GPR_U32(ctx, 31, 0x186ED8u);
    ctx->pc = 0x186ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186ED0u;
            // 0x186ed4: 0x24061080  addiu       $a2, $zero, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186ED8u; }
        if (ctx->pc != 0x186ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186ED8u; }
        if (ctx->pc != 0x186ED8u) { return; }
    }
    ctx->pc = 0x186ED8u;
    // 0x186ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x186EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186EE0u;
            // 0x186ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186EE8u;
}
