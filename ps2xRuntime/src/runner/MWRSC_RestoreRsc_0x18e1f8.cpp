#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWRSC_RestoreRsc
// Address: 0x18e1f8 - 0x18e268
void MWRSC_RestoreRsc_0x18e1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWRSC_RestoreRsc");


    ctx->pc = 0x18e1f8u;

    // 0x18e1f8: 0x27bdffe0
    ctx->pc = 0x18e1f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e1fc: 0xffb00000
    ctx->pc = 0x18e1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e200: 0x3c100024
    ctx->pc = 0x18e200u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x18e204: 0xffbf0010
    ctx->pc = 0x18e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e208: 0x8e023b70
    ctx->pc = 0x18e208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15216)));
    // 0x18e20c: 0x10400013
    ctx->pc = 0x18E20Cu;
    {
        const bool branch_taken_0x18e20c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E210u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x18e20c) {
            ctx->pc = 0x18E25Cu;
            goto label_18e25c;
        }
    }
    ctx->pc = 0x18E214u;
    // 0x18e214: 0xc06389a
    ctx->pc = 0x18E214u;
    SET_GPR_U32(ctx, 31, 0x18E21Cu);
    ctx->pc = 0x18E268u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwrsc_WaitSprDmaEnd_0x18e268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E21Cu; }
        else if (ctx->pc != 0x18E21Cu) { ctx->pc = 0x18E21Cu; }
    }
    if (ctx->pc != 0x18E21Cu) { return; }
    ctx->pc = 0x18E21Cu;
    // 0x18e21c: 0x3c06002f
    ctx->pc = 0x18e21cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)47 << 16));
    // 0x18e220: 0x202d
    ctx->pc = 0x18e220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e224: 0x24c68400
    ctx->pc = 0x18e224u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294935552));
    // 0x18e228: 0xc0638a2
    ctx->pc = 0x18E228u;
    SET_GPR_U32(ctx, 31, 0x18E230u);
    ctx->pc = 0x18E22Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x18E288u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSPR_SaveSprMem_0x18e288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E230u; }
        else if (ctx->pc != 0x18E230u) { ctx->pc = 0x18E230u; }
    }
    if (ctx->pc != 0x18E230u) { return; }
    ctx->pc = 0x18E230u;
    // 0x18e230: 0xc0638d6
    ctx->pc = 0x18E230u;
    SET_GPR_U32(ctx, 31, 0x18E238u);
    ctx->pc = 0x18E234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x18E358u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWDMA_WaitEnd_0x18e358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E238u; }
        else if (ctx->pc != 0x18E238u) { ctx->pc = 0x18E238u; }
    }
    if (ctx->pc != 0x18E238u) { return; }
    ctx->pc = 0x18E238u;
    // 0x18e238: 0x3c04002e
    ctx->pc = 0x18e238u;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
    // 0x18e23c: 0x24054000
    ctx->pc = 0x18e23cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x18e240: 0x24844400
    ctx->pc = 0x18e240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17408));
    // 0x18e244: 0xc0638bc
    ctx->pc = 0x18E244u;
    SET_GPR_U32(ctx, 31, 0x18E24Cu);
    ctx->pc = 0x18E248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSPR_RestoreSprMem_0x18e2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E24Cu; }
        else if (ctx->pc != 0x18E24Cu) { ctx->pc = 0x18E24Cu; }
    }
    if (ctx->pc != 0x18E24Cu) { return; }
    ctx->pc = 0x18E24Cu;
    // 0x18e24c: 0xc0638d6
    ctx->pc = 0x18E24Cu;
    SET_GPR_U32(ctx, 31, 0x18E254u);
    ctx->pc = 0x18E250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x18E358u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWDMA_WaitEnd_0x18e358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E254u; }
        else if (ctx->pc != 0x18E254u) { ctx->pc = 0x18E254u; }
    }
    if (ctx->pc != 0x18E254u) { return; }
    ctx->pc = 0x18E254u;
    // 0x18e254: 0xae003b70
    ctx->pc = 0x18e254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15216), GPR_U32(ctx, 0));
    // 0x18e258: 0xdfbf0010
    ctx->pc = 0x18e258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18e25c:
    // 0x18e25c: 0xdfb00000
    ctx->pc = 0x18e25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e260: 0x3e00008
    ctx->pc = 0x18E260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E25Cu: goto label_18e25c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E268u;
}
