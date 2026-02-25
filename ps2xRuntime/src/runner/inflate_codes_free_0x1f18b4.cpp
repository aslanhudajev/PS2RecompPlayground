#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_codes_free
// Address: 0x1f18b4 - 0x1f18dc
void inflate_codes_free_0x1f18b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_codes_free_0x1f18b4");
#endif

    ctx->pc = 0x1f18b4u;

label_1f18b4:
    // 0x1f18b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f18b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f18b8:
    // 0x1f18b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f18bc:
    // 0x1f18bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f18bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f18c0:
    // 0x1f18c0: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x1f18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_1f18c4:
    // 0x1f18c4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1f18c8:
    // 0x1f18c8: 0x60f809  jalr        $v1
label_1f18cc:
    if (ctx->pc == 0x1F18CCu) {
        ctx->pc = 0x1F18CCu;
            // 0x1f18cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F18D0u;
        goto label_1f18d0;
    }
    ctx->pc = 0x1F18C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F18D0u);
        ctx->pc = 0x1F18CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18C8u;
            // 0x1f18cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F18B4u: goto label_1f18b4;
            case 0x1F18B8u: goto label_1f18b8;
            case 0x1F18BCu: goto label_1f18bc;
            case 0x1F18C0u: goto label_1f18c0;
            case 0x1F18C4u: goto label_1f18c4;
            case 0x1F18C8u: goto label_1f18c8;
            case 0x1F18CCu: goto label_1f18cc;
            case 0x1F18D0u: goto label_1f18d0;
            case 0x1F18D4u: goto label_1f18d4;
            case 0x1F18D8u: goto label_1f18d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F18D0u; }
            if (ctx->pc != 0x1F18D0u) { return; }
        }
    }
    ctx->pc = 0x1F18D0u;
label_1f18d0:
    // 0x1f18d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f18d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f18d4:
    // 0x1f18d4: 0x3e00008  jr          $ra
label_1f18d8:
    if (ctx->pc == 0x1F18D8u) {
        ctx->pc = 0x1F18D8u;
            // 0x1f18d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F18DCu;
        goto label_fallthrough_0x1f18d4;
    }
    ctx->pc = 0x1F18D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F18D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18D4u;
            // 0x1f18d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F18B4u: goto label_1f18b4;
            case 0x1F18B8u: goto label_1f18b8;
            case 0x1F18BCu: goto label_1f18bc;
            case 0x1F18C0u: goto label_1f18c0;
            case 0x1F18C4u: goto label_1f18c4;
            case 0x1F18C8u: goto label_1f18c8;
            case 0x1F18CCu: goto label_1f18cc;
            case 0x1F18D0u: goto label_1f18d0;
            case 0x1F18D4u: goto label_1f18d4;
            case 0x1F18D8u: goto label_1f18d8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f18d4:
    ctx->pc = 0x1F18DCu;
}
