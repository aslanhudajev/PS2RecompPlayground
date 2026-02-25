#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iDisableDmac
// Address: 0x12f940 - 0x12f960
void iDisableDmac_0x12f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iDisableDmac_0x12f940");
#endif

    ctx->pc = 0x12f940u;

    // 0x12f940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f948: 0xc04ba8c  jal         func_12EA30
    ctx->pc = 0x12F948u;
    SET_GPR_U32(ctx, 31, 0x12F950u);
    ctx->pc = 0x12EA30u;
    if (runtime->hasFunction(0x12EA30u)) {
        auto targetFn = runtime->lookupFunction(0x12EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F950u; }
        if (ctx->pc != 0x12F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iDisableDmac_0x12ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F950u; }
        if (ctx->pc != 0x12F950u) { return; }
    }
    ctx->pc = 0x12F950u;
    // 0x12f950: 0xf  sync
    ctx->pc = 0x12f950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f958: 0x3e00008  jr          $ra
    ctx->pc = 0x12F958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F958u;
            // 0x12f95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F960u;
}
