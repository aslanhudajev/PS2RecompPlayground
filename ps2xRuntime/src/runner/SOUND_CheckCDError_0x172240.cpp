#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_CheckCDError
// Address: 0x172240 - 0x172264
void SOUND_CheckCDError_0x172240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_CheckCDError_0x172240");
#endif

    ctx->pc = 0x172240u;

    // 0x172240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172248: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x172248u;
    SET_GPR_U32(ctx, 31, 0x172250u);
    ctx->pc = 0x17224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172248u;
            // 0x17224c: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172250u; }
        if (ctx->pc != 0x172250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172250u; }
        if (ctx->pc != 0x172250u) { return; }
    }
    ctx->pc = 0x172250u;
    // 0x172250: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x172250u;
    SET_GPR_U32(ctx, 31, 0x172258u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172258u; }
        if (ctx->pc != 0x172258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172258u; }
        if (ctx->pc != 0x172258u) { return; }
    }
    ctx->pc = 0x172258u;
    // 0x172258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17225c: 0x3e00008  jr          $ra
    ctx->pc = 0x17225Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17225Cu;
            // 0x172260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172264u;
}
