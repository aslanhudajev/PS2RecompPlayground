#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecInputSpaceCount
// Address: 0x11a1b8 - 0x11a1ec
void videoDecInputSpaceCount_0x11a1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a1b8u;

    // 0x11a1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a1bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a1c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11a1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1c4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x11a1c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
    // 0x11a1c8: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x11a1c8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)8u)));
    // 0x11a1cc: 0xc046836  jal         func_11A0D8
    ctx->pc = 0x11A1CCu;
    SET_GPR_U32(ctx, 31, 0x11A1D4u);
    ctx->pc = 0x11A1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1CCu;
            // 0x11a1d0: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)12u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0D8u;
    if (runtime->hasFunction(0x11A0D8u)) {
        auto targetFn = runtime->lookupFunction(0x11A0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1D4u; }
        if (ctx->pc != 0x11A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x11a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1D4u; }
        if (ctx->pc != 0x11A1D4u) { return; }
    }
    ctx->pc = 0x11A1D4u;
    // 0x11a1d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11a1d8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x11a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11a1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a1e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1E4u;
            // 0x11a1e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A1ECu;
}
