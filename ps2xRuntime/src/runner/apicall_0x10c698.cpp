#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: apicall
// Address: 0x10c698 - 0x10c6bc
void apicall_0x10c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("apicall_0x10c698");
#endif

    ctx->pc = 0x10c698u;

label_10c698:
    // 0x10c698: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10c698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10c69c:
    // 0x10c69c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c69cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10c6a0:
    // 0x10c6a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10c6a4:
    // 0x10c6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10c6a8:
    // 0x10c6a8: 0x40f809  jalr        $v0
label_10c6ac:
    if (ctx->pc == 0x10C6ACu) {
        ctx->pc = 0x10C6ACu;
            // 0x10c6ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10C6B0u;
        goto label_10c6b0;
    }
    ctx->pc = 0x10C6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10C6B0u);
        ctx->pc = 0x10C6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C6A8u;
            // 0x10c6ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C698u: goto label_10c698;
            case 0x10C69Cu: goto label_10c69c;
            case 0x10C6A0u: goto label_10c6a0;
            case 0x10C6A4u: goto label_10c6a4;
            case 0x10C6A8u: goto label_10c6a8;
            case 0x10C6ACu: goto label_10c6ac;
            case 0x10C6B0u: goto label_10c6b0;
            case 0x10C6B4u: goto label_10c6b4;
            case 0x10C6B8u: goto label_10c6b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10C6B0u; }
            if (ctx->pc != 0x10C6B0u) { return; }
        }
    }
    ctx->pc = 0x10C6B0u;
label_10c6b0:
    // 0x10c6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10c6b4:
    // 0x10c6b4: 0x3e00008  jr          $ra
label_10c6b8:
    if (ctx->pc == 0x10C6B8u) {
        ctx->pc = 0x10C6B8u;
            // 0x10c6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10C6BCu;
        goto label_fallthrough_0x10c6b4;
    }
    ctx->pc = 0x10C6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C6B4u;
            // 0x10c6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C698u: goto label_10c698;
            case 0x10C69Cu: goto label_10c69c;
            case 0x10C6A0u: goto label_10c6a0;
            case 0x10C6A4u: goto label_10c6a4;
            case 0x10C6A8u: goto label_10c6a8;
            case 0x10C6ACu: goto label_10c6ac;
            case 0x10C6B0u: goto label_10c6b0;
            case 0x10C6B4u: goto label_10c6b4;
            case 0x10C6B8u: goto label_10c6b8;
            default: break;
        }
        return;
    }
label_fallthrough_0x10c6b4:
    ctx->pc = 0x10C6BCu;
}
