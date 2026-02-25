#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotHitFunction_Laser
// Address: 0x152970 - 0x1529cc
void ShotHitFunction_Laser_0x152970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotHitFunction_Laser_0x152970");
#endif

    ctx->pc = 0x152970u;

    // 0x152970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152974: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x152978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15297c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x152980: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x152980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152984: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x152984u;
    {
        const bool branch_taken_0x152984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152984) {
            ctx->pc = 0x1529C0u;
            goto label_1529c0;
        }
    }
    ctx->pc = 0x15298Cu;
    // 0x15298c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152990: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x152990u;
    {
        const bool branch_taken_0x152990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152990) {
            ctx->pc = 0x1529C0u;
            goto label_1529c0;
        }
    }
    ctx->pc = 0x152998u;
    // 0x152998: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x152998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15299c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15299Cu;
    {
        const bool branch_taken_0x15299c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15299c) {
            ctx->pc = 0x1529C0u;
            goto label_1529c0;
        }
    }
    ctx->pc = 0x1529A4u;
    // 0x1529a4: 0x0  nop
    ctx->pc = 0x1529a4u;
    // NOP
    // 0x1529a8: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1529a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1529ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1529acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1529b0: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x1529b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
    // 0x1529b4: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1529b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1529b8: 0xc053f08  jal         func_14FC20
    ctx->pc = 0x1529B8u;
    SET_GPR_U32(ctx, 31, 0x1529C0u);
    ctx->pc = 0x1529BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1529B8u;
            // 0x1529bc: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC20u;
    if (runtime->hasFunction(0x14FC20u)) {
        auto targetFn = runtime->lookupFunction(0x14FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529C0u; }
        if (ctx->pc != 0x1529C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserKill_0x14fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529C0u; }
        if (ctx->pc != 0x1529C0u) { return; }
    }
    ctx->pc = 0x1529C0u;
label_1529c0:
    // 0x1529c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1529c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1529c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1529C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1529C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1529C4u;
            // 0x1529c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1529C0u: goto label_1529c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1529CCu;
}
