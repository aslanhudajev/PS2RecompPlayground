#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_SIFTransfer
// Address: 0x173df0 - 0x173e38
void SOUND_SIFTransfer_0x173df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_SIFTransfer_0x173df0");
#endif

    ctx->pc = 0x173df0u;

    // 0x173df0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x173df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173df4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173df8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x173df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173dfc: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x173dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x173e00: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x173e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x173e04: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x173e08: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x173e08u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x173e0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173e10: 0x24840ae0  addiu       $a0, $a0, 0xAE0
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2784));
    // 0x173e14: 0x25290f80  addiu       $t1, $t1, 0xF80
    ctx->pc = 0x173e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3968));
    // 0x173e18: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x173e18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e1c: 0x256b3e40  addiu       $t3, $t3, 0x3E40
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15936));
    // 0x173e20: 0xc04c76e  jal         func_131DB8
    ctx->pc = 0x173E20u;
    SET_GPR_U32(ctx, 31, 0x173E28u);
    ctx->pc = 0x173E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E20u;
            // 0x173e24: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DB8u;
    if (runtime->hasFunction(0x131DB8u)) {
        auto targetFn = runtime->lookupFunction(0x131DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E28u; }
        if (ctx->pc != 0x173E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x131db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E28u; }
        if (ctx->pc != 0x173E28u) { return; }
    }
    ctx->pc = 0x173E28u;
    // 0x173e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e30: 0x3e00008  jr          $ra
    ctx->pc = 0x173E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E30u;
            // 0x173e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173E38u;
}
