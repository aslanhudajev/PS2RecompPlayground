#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: kprintf
// Address: 0x130cc8 - 0x130d00
void kprintf_0x130cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kprintf_0x130cc8");
#endif

    ctx->pc = 0x130cc8u;

    // 0x130cc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x130cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x130ccc: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x130cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x130cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130cd4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x130cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x130cd8: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x130cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x130cdc: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x130cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x130ce0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x130ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x130ce4: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x130ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x130ce8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x130ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x130cec: 0xc04c1b6  jal         func_1306D8
    ctx->pc = 0x130CECu;
    SET_GPR_U32(ctx, 31, 0x130CF4u);
    ctx->pc = 0x130CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130CECu;
            // 0x130cf0: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1306D8u;
    if (runtime->hasFunction(0x1306D8u)) {
        auto targetFn = runtime->lookupFunction(0x1306D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CF4u; }
        if (ctx->pc != 0x130CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _printf_0x1306d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CF4u; }
        if (ctx->pc != 0x130CF4u) { return; }
    }
    ctx->pc = 0x130CF4u;
    // 0x130cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x130CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130CF8u;
            // 0x130cfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130D00u;
}
